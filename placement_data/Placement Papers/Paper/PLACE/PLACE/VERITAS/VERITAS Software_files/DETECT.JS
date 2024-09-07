var agt = navigator.userAgent.toLowerCase();

var outputstring;
pageCountry = getPageCountry();


error = "/global/support_error.jhtml"
bName = navigator.appName;
bVer = parseInt(navigator.appVersion);

ns6 = (bName == "Netscape" && bVer > 4)? true:false;

if (bName == "Netscape" && bVer >=4) {
}
else if (bName == "Netscape" && bVer >=3) {
window.location=error;
}
else if (bName == "Netscape" && bVer >=1) {
window.location=error;
}
else if (bName == "Microsoft Internet Explorer" && bVer >=4) {
}
else if (bName == "Microsoft Internet Explorer" && bVer >=2) {
window.location=error;
}
else 
window.location=error;

function isSun() {
if (agt.indexOf("sunos") !=-1) {
return true;
}
else {
return false;
}
}

function isLinux(){
if (agt.indexOf("linux") !=-1) {
return true;
}
else {
return false;
}
}

function isHP(){
if (agt.indexOf("hp") !=-1) {
return true;
}
else {
return false;
}
}

if (isSun() || ns6) {
	stylesheetref = '/stylesheets/veritas2.css" type="text/css">';
	}
	else {
		if (isLinux()) {
		stylesheetref = '/stylesheets/veritas2.css" type="text/css">';
		}
		else {
			if (isHP()) {
				stylesheetref = '/stylesheets/veritas2.css" type="text/css">';
			}
			else {
				stylesheetref = '/stylesheets/rf-stylesheet.css" type="text/css">';
			}
		}
	}
	
if (pageCountry == "jp"){

	 outputstring = '<link rel="stylesheet" href="/' + pageCountry + stylesheetref;
	 document.write (outputstring);
	 

	 } else {
	  
 	 outputstring = '<link rel="stylesheet" href="' + stylesheetref;
	 document.write (outputstring);
}


if(ns4){
	origWidth = innerWidth;
	origHeight = innerHeight;
	onresize = snappy;
}

function snappy() {
	if (innerWidth != origWidth || innerHeight != origHeight) 
	location.reload();
	}