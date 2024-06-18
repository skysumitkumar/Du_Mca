// THIS CODE MUST BE **AFTER** THE ADSENSE CODE
function adsense_log_click()
{
	if(window.status.indexOf('go to') == 0)
	{
		adsense_log_url_image = new Image();
		adsense_log_url_image.src = '/adsense_clicklogger.php?R=' +
			escape(document.location) + '&U=' +
			escape(window.status.substring(6)) + '&D=' +
                        escape(document.referrer);
	}
}

var elements;
if(document.getElementsByTagName) {
	elements = document.body.getElementsByTagName("IFRAME");
} else if (document.body.all) {
	elements = document.body.all.tags("IFRAME");
} else {
	elements = Array();
}
for(var i = 0; i < elements.length; i++) {
	if(elements[i].src.indexOf('googlesyndication.com') > -1) {
		elements[i].onfocus = adsense_log_click;
	}
}
