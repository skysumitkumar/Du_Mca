<!--
// <summary>This client file contains functions to script v6.4 WMP players</summary>
// <remarks>
//	<para>Project: Multimedia Viewers v2.0</para>
//	<para>Author:	John McCormick</para>
//	<para>Created:	19 Nov. 2001</para>
// </remarks>
var g_iCurrent = 0;
var g_sCurPos = -1;

//<function>
// <summary>Starts media player and changes UI to reflect this</summary>
//		<para>Changes the "play" button to "pause" state</para>
function doPlayState()
{	
	var strPath = "";
	var iWhack = "";
	var strImage = "";	

	strPath = btnPlayState.src;
	iWhack = strPath.lastIndexOf("/")
	strImage = strPath.substring(iWhack + 1, iWhack + 5);
	if ("play" == strImage) 
	{ 
		objWMP.play();
		btnPlayState.src = "/seminar/shared/images/pause_dn.gif";
		btnPlayState.title = g_sPauseTitle;
		btnPlayState.alt = g_sPauseTitle;
	}
	if ("paus" == strImage) 
	{
		if (( giStatePaused > objWMP.PlayState ) || ( giStateBuffering <= objWMP.PlayState )) { return; }
		objWMP.pause(); 
		btnPlayState.src = "/seminar/shared/images/play_dn.gif";
		btnPlayState.title = g_sPlayTitle;
		btnPlayState.alt = g_sPlayTitle;
		window.clearInterval(g_lStatusInterval);
	}
}
//</function

//<function>
//  <summary>Set playstate to arbitrary state</summary>
function finalizePlayState(iState)
{
	if ((giStatePaused == iState) || (giStateStopped == iState))
	{
		btnPlayState.src = "/seminar/shared/images/play_stat.gif";
		btnPlayState.title = g_sPlayTitle;
		btnPlayState.alt = g_sPlayTitle;
	}
	
	if (giStateStopped == iState)
	{
		objWMP.CurrentPosition = 0; 
	}
	
	if (giStatePlaying == iState)
	{
		btnPlayState.src = "/seminar/shared/images/pause_stat.gif";
		btnPlayState.title = g_sPauseTitle;
		btnPlayState.alt = g_sPauseTitle;
	}
}
//</function>

//<function>
// <summary>Stops media player and changes UI to reset to initial state</summary>
function doStop()
{
	objWMP.Stop();
	objWMP.CurrentPosition = 0;
	btnStop.src = "/seminar/shared/images/stop_stat.gif";		
	btnPlayState.src = "/seminar/shared/images/play_stat.gif";
	btnPlayState.title = g_sPlayTitle;
	btnPlayState.alt = g_sPlayTitle;
	var slType = g_sPresType.toLowerCase();
	g_iCurrent = parseInt(fnMoveToItem(0));
	window.clearInterval(g_lStatusInterval);
	g_lTimerFudgeFactor = 0;
}
//</function>

//<function>
//  <summary>sets timeline to previous toc element</summary>
function doPrevious()
{
	var x = g_iCurrent - 1;
	g_iCurrent = parseInt(fnMoveToItem(x));
	if ( !isNaN(g_iCurrent) )
	{
		objWMP.CurrentPosition = fnConvertToSeconds(gaAction[g_iCurrent][0]);
		//2003-01-30
		if (gfTranscriptState == giStateTranscriptAttached)
		{	document.frames(0).forceSync(gaAction[g_iCurrent][0]);	}
		if (gfTranscriptState == giStateTranscriptDetached)
		{	objTranscriptWindow.forceSync(gaAction[g_iCurrent][0]);	}
	}
	else
	{	g_iCurrent = (x + 1);	}
}
//</function>

//<function>
//  <summary>sets timeline to next toc element</summary>
function doNext()
{
	var x = g_iCurrent + 1;
	g_iCurrent = parseInt(fnMoveToItem(x));
	if ( !isNaN(g_iCurrent) )
	{
		objWMP.CurrentPosition = fnConvertToSeconds(gaAction[g_iCurrent][0]);
		//2003-01-30
		if (gfTranscriptState == giStateTranscriptAttached)
		{	document.frames(0).forceSync(gaAction[g_iCurrent][0]);	}
		if (gfTranscriptState == giStateTranscriptDetached)
		{	objTranscriptWindow.forceSync(gaAction[g_iCurrent][0]);	}
	}
	else
	{	g_iCurrent = (x - 1);	}
}
//</function>

//<function>
//	<summary>Resets the mute button to the previous state</summary>
function resetMute()
{
	if (true == objWMP.Mute)
	{
		btnMute.src = sMuteOnBuffer; 
		btnMute.alt = g_sSoundsTitle;
		btnMute.title = g_sSoundsTitle;
	}
	else
	{ 
		btnMute.src = sMuteOffBuffer;
		btnMute.alt = g_sMuteTitle;
		btnMute.title = g_sMuteTitle;
	}
}
//</function

//<function>
//	<summary>toggles the mute button to the roll state</summary>
function toggleMute()
{	
	if (true == objWMP.Mute) { return; }
	btnMute.src = "/seminar/shared/images/mute_roll.gif";
}
//</function

//<function>
// 	<summary>Toggles mute state of media player</summary>
function doMute()
{
	objWMP.Mute = ! objWMP.Mute;
}
//</function

//********************************************
//*** Volume Functions ***************************
//********************************************
//<function>
//	<summary>Responds to the volume slider's value.</summary>
function doVolume(obj)
{
	adjustVolume(obj);
	oSlider.style.visibility = "hidden";
	oSlider.style.left = -1000;
}
function adjustVolume(obj)
{
	var iVolume = parseFloat(obj.value);
	iVolume = (iVolume * 18) - 1800;
	if (-1800 > iVolume) { iVolume = -1800; }
	if ( 0 < iVolume) { iVolume = 0; }
	objWMP.Volume = iVolume;
}
//</function>
//<function>
//	<summary>Shows the volume bar</summary>
function showVolumeBar(obj)
{
	if ("undefined" != typeof(divControls))	{ fClientY = (divControls.style.posTop + 31); }
	obj.style.left = fClientX;
	obj.style.top = fClientY;
	obj.style.visibility = "visible";
}
//</function>

//********************************************
//*** Timing Functions ***************************
//********************************************
//<function>
//  <summary>Initializes player objects</summary>
function fnInitWMP()
{
	try 
	{	window.setInterval("fnManageCounter(objWMP, spnMessage)", 1000);	}
	catch(e)
	{	alert("Error: " + (e.number & 0xFFFF) + " - " + e.description);	}
}
//</function>

//<function>
// <summary>Creates the timer display string</summary>
// <param name="obj">Media object</param>
// <param name="objTarget">Output text</param>
function fnManageCounter(obj,objTarget)
{
	var sText = "";
	if ( 100 > obj.bufferingProgress )
	{
		var iWhack = objTarget.innerText.lastIndexOf(".")
		if (-1 == iWhack)
		{
			sText = g_sBuffer;
		}
		else
		{
			sText = objTarget.innerText.substring(0, iWhack + 1);
		}
		sText += " " + obj.bufferingProgress + "%";
	}
	else if ( giStateStopped == obj.PlayState )
	{
		sText = fnConvertToDisplayTime(0) + g_sTotalTime;
	}
	else
	{
		var lTimeToDisplay = (parseInt(obj.CurrentPosition, 10) + g_lTimerFudgeFactor);
		sText = fnConvertToDisplayTime(lTimeToDisplay) + g_sTotalTime;
	}
	objTarget.innerText = sText;
}
//</function>

//<function>
//  <summary>Seeks to a particular time in the timeline</summary>
function seekTime(sTimeTarget)
{
	var sSeekTarget = fnConvertToSeconds(sTimeTarget);
	var i = 0;
	while ( i < gaAction.length )
	{
		if ( sSeekTarget == fnConvertToSeconds(gaAction[i][0]) )
		{
			g_iCurrent = fnMoveToItem(i);
			objWMP.CurrentPosition = sSeekTarget;
			if (giStatePlaying != objWMP.PlayState)
			{
				objWMP.Play();
				finalizePlayState(giStatePlaying);
			}
			//2003-01-30 - forceSync
			if (gfTranscriptState == giStateTranscriptAttached)
			{	document.frames(0).forceSync(gaAction[g_iCurrent][0]);	}
			if (gfTranscriptState == giStateTranscriptDetached)
			{	objTranscriptWindow.forceSync(gaAction[g_iCurrent][0]);	}
			return;
		}
		i++
	}
	// the following is executed if sTimeTarget is not in the gaAction array
	objWMP.CurrentPosition = sSeekTarget;
	if (giStatePlaying != objWMP.PlayState)
	{
		objWMP.Play();
		finalizePlayState(giStatePlaying);
	}
	
}
//</function>

//<function>
//  <summary>Monitor the status of the playing media</summary>
//  <param name="obj">Media player object</param>
function fnMonitorStatus(obj)
{
	if ((giStatePlaying == obj.PlayState) && (parseInt(obj.CurrentPosition) > 0))
	{
		g_sCurPos = parseInt(obj.CurrentPosition);
		var i = 0;
		while ( i < gaAction.length )
		{

			if ( g_sCurPos == fnConvertToSeconds(gaAction[i][0]) )
			{
				if ( ("slide" == gaAction[i][1].toLowerCase()) || ("jump" == gaAction[i][1].toLowerCase()) )
					{ g_iCurrent = fnMoveToItem(i); }
				break;
			}
			i++
		}
		var j = 0;
		while ( j < gaDemo.length )
		{
			if ( g_sCurPos == fnConvertToSeconds(gaDemo[j][0]) )
			{
				//document.all(gaDemo[j][1]).click();
				if ( 640 > parseInt(gaDemo[j][3])) { gaDemo[j][3] = 800; }
				if ( 480 > parseInt(gaDemo[j][4])) { gaDemo[j][4] = 600; }
				var sSize = gaDemo[j][3] + "x" + gaDemo[j][4];
				doInlineDemo(gaDemo[j][1], sSize, gaDemo[j][5], gaDemo[j][6]);
				
				g_lTimerFudgeFactor = ( g_lTimerFudgeFactor + fnConvertToSeconds(gaDemo[j][2]) );
				obj.CurrentPosition = (obj.CurrentPosition + 1);
				break;
			}
			j++;
		}
		if ("undefined" != typeof(oPos) )
		{	doSlider(document.all("oPos"));	}
	}
}
//</function>

//<function>
//  <summary>Moves toc to input item DOES NOT start playback</summary>
//  <param name="iItem">new item to place as active</param>
//  <returns>new current item index</returns>
function fnMoveToItem(iItem)
{
	if (iItem < 0) { return ""; }
	if (iItem >= gaAction.length) { return ""; }
	
	if ( "slide" == gaAction[iItem][1] )
	{
		fnToggleDisplay(document.all(gaAction[g_iCurrent][2], null));
		fnToggleDisplay(document.all(gaAction[iItem][2], null));
	}

	var oOld = document.all("li" + g_iCurrent);
	if (null != oOld )
	{	oOld.className = "styNormal";	}
	
	var oNew = document.all("li" + iItem);
	if (null != oNew )
	{
		oNew.className = "styHighlighted";
		oNew.scrollIntoView(false);
	}

	return iItem
}
//</function>

//<function>
//  <summary>Launches demos and sets play state</summary>
function fnViewDemo(sUri)
{
	finalizePlayState(giStatePaused);
	fnViewMMC(sUri);}
//</function>
//--> 