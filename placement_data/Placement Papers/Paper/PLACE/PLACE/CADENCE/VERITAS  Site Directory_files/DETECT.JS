<!-- 

function MM_reloadPage(init) {  //reloads the window if Nav4 resized
  if (init==true) with (navigator) {if ((appName=="Netscape")&&(parseInt(appVersion)==4)) {
    document.MM_pgW=innerWidth; document.MM_pgH=innerHeight; onresize=MM_reloadPage; }}
  else if (innerWidth!=document.MM_pgW || innerHeight!=document.MM_pgH) location.reload();
}
MM_reloadPage(true);

error = "/global/support_error.jhtml"
bName = navigator.appName;
bVer = parseInt(navigator.appVersion);
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
if (navigator.appVersion.indexOf("SunOS") !=-1)
return true;
else return false;
}
function isLinux() {
if (navigator.appVersion.indexOf("Linux") !=-1)
return true;
else return false;
}
function isHP() {
if (navigator.appVersion.indexOf("HP") !=-1)
return true;
else return false;
}

if (!document.all && document.getElementById) {
document.write('<link rel="Stylesheet" href="/css/veritas3.css" type="text/css" media="screen">');
}
else if (isSun()) {
document.write('<link rel="Stylesheet" href="/css/veritas2.css" type="text/css" media="screen">');
}
else if (isLinux()) {
document.write('<link rel="Stylesheet" href="/css/veritas2.css" type="text/css" media="screen">');
}
else if (isHP()) {
document.write('<link rel="Stylesheet" href="/css/veritas2.css" type="text/css" media="screen">');
}
else document.write('<link rel="Stylesheet" href="/css/veritas.css" type="text/css">')

function worldWideRedirector() {
	return;
    var URL; 

    if (!document.countryNav)
    {
        URL = document.form.site.options[document.form.site.selectedIndex].value;        
    }
    else
    {
	URL = document.countryNav.country.options[document.countryNav.country.selectedIndex].value;
    }
    window.location.href = URL; 
  
}


// End -->

