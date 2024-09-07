<!--
// <summary>Global functions for MMC Feed</summary>
// <remarks>
//	<para>Project: 	MMC Templates</para>
//	<para>Author:	John McCormick {Audacity, Inc.}</para>
//	<para>Created:	23 May 2001</para>
//  <para>Updated:	19 Oct. 2001</para>
//	<para>Modifed:	27 Jan. 2003</para>
// </remarks>

// Globals specific to this function
var g_sHeight = 593;
var g_sWidth = 647;

//<function>
//	<summary>Shows/Hides specified div tag and changes displayed image</summary>
//	<param name="objDiv">Div tag to modify</param>
//	<param name="objImg">Image tag to modify</param>
function fnToggleDisplay(objDiv, objImg)
{
	if ( oBD.doesActiveX )
	{
		if ("none" == objDiv.style.display ) 
		{
			objDiv.style.display = "";
			if ( null != objImg )
			{ 
				objDiv.scrollIntoView();
				objImg.src = "/seminar/shared/images/nav_minus.gif"; 
			}
		}
		else 
		{
			objDiv.style.display = "none";
			if ( null != objImg ) { objImg.src = "/seminar/shared/images/nav_plus.gif"; }
		}
	}
}
function fnArbitraryShow(obj, newStyle)
{
	if ( oBD.doesActiveX )
	{
		if ("undefined" != typeof(obj) )
		{	obj.style.display = newStyle;	}
	}
}
//</function>

//<function>
//	<summary>Opens an input url in new window of standard dimensions</summary>
//	<param name="sViewURI">Url to display</param>
function fnViewMMC(sViewURI)
{
	sViewURI = sViewURI.replace("&amp;", "&");  // This is REQUIRED to fix damnable XSLT bug with output escaping
	sViewURI = sViewURI.toLowerCase();
	var sAttribs = "";
	sAttribs += "width=" + g_sWidth + ",height=" + g_sHeight + ",directories=no,status=no,menubar=no,resizable=yes";
	if (0 < sViewURI.indexOf("/seminar") )
	{
		sAttribs += ",toolbar=no";
		if ( !oBD.doesActiveX )	{ sAttribs += ",scrollbars=yes,dependent=yes"; }
		doPlayState();
		if ("undefined" != typeof(WMPVer) ) { sViewURI += "&WMPVer=" + WMPVer; }	//2003-01-08
		window.location.href = sViewURI;
	}
	else
	{
		sAttribs += "width=" + g_sWidth + ",height=" + g_sHeight + ",directories=no,status=no,menubar=no,resizable=yes";
		if ( !oBD.doesActiveX )
			{ sAttribs += ",scrollbars=yes,dependent=yes,toolbar=no;"; }
		else
			{ sAttribs += ",scrollbars=no"; }
		return(window.open(sViewURI, "_blank", sAttribs));
	}
}
//</function>

//<function>
//	<summary>Opens an input url in a new window of specified dimensions</summary>
//	<param name="sViewURI">Url to display</param>
//	<param name="sSize">Width x Height of video to display</param>
function fnViewMMCwSize(sViewURI, sSize) 
{
	sViewURI = sViewURI.replace("&amp;", "&");  // This is REQUIRED to fix damnable XSLT bug with output escaping	
	sSize = sSize.toUpperCase();
	var x = sSize.indexOf("X", 1);
	var sWidth = g_sWidth;
	var sHeight = g_sHeight;
	if ( x > 0 ) 
	{
		sWidth = sSize.substring(0, x);
		sHeight = sSize.substring(x+1, sSize.length);
	}
	var sAttribs = "width=" + sWidth + ",height=" + sHeight + ",directories=no,status=no,menubar=no,scrollbars=yes,resizable=yes";
	if ( !oBD.doesActiveX )
		{ sAttribs += ",dependent=yes,toolbar=no"; }
	return(window.open(sViewURI, "Demonstration", sAttribs));
}
//</function>

//<function>
//	<summary>Displays the MS.com footer information pages in a new window</summary>
//	<param name="sUrl">Url to open</param>
function fnShowFooterUrl(sUrl)
{
	window.open(sUrl,"Link");
}
//</function>

//<function>
//  <summary>Create email link</summary>
function fnDoEmailLink(objTarget)
{
	var sTitle = "";
	var sUrl = document.location.href;
	sUrl = sUrl.toLowerCase();
	var x = sUrl.indexOf("/seminar", 1);
	sUrl = "http://www.microsoft.com" + sUrl.substring(x, sUrl.length);
	sUrl = sUrl.replace("&", "%26");
	if ( true == oBD.doesActiveX ) { sTitle = document.title; } else { sTitle = "Presentation"; }
	objTarget.href = "mailto:?subject=[Microsoft Online Seminars Link] " + sTitle + "&body=" + sUrl;
}
//</function>

//<function>
// <summary>Converts a raw number of seconds to the format HH:MM:SS</summary>
// <param name="lTime">Long integer denoting # of seconds to convert</param>
function fnConvertToDisplayTime(lTime) 
{
	var sTemp = "";
	var lTemp = 0;
	lTemp = Math.floor((lTime / 3600));
	if (lTemp < 1) 
	{
		sTemp = "00";
	}
	else 
	{
		sTemp = fnZeroFill(lTemp, 2);
	}
	lTemp = Math.floor(((lTime % 3600) / 60));
	sTemp += ":" + fnZeroFill(lTemp, 2);
	
	lTemp = Math.floor((lTime % 60));
	sTemp += ":" + fnZeroFill(lTemp, 2);

	return(sTemp);
}
//</function

//<function>
// <summary>Converts the format HH:MM:SS to a raw number of seconds</summary>
// <param name="sTime">string to convert</param>
function fnConvertToSeconds(sTime) 
{
	var asTemp = sTime.split(":");
	var lTemp = 0;
	lTemp = parseInt((asTemp[0] * 3600), 10) + parseInt((asTemp[1] * 60), 10) + parseInt(asTemp[2], 10);
	return(lTemp);
}
//</function>

//<function>
// <summary>Forces conversion of a number to a string</summary>
// <param name="iNum">number to convert</param>
function fnCvtNtoS(iNum) 
{
	return ("" + iNum);
}
//</function>

//<function>
// <summary>Prepends zeros to an input number to return string of format 00#</summary>
// <param name="iNum">Input number</param>
// <param name="iDigits">number of total digits of output string</param>
function fnZeroFill(iNum, iDigits) 
{ 
	var sNum = fnCvtNtoS(iNum); 
	while (sNum.length < iDigits)
		sNum = "0" + sNum;
	return sNum;
}
//</function>
//-->
  