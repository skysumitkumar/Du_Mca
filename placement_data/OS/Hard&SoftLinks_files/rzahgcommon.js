// rzahgcommon.js
//
// (C) Copyright IBM Corporation, 2002, 2003                        //
// All rights reserved. Licensed Materials Property of IBM          //
// US Government Users Restricted Rights                            //
// Use, duplication or disclosure restricted by                     //
// GSA ADP Schedule Contract with IBM Corp.                         //

/* TRNOTE - BEGIN TRANSLATABLE TEXT */
var strLine1 = "This site is designed to be viewed with a browser that is frames, Javascript, and Java enabled.";
var strLine2 = "To use this site as intended, please ensure that you browser has these features enabled.";
/* TRNOTE: The following 4 variables are used to construct the following sentence:
**   Alternatively, you may want to use the <a href="index_acc.htm">screen reader accessible version</a>
**   of the Information Center,  or you may want to navigate directly to the <a href="rzahgicmain.htm">main content page.</a>
*/
var strLine3 = "Alternatively, you may want to use the";
var strLine4 = "screen reader accessible version";
var strLine5 = "of the Information Center,  or you may want to navigate directly to the";
var strLine6 = "main content page.";
/*TRNOTE: The following line is displayed on the status bar while the applet is synchronizing with the content.
  This occurs during initialization. */
var strSynch = "synching.";
/* TRNOTE - END TRANSLATABLE TEXT */

/* TRNOTE - BEGIN TRANSLATABLE VALUE */
/* Change this value to adjust the width of the frame that holds       */
/* the navigation applet.  Adjust the value to accomodate the          */
/* length of words in your language.  The value is measured in pixels  */
var nNavigationWidth = 200;
/* TRNOTE - END TRANSLATABLE VALUE */

//START NON-TRANSLATABLE

////////////////////////////////////////////////////////////////////////////////////////
// browser detection variables
////////////////////////////////////////////////////////////////////////////////////////
var detect = navigator.userAgent.toLowerCase();
var OS,browser,version,total,thestring;

if (checkIt('konqueror'))
{
	browser = "Konqueror";
	OS = "Linux";
}
else if (checkIt('omniweb')) browser = "OmniWeb"
else if (checkIt('opera')) browser = "Opera"
else if (checkIt('webtv')) browser = "WebTV";
else if (checkIt('icab')) browser = "iCab"
else if (checkIt('msie')) browser = "Internet Explorer"
else if (!checkIt('compatible'))
{
	browser = "Netscape Navigator"
	version = detect.charAt(8);
}
else browser = "An unknown browser";

if (!version) version = detect.charAt(place + thestring.length);

if (!OS)
{
	if (checkIt('linux')) OS = "Linux";
	else if (checkIt('x11')) OS = "Unix";
	else if (checkIt('mac')) OS = "Mac"
	else if (checkIt('win')) OS = "Windows"
	else OS = "an unknown operating system";
}

function checkIt(string)
{
	place = detect.indexOf(string) + 1;
	thestring = string;
	return place;
}

//////////////////////////////////////////////////////////////////////
var isNS, isNS6, isIE, isIE5, isOP5
function defineEnvVars(){
	isNS = (browser=='Netscape Navigator') ? true : false;
	isNS6 = (browser=='Netscape Navigator' && version>=5) ? true : false;
	isIE = (browser=='Internet Explorer') ? true : false;
	isIE5 = (browser=='Internet Explorer' && version>=5) ? true : false;
	isOP5 = (browser=='Opera' && version>=5) ? true : false;
//	top.dump("from rzahgcommon.js:\nbrowser="+browser+"\nisNS="+isNS+"\nisNS6="+isNS6+"\nisIE="+isIE+"\nisIE5="+isIE5+"\nisOP5="+isOP5);
//	window.status="from rzahgcommon.js:\nbrowser="+browser+"\nisNS="+isNS+"\nisNS6="+isNS6+"\nisIE="+isIE+"\nisIE5="+isIE5+"\nisOP5="+isOP5;
	isNS = (isOP5)? true : isNS;
	////////////////////////////////////////
	// detect whether we are Pre-GA
	strHostname = top.location.hostname.toLowerCase( );
	isPreGA = ( (strHostname.indexOf('submit.boulder.ibm.com') != -1) ||
				(strHostname.indexOf('rchland.ibm.com') != -1)) ? true : false;
	strHostname = top.location.hostname.toLowerCase( );
	isCD = (top.location.protocol.toLowerCase().indexOf('file') != -1) ? true : false;
	delimiter = (top.location.pathname.toLowerCase().indexOf("/") != -1) ? "/" : (oldpath.indexOf("\\") != -1) ? "\\" : alert("error in filepath");
	top.dump("top.location = "+top.location.href+"\nisPreGA = "+isPreGA+"\nisCD = "+isCD+"\ndelimiter = "+delimiter);
}
defineEnvVars();

////////////////////////////////////////////////////////////////////////////////////////
// functions to manipulate layers from MacroMedia
////////////////////////////////////////////////////////////////////////////////////////
function MM_findObj(n, d) { //v4.0
  var p,i,x;  if(!d) d=document; if((p=n.indexOf("?"))>0&&parent.frames.length) {
    d=parent.frames[n.substring(p+1)].document; n=n.substring(0,p);}
  if(!(x=d[n])&&d.all) x=d.all[n]; for (i=0;!x&&i<d.forms.length;i++) x=d.forms[i][n];
  for(i=0;!x&&d.layers&&i<d.layers.length;i++) x=MM_findObj(n,d.layers[i].document);
  if(!x && document.getElementById) x=document.getElementById(n); return x;
}

function MM_showHideLayers() { //v3.1 bug fix by dvb
  var i,p,v,obj,args=MM_showHideLayers.arguments;
  for (i=0; i<(args.length-2); i+=3) if ((obj=MM_findObj(args[i]))!=null) { v=args[i+2];
    if (obj.style) { obj=obj.style; v=(v=='show')?'visible':(v=='hide')?'hidden':v; }
    obj.visibility=v; } else {if (bDebugMsgs) top.dump(args[i]+" NOT found!");}	
} 

function wB() {
	var br="BR";
	if((navigator.userAgent.indexOf('Mozilla')!=-1)
	&&((navigator.userAgent.indexOf('Spoofer')==-1)
	&&(navigator.userAgent.indexOf('compatible')==-1))){
		br="NS"
	}
	return br
}

function wV(br) {
	var bv=0;
	bv=navigator.appVersion.substring(0,1);
	if(br=="IE") {
		(parseInt(bv));
	}
	if(br=="NS") {
		(parseInt(bv));
	}
	return bv;
}

function wP() {
	var os="OS";
	if(navigator.userAgent.indexOf("OS/2")!=-1) {
		os='os/2'
	}
	return os;
}

b=wB();
v=wV(b);
o=wP();

function change_bgColor() {
	if (b=="NS" && v==2 && o !="os/2"){
		document.bgColor="#999999";
	}
}

////////////////////////////////////////////////////////////////////////////////////////
// functions to be called by various interface files
////////////////////////////////////////////////////////////////////////////////////////
function writeToDiv(text,id)
{
	if (document.getElementById)
	{
		x = document.getElementById(id);
		x.innerHTML = text;
	}
	else if (document.all)
	{
		x = document.all[id];
		x.innerHTML = text;
	}
	else if (document.layers)
	{
		x = document.layers[id];
		text2 = '<P CLASS="testclass">' + text + '</P>';
		x.document.open();
		x.document.write(text2);
		x.document.close();
	}
}

function toggleTOC(state) {
	if (isNS || isNS6){
		fileName = "";
		fileArray = top.text.location.pathname.split("/");
		
		for (i = 0; i < fileArray.length; i++) {
			if (fileArray[i] == "info") {
				// for (j = i+1; j < fileArray.length - 1; j++) fileName = fileName+fileArray[j]+"/";
				for (j = i; j < fileArray.length - 1; j++) fileName = fileName+fileArray[j]+"/";
				fileName = fileName + fileArray[fileArray.length - 1];
				i = fileArray.length;
			}
		}
		indexPath = '';
		indexArray = top.location.href.split("?");
		indexPath = indexArray[0];
		fileName = indexPath+"?"+fileName;

		if (!state) fileName = fileName+"?notoc";
		top.location.href=fileName;
	} else {
		nWidth=top.nNavigationWidth;
		strTmp= String(nWidth)+", *";
		
		if (state) 	top.FSmain.cols = strTmp;
		else 	top.FSmain.cols = "0, *";
	}
}
function showNavigationMaster(bShow) {
  switch (bShow){
    case false :
	  if (isIE) {
	  	top.navFrame.buttonsFrame.MM_showHideLayers('TOCtoggleclose','','hide');
	  	top.FRMsearchbar.MM_showHideLayers('TOCtoggleopen','','show');
	  }
	  toggleTOC(0);
      break;
    case true :
	  if (isIE) {
	  	top.navFrame.buttonsFrame.MM_showHideLayers('TOCtoggleclose','','show');
	  	top.FRMsearchbar.MM_showHideLayers('TOCtoggleopen','','hide');
	  }
	  toggleTOC(1);
      break;
    default : 
	  if (bDom) {
	  	top.navFrame.buttonsFrame.MM_showHideLayers('TOCtoggleclose','','show');
	  	top.FRMsearchbar.MM_showHideLayers('TOCtoggleopen','','hide');
	  }
	  toggleTOC(1);
  }
}
function initializeNavigation(sFrame){
	if (sFrame == 'search'){
		if (top.notoc){
			top.FRMsearchbar.MM_showHideLayers('TOCtoggleopen','','show');
		} else {
			top.FRMsearchbar.MM_showHideLayers('TOCtoggleopen','','hide');
		}
	} else if (sFrame == 'nav'){
		if (top.notoc){
			top.navFrame.buttonsFrame.MM_showHideLayers('TOCtoggleclose','','hide');
		} else {
			top.navFrame.buttonsFrame.MM_showHideLayers('TOCtoggleclose','','show');
		}
	} else {
		top.dump("initializeNavigation called with invalid value: "+sFrame);
	}
}
function MM_swapImgRestore() { //v3.0
  var i,x,a=document.MM_sr; for(i=0;a&&i<a.length&&(x=a[i])&&x.oSrc;i++) x.src=x.oSrc;
}

function MM_preloadImages() { //v3.0
  var d=document; if(d.images){ if(!d.MM_p) d.MM_p=new Array();
    var i,j=d.MM_p.length,a=MM_preloadImages.arguments; for(i=0; i<a.length; i++)
    if (a[i].indexOf("#")!=0){ d.MM_p[j]=new Image; d.MM_p[j++].src=a[i];}}
}

function MM_swapImage() { //v3.0
  var i,j=0,x,a=MM_swapImage.arguments; document.MM_sr=new Array; for(i=0;i<(a.length-2);i+=3)
   if ((x=MM_findObj(a[i]))!=null){document.MM_sr[j++]=x; if(!x.oSrc) x.oSrc=x.src; x.src=a[i+2];}
}
////////////////////////////////////////////////////////////////////////////////////////
// functions to be called by the index files
////////////////////////////////////////////////////////////////////////////////////////
function writeDisclaimer(){
	//Standard disclaimer stuff...
	document.writeln('<noframes>');
	document.writeln('<body bgcolor="#FFFFFF">');
	document.writeln('<h3>'+strLine1+'<\/h3>');
	document.writeln('<P>'+strLine2+'<\/P>');
	document.writeln('<P>'+strLine3+' <a href="index_acc.htm">'+strLine4+'<\/a> ');
	document.writeln(strLine5+' <a href="'+icText+'">'+strLine6+'<\/a>.<\/P>');
	document.writeln('<\/body>');
	document.writeln('<\/noframes>');
}

function writeCDfooter(){
	// This frameset holds the footer (AKA plc) and the invisible frame that holds the advisors' applets.
	document.writeln('    <frameset cols="*,0" frameborder="0" border="0" framespacing="0">');	
	document.writeln('      <frame src="info/rzahgfooter.htm" name="plc" scrolling="no" marginwidth="0" marginheight="0" title="Footer bar">');  	
	document.writeln('      <frame src="info/rzahgblank.htm" name="hidden" scrolling="no" marginwidth="0" marginheight="0" title="Applet frame">');  	
	document.writeln('    <\/frameset>');
}
function writeWEBfooter(){
	// This frameset holds the footer (AKA plc) and the invisible frame that holds the advisors' applets.
	document.writeln('  <frameset ID="FSfooter" cols="*,0" frameborder="0" border="0" framespacing="0">');	
	document.writeln('    <frame src="info/rzah8footer.htm" name="plc" scrolling="no" marginwidth="0" marginheight="0" title="Footer bar">');  	
	document.writeln('    <frame src="info/rzahgblank.htm" name="hidden" scrolling="no" marginwidth="0" marginheight="0" title="Applet frame">');  	
	document.writeln('  <\/frameset>');
}

function writeSurveyfooter(){
	// This frameset holds the footer (AKA plc) and the invisible frame that holds the advisors' applets.
	document.writeln('  <frameset ID="FSfooter" cols="*,0" frameborder="0" border="0" framespacing="0">');	
	document.writeln('    <frame src="info/icsurvey/rzah8footer.htm" name="plc" scrolling="no" marginwidth="0" marginheight="0" title="Footer bar">');  	
	document.writeln('    <frame src="info/rzahgblank.htm" name="hidden" scrolling="no" marginwidth="0" marginheight="0" title="Applet frame">');  	
	document.writeln('  <\/frameset>');
}
var nIntervalID=0;
function loadContent() {
	//This function is called when all the frames are finished loading.
	//It synchs up the navbar with whatever is in the text frame,
	//then sets loadContentCalled to true so that the synch.js code
	//can tell if it should call the findNode() function or not.

	//////////////////////////////////////////////////////////////////////
	// if the synching has fails, this function will be called again.
	// need to clearout any pre-existing 'wait' information.
	if (nIntervalID != 0) {
		self.clearTimeout(nIntervalID);
	}  else {  // this is the first time it has been called.
		window.status=strSynch;
	}
	// this function may fail during initial load, so set up
	// a Timeout to retry the function unless 'wait' information 
	// is cleared at end of function
	if ( top.loadContentCalled != true)
	{
		nIntervalID=self.setTimeout(loadContent,5000);
		window.status+='...';
	}
	//
	//////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////
	// parse the filename to send to the navbar findNode() function.
	realFile = "";
	realArray = text.location.pathname.split("/");
	
	for (i = 0; i < realArray.length; i++) {
		if (realArray[i] == "info") {
			for (j = i+1; j < realArray.length - 1; j++) realFile = realFile+realArray[j]+"/";
			realFile = realFile + realArray[realArray.length - 1];
			i = realArray.length;
		}
	}
	//if realFile is the empty string -- we are probably using the file 
	//protocol in internet explorer, so split the pathname using the "\" character instead
	if (realFile == "") {
	    realArray = text.location.pathname.split("\\");
	    for (i = 0; i < realArray.length; i++) {
			if (realArray[i] == "info") {
			    for (j = i+1; j < realArray.length - 1; j++) realFile = realFile+realArray[j]+"/";
			    realFile = realFile + realArray[realArray.length - 1];
			    i = realArray.length;
			}
	 	}
	}
	// end filename parse
	//////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////
	// try to synch up
	var bSynched = false;
	if (top.navFrame.appletFrame.document.IcNavBar) {
		top.navFrame.appletFrame.document.IcNavBar.findNode(realFile);
		
		var strPath = top.navFrame.appletFrame.document.IcNavBar.getBreadCrumbs();
		if (strPath != '') {
			bSynched = true;
			if (top.breadcrumbs) top.breadcrumbs.updateBreadcrumb(strPath);
		}

		top.navFrame.appletFrame.resize();
	}

	//
	//////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////
	// the function succeeded, so it will not be called again.
	// need to clear out 'wait' information.
	if (bSynched && nIntervalID != 0) {
		self.clearTimeout(nIntervalID);
		window.status="";
		top.loadContentCalled = true;
	}
	//
	//////////////////////////////////////////////////////////////////////
		
}




////////////////////////////////////////////////////////////////////////////////////////
// debugging functions
////////////////////////////////////////////////////////////////////////////////////////
var bDebugMsgs=false;
var bShowErrors = false;
var nErrorCount = 0;
var wndError=null;
function errorHandler(sMsg, URL, nLine) {
	if (bShowErrors){
		if (isNS6){
			dumpProperties(sMsg, "error");
		} else {
			msgArray = new Array();
			urlArray = new Array();
			lnoArray = new Array();
			
			msgArray[msgArray.length] = sMsg;
			urlArray[urlArray.length] = URL;
			lnoArray[lnoArray.length] = nLine;

			nErrorCount++;
			if (wndError != null && !wndError.closed) {
				wndError.focus();
			} else {
				wndError = window.open("","errors","height=400,width=650,scrollbars=yes,resizable=yes");
			}
			var strError = "<HTML><BODY>";
			strError += "<h2>An error has occurred on this page.</h2>";
			for (var i=0; i < msgArray.length; i++) {
				strError += "<table><tr><td style=\"background: #99CCFF;\">";
				strError += "<strong>Error:</strong> ";
				strError += "</td></tr><tr><td>";
				strError +=  msgArray[i];
				strError += "</td></tr><tr><td style=\"background: #99CCFF;\">";
				strError += "<strong>URL:</strong> ";
				strError += "</td></tr><tr><td>";
				strError +=  urlArray[i] + "&nbsp;&nbsp;";
				strError += "<strong>Line:</strong> " + lnoArray[i] + "<BR>";
				strError += "<strong>Error number:</strong> "+ nErrorCount;
				strError += "<FONT size=\"-2\">&nbsp;&nbsp;&nbsp;&nbsp;(use ALT+Left and ALT+Right to navigate errors)</FONT>";
				strError += "</td></tr><tr><td style=\"background: #99CCFF;\">";
				strError += "<strong>Client:</strong> ";
				strError += "</td></tr><tr><td>";
				strError +=  navigator.userAgent;
				strError += "</td></tr></table>";
			}
			strError += "<hr size=\"1px\">";
			strError += "<a href=\"javascript:self.close();\">close window</a>";
			strError += "</BODY></HTML>";
			wndError.document.write(strError);
			wndError.document.close();
		}
	} else {
		// do nothing.
	}
	
	// return true so that the browser doesn't also handle the error
	return true;
}
window.onError = errorHandler;	// for Netscape ??
window.onerror = errorHandler;	// for IE

function showProps(obj,objName) {
	if(!bDebugMsgs) return;
	var result = "";
	var count = 0;
	for (var i in obj) {
		result += objName + "." + i + " = " + obj[i] + "\n";
		count++;
		if (count == 25) {
			alert(result);
			result = "";
			count = 0;
		}
	}
	alert(result);
}

function dumpProperties(object,objectName){
	if(!bDebugMsgs) return;
	var newWindow = window.open("","","HEIGHT=400,WIDTH=400,status=1,resizable=1,scrollbars=1")  
	newWindow.document.write("<HTML><HEAD><TITLE>"+objectName+"</TITLE></HEAD></HTML>")
	newWindow.document.write(getProperties(object));  
	newWindow.document.close();
}        
function getProperties(obj) {   
	var properties = "";   
	properties = '<HTML><HEAD><script language="JavaScript" src="../rzahgcommon.js"></script></HEAD><BODY><TABLE BORDER="2" WIDTH="90%" COLS="2">';  
	properties += '<TR ALIGN="left" BGCOLOR="lightgrey"><TH>Property</TH><TH>Value</TH></TR>';  

	for (var propName in obj) {   
		//if (typeof(obj[propName]) == 'object' ){
		//	strObj = obj[propName].toString();
		//	properties +='<TR><TD>'+propName+'</TD><TD>'+strObj+'&nbsp;</TD></TR>';  
		//} else 
		properties +="<TR><TD>"+propName+"</TD><TD>"+obj[propName]+"&nbsp;</TD></TR>";  
	}   
	properties +="<TR><TD>navigator.userAgent</TD><TD>"+navigator.userAgent+"&nbsp;</TD></TR>";  
	properties +="</TABLE></BODY></HTML>";  
	return properties;   
} 

var wndDump = null;
function dump(sText){
	if(!bDebugMsgs) return;
	var d = null;
	if (wndDump != null && !wndDump.closed) {
		wndDump.focus();
		d = wndDump.document;
	} else {
		wndDump = window.open("", "dumpwin","width=700,height=350,scrollbars,resizable");
		d = wndDump.document;
		d.open();
		dump.docopen=true;
		var defaultpage = "";   
		defaultpage = '<HTML><HEAD><TITLE>Dump</TITLE></HEAD><BODY bgcolor="Red"><FORM name="dumpform">';  
		defaultpage += '<span style="color: White; font-family: monospace; padding: 0 0 0 0; font-weight: bold;">Dump window</span><BR><textarea cols="80" rows="15" name="scrollarea" readonly wrap="off"></textarea>';
		defaultpage += '<table width=600px border="0"><tr><td width="30%">&nbsp;</td><td><input type="reset" value="Clear"></td>';
		defaultpage += '<td width="30%">&nbsp;</td><td><input type="button" name="close" value="Close" onClick="self.close()"></td>';
		defaultpage += '<td width="30%">&nbsp;</td></tr></table></FORM></BODY></HTML>'; 
		d.write(defaultpage); 
		d.close();
	}

	d.dumpform.scrollarea.value=d.dumpform.scrollarea.value+sText+"\n-------------------------\n";
	return;
}

//END NON-TRANSLATABLE
