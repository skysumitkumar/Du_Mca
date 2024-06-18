<!--
// <summary>This client file contains functions to manipulate the UI of MMC Viewers</summary>
// <remarks>
//	<para>Project: 	Multimedia Viewers v2.0</para>
//	<para>Author:	John McCormick</para>
//	<para>Created:	19 Oct. 2001</para>
//	<para>Modifed:	27 Jan. 2003</para>
// </remarks>

// Global buffers used to reset button changes
var sPauseBuffer = "/seminar/shared/images/pause_stat.gif";
var sPlayBuffer = "/seminar/shared/images/play_stat.gif";
var sStopBuffer = "/seminar/shared/images/stop_stat.gif";
var sPreviousBuffer = "/seminar/shared/images/prev_stat.gif";
var sNextBuffer = "/seminar/shared/images/fw_stat.gif";
var sMuteOffBuffer = "/seminar/shared/images/mute_stat.gif";
var sMuteOnBuffer = "/seminar/shared/images/mute_dn.gif";
var sShowVolumeBuffer = "/seminar/shared/images/showVolume_stat.gif";
var sTranscriptBuffer = "/seminar/shared/images/tran_stat.gif";
var sTranscript2Buffer = "/seminar/shared/images/trans2_stat.gif";
var sRelatedBuffer = "/seminar/shared/images/related_stat.gif";
var sHelpBuffer = "/seminar/shared/images/help_stat.gif";
var sDemoHideBuffer = "/seminar/shared/images/demo_hide_stat.gif";
var sDemoRevealBuffer = "/seminar/shared/images/demo_reveal_stat.gif";
var sRelatedBuffer = "/seminar/shared/images/related_stat.gif";

// Global variables relating to media controls
var gfTranscriptState = 0;
var giStatePlayerOnly = 0;
var giStateTranscriptAttached = 1;
var giStateTranscriptDetached = 2;
var objTranscriptWindow = null;
var giStateStopped = 0;
var giStatePaused = 1;
var giStatePlaying = 2;
var giStateStopped9 = 1;
var giStatePaused9 = 2;
var giStatePlaying9 = 3;
var giStateBuffering = 6;
var g_lTimerFudgeFactor = 0;
var g_lStatusInterval = 0;
var g_lMsgInterval = 0;

//********************************************
//Begin Media UI Functions
//********************************************

//<function>
//  <summary>Interprets current state and calls correct button buffer</summary>
function resetPlayState()
{
	var strPath = btnPlayState.src;
	var iWhack = strPath.lastIndexOf("/")
	var strImage = strPath.substring(iWhack + 1, iWhack + 5);
	if ("play" == strImage) { btnPlayState.src = sPlayBuffer; }
	if ("paus" == strImage) { btnPlayState.src = sPauseBuffer; }
}
//</function>

//<function>
//	<summary>Toggles PlayState button to the roll state</summary>
function togglePlayState()
{
	var strPath = btnPlayState.src;
	var iWhack = strPath.lastIndexOf("/")
	var strImage = strPath.substring(iWhack + 1, iWhack + 5);
	if ("play" == strImage) 
	{ 
		sPlayBuffer = strPath;
		strImage = strPath.substring(iWhack + 1);
		if ( "play_stat.gif" == strImage ) { btnPlayState.src = "/seminar/shared/images/play_roll.gif"; }
	}
	if ("paus" == strImage )
	{
		sPauseBuffer = strPath;
		strImage = strPath.substring(iWhack + 1);
		if ( "pause_stat.gif" == strImage ) { btnPlayState.src = "/seminar/shared/images/pause_roll.gif"; }
	}
}
//</function

//<function>
//  <summary>Toggles the PlayState button to the down state</summary>
function downPlayState()
{
	var strPath = btnPlayState.src;
	var iWhack = strPath.lastIndexOf("/")
	var strImage = strPath.substring(iWhack + 1, iWhack + 5);
	if ("play" == strImage) { btnPlayState.src = "/seminar/shared/images/pause_dn.gif"; }
	if ("paus" == strImage) { btnPlayState.src = "/seminar/shared/images/play_dn.gif"; }
}
//</function>

//********************************************
//*** Stop **********************************
//********************************************

//<function>
//	<summary>Resets the stop button to the previous state</summary>
function resetStop()
{
	btnStop.src = sStopBuffer;
}
//</function

//<function>
//	<summary>Toggles stop button to the roll state</summary>
function toggleStop()
{
	var strPath = btnStop.src;
	sStopBuffer = strPath;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if ("stop_stat.gif" == strImage) { btnStop.src = "/seminar/shared/images/stop_roll.gif"; }
}
//</function

//<function>
//  <summary>Toggles the Stop button to the down state</summary>
function downStop()
{
	btnStop.src = "/seminar/shared/images/stop_dn.gif";
}
//</function>

//********************************************
//*** Previous ******************************
//********************************************

//<function>
//  <summary>Resets the Previous button to the previous state</summary>
function resetPrevious()
{
	btnPrevious.src = sPreviousBuffer;
}
//</function>

//<function>
//  <summary>Toggles the Previous button to the roll state</summary>
function togglePrevious()
{
	var strPath = btnPrevious.src;
	sPreviousBuffer = strPath;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if ("prev_stat.gif" == strImage) { btnPrevious.src = "/seminar/shared/images/prev_roll.gif"; }
}
//</function>

//<function>
//  <summary>Toggles the Previous button to the down state</summary>
function downPrevious()
{
	btnPrevious.src = "/seminar/shared/images/prev_dn.gif";
}
//</function>

//********************************************
//*** Next **********************************
//********************************************

//<function>
//  <summary>Resets the Next button to the previous state</summary>
function resetNext()
{
	btnNext.src = sNextBuffer;
}
//</function>

//<function>
//  <summary>Toggles the Next button to the roll state</summary>
function toggleNext()
{
	var strPath = btnNext.src;
	sNextBuffer = strPath;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if ("fw_stat.gif" == strImage) { btnNext.src = "/seminar/shared/images/fw_roll.gif"; }
}
//</function>

//<function>
//  <summary>Toggles the Next button to the down state</summary>
function downNext()
{
	btnNext.src = "/seminar/shared/images/fw_dn.gif";
}
//</function>

//********************************************
//*** Mute **********************************
//********************************************

//<function>
//  <summary>Toggles the Mute button to the down state</summary>
function downMute()
{
	btnMute.src = "/seminar/shared/images/mute_dn.gif";
}
//</function>

//********************************************
//*** Volume **********************************
//********************************************
var fClientX =0;
var fClientY =0;

//<function>
//  <summary>Resets the Down button to the previous state</summary>
function resetShowVolume()
{
	btnShowVolume.src = sShowVolumeBuffer;
}
//</function>

//<function>
//  <summary>Toggles the Down button to the roll state</summary>
function toggleShowVolume()
{
	var strPath = btnShowVolume.src;
	sShowVolumeBuffer = strPath;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if ("showVolume_stat.gif" == strImage) { btnShowVolume.src = "/seminar/shared/images/showVolume_roll.gif"; }
}
//</function>

//<function>
//  <summary>Toggles the Down button to the down state</summary>
function downShowVolume(evt)
{
	btnShowVolume.src = "/seminar/shared/images/showVolume_dn.gif";
	fClientX = ((evt.clientX - evt.offsetX) - 23);
	fClientY = ((evt.clientY - evt.offsetY) - 10) + evt.srcElement.height;
}
//</function>

//********************************************
//*** Transcript ****************************
//********************************************

//<function>
//  <summary>Resets the Transcript button to the previous state</summary>
function resetTranscript()
{
	var strPath = btnTranscript.src;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if (0 <= strImage.indexOf("trans2"))
	{	btnTranscript.src = sTranscript2Buffer; }
	else
	{	btnTranscript.src = sTranscriptBuffer; }
}
//</function>

//<function>
//  <summary>Toggles the Transcript button to the roll state</summary>
function toggleTranscript()
{
	var strPath = btnTranscript.src;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	//sTranscriptBuffer = strPath;
	if ("tran_stat.gif" == strImage) { btnTranscript.src = "/seminar/shared/images/tran_roll.gif"; }
	if ("trans2_stat.gif" == strImage) { btnTranscript.src = "/seminar/shared/images/trans2_roll.gif"; }
}
//</function>

//<function>
//  <summary>Toggles the Transcript button to the down state</summary>
function downTranscript()
{
	var strPath = btnTranscript.src;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if (0 <= strImage.indexOf("trans2"))
	{	btnTranscript.src = "/seminar/shared/images/trans2_dn.gif"; }
	else
	{	btnTranscript.src = "/seminar/shared/images/tran_dn.gif"; }
}
//</function>

//<function>
//  <summary>launches the transcript window</summary>
function doTranscript(sLivePath)
{
	var sViewURI = "/seminar/shared/asp/transcript.asp?url=" + sLivePath;
	sViewURI = sViewURI.replace("&amp;", "&");  // This is REQUIRED to fix damnable XSLT bug with output escaping	
	var sWidth = 398;
	var sHeight = 539;
	var sTop = parseInt(window.screenTop) - 22;
	var sLeft = parseInt(window.screenLeft) + parseInt(window.document.body.clientWidth) + 20;
	var sAttribs = "width=" + sWidth + ",height=" + sHeight + ",left=" + sLeft + ",top=" + sTop;
	if ( oBD.doesActiveX )
		{ sAttribs += ",directories=no,status=no,menubar=no,scrollbars=no,resizable=yes"; }
	else
		{ sAttribs += ",dependent=yes,toolbar=no,directories=no,status=no,menubar=no,scrollbars=yes,resizable=yes"; }

	if ( ("undefined" != typeof(objTranscriptWindow)) || (null == objTranscriptWindow) )
	{	// Don't reopen window, but do allow focus method to operate.
		objTranscriptWindow = window.open(sViewURI, "Transcript", sAttribs);
	}
	objTranscriptWindow.focus();
}
//</function>

//********************************************
//*** Related ****************************
//********************************************

//<function>
//  <summary>Resets the Related button to the previous state</summary>
function resetRelated()
{
	btnRelated.src = sRelatedBuffer;
}
//</function>

//<function>
//  <summary>Toggles the Related button to the roll state</summary>
function toggleRelated()
{
	var strPath = btnRelated.src;
	sRelatedBuffer = strPath;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if ("related_stat.gif" == strImage) { 	btnRelated.src = "/seminar/shared/images/related_roll.gif"; }
}
//</function>

//<function>
//  <summary>Toggles the Related button to the down state</summary>
function downRelated()
{
	btnRelated.src = "/seminar/shared/images/related_dn.gif";
}
//</function>

//<function>
//  <summary>launches the Related window</summary>
function doRelated(sLivePath)
{
	var sUrl = "/seminar/shared/asp/related.asp?url=" + sLivePath;
	sSize = "290x375";
	fnViewMMCwSize(sUrl, sSize);
}
//</function>

//********************************************
//*** Help **********************************
//********************************************

//<function>
//  <summary>Resets the Help button to the previous state</summary>
function resetHelp()
{
	btnHelp.src = sHelpBuffer;
}
//</function>

//<function>
//  <summary>Toggles the Help button to the roll state</summary>
function toggleHelp()
{
	var strPath = btnHelp.src;
	sHelpBuffer = strPath;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if ("help_stat.gif" == strImage) { btnHelp.src = "/seminar/shared/images/help_roll.gif"; }
}
//</function>

//<function>
//  <summary>Toggles the Help button to the down state</summary>
function downHelp()
{
	btnHelp.src = "/seminar/shared/images/help_dn.gif";
}
//</function>

//<function>
//  <summary>launches the help window</summary>
function doHelp()
{
	fnShowFooterUrl("/isapi/gomscom.asp?target=/seminar/en/faq.asp");
}
//</function>

//********************************************
//*** Inline Demo *******************************
//********************************************

//<function>
// <summary>Launches the inline demos</summary>
function doInlineDemo(sLivePath, sSize, sLanguage, sCountryRegion)
{
	var sUrl = "/seminar/shared/asp/viewInline.asp?url=" + sLivePath + "&lang=" + sLanguage + "&cr=" + sCountryRegion;
	if ("undefined" != typeof(WMPVer) ) { sUrl += "&WMPVer=" + WMPVer; }	//2003-01-08
	doPlayState();
	fnViewMMCwSize(sUrl, sSize);
}
//</function>

//********************************************
//*** DemoHide ***************************
//********************************************

//<function>
//  <summary>Resets the DemoHide button to the previous state</summary>
function resetDemoHide()
{
	var strPath = btnDemoHide.src;
	var iWhack = strPath.lastIndexOf("/")
	var strImage = strPath.substring(iWhack + 1, iWhack + 10);
	if ("demo_hide" == strImage) { btnDemoHide.src = sDemoHideBuffer; }
	if ("demo_reve" == strImage) { btnDemoHide.src = sDemoRevealBuffer; }
}
//</function>

//<function>
//  <summary>Toggles the demo hide button to the roll state</summary>
function toggleDemoHide()
{
	var strPath = btnDemoHide.src;
	var iWhack = strPath.lastIndexOf("/")
	var strImage = strPath.substring(iWhack + 1, iWhack + 10);
	if ("demo_hide" == strImage)
	{
		sDemoHideBuffer = strPath;
		strImage = strPath.substring(iWhack + 1);
		if ( "demo_hide_stat.gif" == strImage ) { btnDemoHide.src = "/seminar/shared/images/demo_hide_roll.gif"; }
	}	
	else if ("demo_reve" == strImage )
	{
		sDemoRevealBuffer = strPath;
		strImage = strPath.substring(iWhack + 1);
		if ( "demo_reveal_stat.gif" == strImage ) { btnDemoHide.src = "/seminar/shared/images/demo_reveal_roll.gif"; }
	}
	
}
//</function>

//<function>
//  <summary>Toggles the DemoHide button the the down state</summary>
function downDemoHide()
{
	var strPath = btnDemoHide.src;
	var iWhack = strPath.lastIndexOf("/")
	var strImage = strPath.substring(iWhack + 1, iWhack + 10);
	if ("demo_hide" == strImage) { btnDemoHide.src = "/seminar/shared/images/demo_hide_dn.gif"; }
	if ("demo_reve" == strImage) { btnDemoHide.src = "/seminar/shared/images/demo_reveal_dn.gif"; }
}
//</function>

//<function>
//  <summary>Shows/hides the media player controls</summary>
function doDemoHide()
{
	var strPath = btnDemoHide.src;
	var iWhack = strPath.lastIndexOf("/")
	var strImage = strPath.substring(iWhack + 1, iWhack + 10);
	if ("demo_hide" == strImage) 
	{ 
		btnDemoHide.src = "/seminar/shared/images/demo_reveal_dn.gif";
		btnDemoHide.alt = g_sShowTitle;
		btnDemoHide.title = g_sShowTitle;
	}
	if ("demo_reve" == strImage) 
	{
		btnDemoHide.src = "/seminar/shared/images/demo_hide_dn.gif";
		btnDemoHide.alt = g_sHideTitle;
		btnDemoHide.title = g_sHideTitle;
	}
	fnToggleDisplay(divControls, null);
}
//</function>
//--> 