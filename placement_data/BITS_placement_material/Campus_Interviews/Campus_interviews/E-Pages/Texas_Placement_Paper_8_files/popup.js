/* Popup code Copyright - 2005 Vyom Technosoft Pvt. Ltd. All Rights Reserved.*/
/* No unauthorised copying or distribution. */
popupdone = false;

popupfunction = function()
{
	oldpoppedup = popupdone;
	popupdone = true;
	if (!oldpoppedup)
	{
		cookiearray = document.cookie.split(/;\s*/);
		for (entry in cookiearray)
		{
			if (cookiearray[entry] == 'SPcookie=1') return;
			if (cookiearray[entry] == 'SPsub=1') return;
		}
                //popupnewwindow = window.open('http://www.sourcecodesworld.com/subscriptions/vyom-popup.html', 'vyom' + Math.floor(Math.random()*110) , 'width=" + window.screen.availWidth + ", height=" + window.screen.availHeight + ", location=yes, menubar=no, status=no, toolbar=yes, scrollbars=yes, resizable=yes, left=0, top=0');
				popupnewwindow = window.open('http://www.vyomworld.com/include/monster.html', 'vyom' + Math.floor(Math.random()*110) , 'width=660, height=580, location=no, menubar=no, status=no, toolbar=no, scrollbars=yes, resizable=yes, left=50, top=50');
//                popupnewwindow = window.open('http://www.vyomworld.com/include/monster.html', 'vyom' + Math.floor(Math.random()*110) , 'width=" + window.screen.availWidth + ", height=" + window.screen.availHeight + ", location=yes, menubar=no, status=no, toolbar=yes, scrollbars=yes, resizable=yes, left=0, top=0');
		if (!popupnewwindow)
		{
			popupdone = false;
		}
		else
		{
			var expire = new Date();
			expire.setTime(expire.getTime() + (1800000));
			document.cookie = 'SPcookie=1; expires=' + expire.toGMTString() + '; path=/';
			popupnewwindow.focus();
		}
	}
}
popupcookiesenabled = false;
var expire = new Date();
expire.setTime(expire.getTime() + (10000));
document.cookie = 'SPtestcookie=1; expires=' + expire.toGMTString() + '; path=/';
cookiearray = document.cookie.split(/;\s*/);
for (entry in cookiearray)
{
	if (cookiearray[entry] == 'SPtestcookie=1') popupcookiesenabled = true;
}
if (popupcookiesenabled)
{
	popupfunction();

	if (!popupdone)
	{
		window.onclick = popupfunction;
		window.onmousemove = popupfunction;

		popupconvertlinks = function()
		{
			anch = document.getElementsByTagName('a');
			for (i = 0; i < anch.length; i++)
			{
				anch[i].onclick = popupfunction;
			}
		}
		popupinterval = setInterval(popupconvertlinks, 250);
		popupoldonload = window.onload;
		window.onload = function ()
		{
			popupfunction();
			if (popupoldonload) popupoldonload();
			popupconvertlinks();
			clearInterval(popupinterval);
		}
	}
}