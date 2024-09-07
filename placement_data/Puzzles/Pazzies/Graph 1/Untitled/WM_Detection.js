<!--
// <summary>Media Player Detection</summary>
// <remarks>
//	<para>Project: 	MMC Templates</para>
//	<para>Author:	Costin Iorgulescu {Excel Data}</para>
//	<para>Author:	John McCormick {Audacity, Inc.}</para>
//	<para>Created:	07 Jan 2003</para>
//	<para>The code below attempts to embed the older 6.x control and the newer v7-v9 control in the page.</para>
//	<para>Once at the END of the player detection code below the  following variables will be set:</para>
//	<global>fHasWMP - True if either WMP v6.4 or v7.0+ detected else False.</global>
//	<global>fHasWMP64 - True if WMP v6.4 detected else False.</global>
//	<global>fHasWMP7x - True if WMP v7.0+ detected else False.</global>
//	<global>WMPVer - String stating the Media Player version detected (e.g"6.4", "7.xx", "8.xx", "9.xx").</global>
// </remarks>
var WMPVer = "unknown";	// Set to WMP version string detected
var fHasWMP = false;		// True if either WMP v6.4 or v7+ found
var fHasWMP64 = false;	// True if WMP v6.4 found
var fHasWMP7x = false;	// True if WMP v7+ (8, 9) found

if ( (true == oBD.doesActiveX) && (5 <= oBD.majorVer) )
{
	try
	{
		var objWMP64 = new ActiveXObject("MediaPlayer.MediaPlayer.1"); 
		if ("undefined" != typeof(objWMP64.FileName)) { fHasWMP64 = true;}
	}
	catch(e)
	{	fHasWMP64 = false; }
	
	try
	{
		var objWMP7x = new ActiveXObject("WMPlayer.OCX");
		if ("undefined" != typeof(objWMP7x.URL)) { fHasWMP7x = true;}
	}
	catch(e)
	{	fHasWMP7x = false; }
		
	if ( (fHasWMP64) || (fHasWMP7x) ) { fHasWMP=true; }
	
	if ( fHasWMP7x )			{	WMPVer=objWMP7x.versionInfo; 	}
	else if ( fHasWMP64 ) 	{	WMPVer="6.4";	}
	else 						{	WMPVer="unknown"; }
}
//-->
