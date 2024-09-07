document.write('<!-- Template Id = 1 Template Name = Banner Creative (Flash) -->\n<!-- Copyright 2002 DoubleClick Inc., All rights reserved. --><script src=\"http://m1.2mdn.net/879366/flashwrite_1_2.js\"><\/script>');document.write('\n');
 
var dcswf = "http://m1.2mdn.net/941933/KSM-_online_Innovation_728x90.swf"; 
var dcgif = "http://m1.2mdn.net/941933/KSM-_online_Innovation_728x90.gif"; 
var advurl = "http://ad.doubleclick.net/click%3Bh=v8/36a5/17/d5/%2a/c%3B178395858%3B1-0%3B0%3B24134322%3B3454-728/90%3B22525499/22543382/1%3B%3B%7Esscs%3D%3fhttp://oascentral.businessweek.com/RealMedia/ads/click_lx.ads/businessweek.com/careers/L24/314338725/Top/BusWeek/kellogg_63307_mg_728_apriljuly/kellogg_63307_mg_728_apriljuly.html/4f37497464556747342f594142414b66?http://www.kellogg.northwestern.edu/execed/index.htm";
var dcadvurl = escape(advurl);
var dcminversion = 7;
var dcmaxversion = 9;
var plugin = false;
var dccreativewidth = "728";
var dccreativeheight = "90";
var dcwmode = "opaque";
var dcbgcolor = "";

if (((navigator.appName == "Netscape") && (navigator.userAgent.indexOf("Mozilla") != -1) && (parseFloat(navigator.appVersion) >= 4) && (navigator.javaEnabled()) && navigator.mimeTypes && navigator.mimeTypes["application/x-shockwave-flash"] && navigator.mimeTypes["application/x-shockwave-flash"].enabledPlugin)) {
var plugname=navigator.plugins['Shockwave Flash'].description;var plugsub=plugname.substring(plugname.indexOf("."),-1); var plugsubstr=plugsub.substr(-1)
if( plugsubstr >= dcminversion) { plugin = true;}
}
else if (navigator.userAgent && navigator.userAgent.indexOf("MSIE")>=0 && (navigator.userAgent.indexOf("Opera")<0) && (navigator.userAgent.indexOf("Windows 95")>=0 || navigator.userAgent.indexOf("Windows 98")>=0 || navigator.userAgent.indexOf("Windows NT")>=0) && document.all) 
{
document.write('<script language=VBScript>' + '\n' +
   'dcmaxversion = '+dcmaxversion + '\n' +
   'dcminversion = '+dcminversion + '\n' +
   'Do' + '\n' +
    'On Error Resume Next' + '\n' +
    'plugin = (IsObject(CreateObject(\"ShockwaveFlash.ShockwaveFlash.\" & dcmaxversion & \"\")))' + '\n' +
    'If plugin = true Then Exit Do' + '\n' +
    'dcmaxversion = dcmaxversion - 1' + '\n' +
    'Loop While dcmaxversion >= dcminversion' + '\n' +
  '<\/script>');
}
if ( plugin )  {
 adcode = '<OBJECT classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000"'+
  ' ID=FLASH_AD WIDTH="'+ dccreativewidth +'" HEIGHT="'+ dccreativeheight +'">'+
  '<PARAM NAME=movie VALUE="' + dcswf + '?clickTag='+ dcadvurl +'"><PARAM NAME=quality VALUE=high><PARAM NAME=bgcolor VALUE=#'+ dcbgcolor +'><PARAM NAME=wmode VALUE='+ dcwmode +'><PARAM NAME="AllowScriptAccess" VALUE="always">'+
  '<EMBED src="' + dcswf + '?clickTag='+ dcadvurl +'" quality=high wmode='+dcwmode+
  ' swLiveConnect=TRUE WIDTH="'+ dccreativewidth +'" HEIGHT="'+ dccreativeheight +'" bgcolor=#'+ dcbgcolor+
  ' TYPE="application/x-shockwave-flash" AllowScriptAccess="always"></EMBED></OBJECT>';
if(('j'!="j")&&(typeof dclkFlashWrite!="undefined")){dclkFlashWrite(adcode);}else{document.write(adcode);}
} else {
 document.write('<A TARGET="_blank" HREF="http://ad.doubleclick.net/click%3Bh=v8/36a5/17/d5/%2a/c%3B178395858%3B1-0%3B0%3B24134322%3B3454-728/90%3B22525499/22543382/1%3B%3B%7Esscs%3D%3fhttp://oascentral.businessweek.com/RealMedia/ads/click_lx.ads/businessweek.com/careers/L24/314338725/Top/BusWeek/kellogg_63307_mg_728_apriljuly/kellogg_63307_mg_728_apriljuly.html/4f37497464556747342f594142414b66?http://www.kellogg.northwestern.edu/execed/index.htm"><IMG SRC="' + dcgif + '" BORDER=0></A>');
}
//-->

document.write('<NOSCRIPT><A TARGET=\"_blank\" HREF=\"http://ad.doubleclick.net/click%3Bh=v8/36a5/17/d5/%2a/c%3B178395858%3B1-0%3B0%3B24134322%3B3454-728/90%3B22525499/22543382/1%3B%3B%7Esscs%3D%3fhttp://oascentral.businessweek.com/RealMedia/ads/click_lx.ads/businessweek.com/careers/L24/314338725/Top/BusWeek/kellogg_63307_mg_728_apriljuly/kellogg_63307_mg_728_apriljuly.html/4f37497464556747342f594142414b66?http://www.kellogg.northwestern.edu/execed/index.htm\"><IMG SRC=\"http://m1.2mdn.net/941933/KSM-_online_Innovation_728x90.gif\" BORDER=0></A></NOSCRIPT><script language=\"javascript\" src=\"http://core.insightexpressai.com/adServer/adServerESI.aspx?bannerID=27136&siteID=N763.business_week_online&creativeID=22525499\"><\/script>');document.write('');
