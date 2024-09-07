<!--
// <summary>This client file contains functions to manipulate the UI of MMC Transcript viewers</summary>
// <remarks>
//	<para>Project: 	Multimedia Viewers v2.5</para>
//	<para>Author:	John McCormick</para>
//	<para>Created:	28 Jan. 2003</para>
// </remarks>

// Global buffers used to reset button changes
var sTranscript2BufferDN = "/seminar/shared/images/trans2_dn.gif";

//********************************************
//	Begin Transcript Functions
//********************************************
//<function>
//  <summary>launches the transcript window</summary>
function doTranscript2(sLivePath)
{
	if (0 < gfTranscriptState)
	{	// Close transcript
		btnTranscript.src = "/seminar/shared/images/trans2_stat.gif";
		btnTranscript.title = g_sShowTranscript;
		btnTranscript.alt = g_sShowTranscript;
		spnMsg.innerText = g_sShowTranscript;
		if ( ("undefined" == typeof(objTranscriptWindow)) || (null == objTranscriptWindow) )
		{
			document.all.fraTranscript.style.display="none";
			doHide();
		}
		else
		{	
			objTranscriptWindow.close();
			objTranscriptWindow = null;
		}
		gfTranscriptState = giStatePlayerOnly;
	}
	else
	{	// Reveal transcript
		btnTranscript.src = "/seminar/shared/images/trans2_dn.gif";
		btnTranscript.title = g_sHideTranscript;
		btnTranscript.alt = g_sHideTranscript;
		spnMsg.innerText = g_sHideTranscript;
		gfTranscriptState = giStateTranscriptAttached;
		doReveal();
		document.all.fraTranscript.style.display="";
	}
}
//</function>

//<function>
//  <summary>Resets the Transcript button to the previous state</summary>
function resetTranscript2()
{
	var strPath = btnTranscript.src;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	if (0 <= strImage.indexOf("trans2_dn"))
	{	btnTranscript.src = sTranscript2BufferDN; }
	else
	{	btnTranscript.src = sTranscript2Buffer; }
}
//</function>

//<function>
//  <summary>Toggles the Transcript button to the roll state</summary>
function toggleTranscript2()
{
	var strPath = btnTranscript.src;
	var strImage = strPath.substring(strPath.lastIndexOf("/") + 1);
	//if ("trans2_dn.gif" == strImage) { btnTranscript.src = "/seminar/shared/images/.gif"; }
	//if ("trans2_stat.gif" == strImage) { btnTranscript.src = "/seminar/shared/images/trans2_roll.gif"; }
	btnTranscript.src = "/seminar/shared/images/trans2_roll.gif";
}
//</function>

//********************************************
//*** Resize *******************************
//********************************************
//<function>
//	<summary>Resizes window to show attached transcript.</summary>
function doReveal()
{
	iTargetSize = 720;
	iStep = 20;
	iStartSizeX = parseInt(window.document.body.clientWidth);
	for (x=iStartSizeX;x<=iTargetSize;x=x+iStep)
	{
		window.resizeBy(iStep,0);
	} 
}
//</function>

//<function>
//	<summary>Resizes window to hide attached transcript.</summary>
function doHide()
{
	iTargetSize = 334;
	iStartSizeX = parseInt(window.document.body.clientWidth);
	iStep = -20;
	for (x=iStartSizeX;x>+iTargetSize;x=x+iStep)
	{
		window.resizeBy(iStep,0);
	}
}
//</function>

//********************************************
//*** Detach *******************************
//********************************************
//<function>
//	<summary>Detaches the transcript</summary>
function doDetach()
{
	if ( ("undefined" == typeof(objTranscriptWindow)) || (null == objTranscriptWindow) )
	{	// detach
		document.all.fraTranscript.style.display="none";
		doHide();
	
		var sViewURI = document.all.fraTranscript.src;
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

		objTranscriptWindow = window.open(sViewURI, "Transcript", sAttribs);
		objTranscriptWindow.focus();
		gfTranscriptState = giStateTranscriptDetached;
	}
	else
	{	// attach
		objTranscriptWindow.close();
		objTranscriptWindow = null;
		document.all.fraTranscript.style.display="";
		gfTranscriptState = giStateTranscriptAttached;
		doReveal();
	}	
}
//</function>
//--> 