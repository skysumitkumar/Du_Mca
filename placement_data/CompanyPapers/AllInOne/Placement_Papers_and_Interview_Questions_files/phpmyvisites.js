// phpMyVisites.net | LICENCE GNU/GPL (http://www.gnu.org/copyleft/gpl.html)

function plugMoz(plug)
{
	find = "0";
	if (tabMime.indexOf(plug) != -1)
    {
        if (navigator.mimeTypes[plug].enabledPlugin != null)
        {
            find = "1";
        }
    }
	return find;
}

function plugIE(plug)
{
	find = false;
	document.write('<SCR' + 'IPT LANGUAGE=VBScript>\n on error resume next \n find = IsObject(CreateObject("' + plug + '"))</SCR' + 'IPT>\n');
	if (find)
        return '1';
    else 
        return '0';
}

if(navigator.javaEnabled())
    pJava='1';
else
    pJava='0';

	
var ua=navigator.userAgent.toLowerCase();
var isMoz  = (navigator.appName.indexOf("Netscape") != -1);
var isIE  = (ua.indexOf("msie") != -1);
var isMac = (ua.indexOf("mac")!=-1);
var isWin = ((ua.indexOf("win")!=-1) || (ua.indexOf("32bit")!=-1));


if (isWin && isIE)
{
    var pDirector = plugIE("SWCtl.SWCtl.1");
    var pFlash = plugIE("ShockwaveFlash.ShockwaveFlash.1");
    
    var pPDF = '0'; 
    if (plugIE("PDF.PdfCtrl.1") == '1') pPDF = '1'; 
    if (plugIE('PDF.PdfCtrl.5') == '1') pPDF = '1';
    if (plugIE('PDF.PdfCtrl.6') == '1') pPDF = '1';
    
    var pQuicktime = plugIE("QuickTimeCheckObject.QuickTimeCheck.1");
    var pReal  = plugIE("rmocx.RealPlayer G2 Control.1");
    var pWinMedia = plugIE("MediaPlayer.MediaPlayer.1");
}

if (!isWin || isMoz)
{
    tabMime = "";
    for (var i=0; i < navigator.mimeTypes.length; i++) tabMime += navigator.mimeTypes[i].type.toLowerCase();

    var pDirector = plugMoz("application/x-director");
    var pFlash = plugMoz("application/x-shockwave-flash");
    var pPDF = plugMoz("application/pdf");
    var pQuicktime = plugMoz("video/quicktime");
    var pReal  = plugMoz("audio/x-pn-realaudio-plugin");
    var pWinMedia = plugMoz("application/x-mplayer2");
}


var exp = new Date();
exp.setTime(exp.getTime()+60000);

// Domaine principal si sous-domaine (www.ex.net => .ex.net)
var dom = window.location.href;
dom = dom.substring(7, dom.indexOf("/", 7));
var re=new RegExp(".*\..*\..*","g");
if(re.test(dom)) dom = dom.substring(dom.indexOf("."))
    
document.cookie="phpmvCookiesAllowed=1; expires="+exp.toGMTString()+"; path=/; domain="+dom;

doc = document; d = new Date(); res = screen.width+"x"+screen.height; c = screen.colorDepth;
src = phpmyvisitesURL+'?url='+escape(doc.location.pathname+doc.location.search);
src += '&site='+phpmyvisitesSite+'&res='+res;
src += '&siteh='+doc.location.hostname+'&c='+c+'&h='+d.getHours()+'&m='+d.getMinutes()+'&s='+d.getSeconds();
src += '&flash='+pFlash+'&director='+pDirector+'&quicktime='+pQuicktime+'&real='+pReal+'&windowsMedia='+pWinMedia;
src += '&pdf='+pPDF+'&java='+pJava;

doc.writeln('<img src="'+src+'&ref='+escape(top.document.referrer)+'" alt="phpMyVisites" style="border:0" />');

