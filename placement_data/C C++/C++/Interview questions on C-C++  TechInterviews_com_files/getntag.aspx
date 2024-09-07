
var pbUrl='';

if(document.location==top.location) {
	pbUrl=escape(document.location);
} else {
	pbUrl=escape(document.referrer);
}

document.write('<SCR'+'IPT LANGUAGE="JavaScript1.1" SRC="http://65.61.185.21/foo.ad?u=db2fddba285d9389a28a3c93341ddc4c&siteid=tech.3236&width=728&height=90&dfcat=1104&pbUrl='+pbUrl+'" ><\/SC'+'RIPT>');
