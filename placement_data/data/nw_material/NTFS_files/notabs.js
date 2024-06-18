var gnurl = 'http://www.answers.com/';
var oldOMM;

function submitHandler(f_el,target,ts,p){
var val=f_el.s? f_el.s.value : f_el.value;
var form=f_el.form?f_el.form:f_el;
if (val && val.search(/\S/)!=-1) {
	assignParam('navinfo','GoButton|Enter');
	if (location.pathname.indexOf("/answers/")==0 || val.search(/\+/)>=0) {if (typeof returnFalse != "undefined" && form.onsubmit && form.onsubmit==returnFalse){form.onsubmit=returnTrue;}return true};
    if (val=="robots.txt"||val=="favicon.ico") val = '"'+val+'"';
	var func = typeof(encodeURIComponent) != "undefined" ? encodeURIComponent : escape;
	if(location.search.indexOf("gwp=13")>-1 || location.search.indexOf("ff=1")>-1){
		if (p) p+="&ff=1";
		else p="ff=1";
	}
	var url = location.protocol + "//" + (ts?ts:location.host) + "/" + func(val) + (p?"?"+p:"");
	if (target){window.open(url,target);}
	else location.href = url;
}
return false;
}
function submitGoButton(f_el,target,ts,p,url, selection){
var val=f_el.s? f_el.s.value : f_el.value;
var form=f_el.form?f_el.form:f_el;
var pref = location.pathname.indexOf("/answers/")==0 ? "/answers" : "";
var amporq = "?";
if (val && val.search(/\S/)!=-1) {
    if (location.pathname.indexOf("/answers/")==0 || val.search(/\+/)>=0) {
		if (typeof returnFalse != "undefined" && form.onsubmit && form.onsubmit==returnFalse){form.onsubmit=returnTrue;}
		if (!url) {
			var idx  = location.pathname.lastIndexOf("/");
			var path = location.pathname.substring(0,idx+1);
			url = path + "ntquery?s=";
			amporq = "&";
		}
	}
    if (val=="robots.txt"||val=="favicon.ico") val = '"'+val+'"';
    var func = typeof(encodeURIComponent) != "undefined" ? encodeURIComponent : escape;
	if(selection=="Answers" || selection=="Web"  || selection=="Shop" || !selection){
		if(location.search.indexOf("gwp=13")>-1 || location.search.indexOf("ff=1")>-1){
			if (p) p+="&ff=1";
			else p="ff=1";
		}
		var fullUrl =  location.protocol + "//" + (ts?ts:location.host) + (url?url:"/") + func(val) + (p?amporq+p:"");
	}
	else{
		var fullUrl = pref +  "/main/Record2?a=Go+Button+" + selection + "&url=" + func(url + val);
	}
	if (target)
        window.open(fullUrl,target);
	else
       location.href = fullUrl;
}
return false;
}
function submitHandlerIncr(fid,suffix)
{
	if (typeof enter != "undefined" && enter) {
		enter = false;
		return;
	}
	if (typeof submitHandlerIncr1 != "undefined"){
		assignParam('navinfo','GoButton|Enter');
		return submitHandlerIncr1(fid,suffix)
		}
	else
		return submitHandler(document.getElementById(fid).s,null,null,suffix);
}

function setFocus() {
	if (document.getElementById)
		document.getElementById("s").focus();
	return 1;
}
// google websearch page functions
function setStatus(url){window.status = url; return true;}
function clearStatus(){window.status = '';}
function gotoURL(url){window.location = url; return true;}

function addLinkTextToHref(f_el) {
var href=f_el.href;
if (href.indexOf("?") > 0)
	href += "&";
else
	href += "?";
var re = new RegExp("<[^>]*>", "g");
result =(f_el.innerHTML).replace(re,"");
f_el.href = href + "linktext=" + encodeURIComponent(result);
}
function getLinkTextForCookie(f_el){
var href=f_el.href;
if (href.indexOf("?") > 0)
	href += "&";
else
	href += "?";
var re = new RegExp("<[^>]*>", "g");
result =(f_el.innerHTML).replace(re,"");
if (result) return "|linktext|"+encodeURIComponent(result);
else return "";
}

function showHide_TellMeAbout2(hide){
	searchBox = document.getElementById("s");
	var val=searchBox.value;
	searchBox.style.backgroundImage = ((hide || val && val.search(/\S/)!=-1) ? "url(/main/images/empty_box.gif)" : "url(/main/images/tell_me_about.gif)");
}
function showHide_TellMeAbout3(hide, image){
	searchBox = document.getElementById("s");
	var val=searchBox.value;
	searchBox.style.backgroundImage = ((hide || val && val.search(/\S/)!=-1) ? "url(/main/images/empty_box.gif)" : "url(/main/images/" + image +")");
}
function prepImgs(up,su) {
answersD = new Image(); answersD.src=up+su+"/images/lookup_answers_d.gif";
answersU = new Image(); answersU.src = up+su+"/images/lookup_answers.gif";
webD = new Image(); webD.src=up+su+"/images/lookup_web_d.gif";
webU = new Image(); webU.src=up+su+"/images/lookup_web.gif";
shopD = new Image(); shopD.src=up+su+"/images/lookup_shop_d.gif";
shopU = new Image(); shopU.src=up+su+"/images/lookup_shop.gif";
return true;
}
function changeImg(obj,img,ud){obj.src=img.src}

function showHideLinks(hide, elementName){
var theDiv, moreLink, lessLink;
theDiv = (elementName != null && elementName == "albums")? document.getElementById('moreAlbums') : document.getElementById('moreMovies');
moreLink = (elementName != null && elementName == "albums")? document.getElementById('moreAlbumsLink') : document.getElementById('moreMoviesLink');
lessLink = (elementName != null && elementName == "albums")? document.getElementById('lessAlbumsLink') : document.getElementById('lessMoviesLink');
if(hide == "false"){
	theDiv.style.display = "block";
	moreLink.style.display = "none";
	lessLink.style.display = "block";
} else{
	theDiv.style.display = "none";
	moreLink.style.display = "block";
	lessLink.style.display = "none";
	}
}
function hideMenu(e, goMenu) {
	if (!e) var e = window.event;
	var tg = (window.event) ? e.srcElement : e.target;
	if (tg.nodeName != 'DIV') return;
	var reltg = (e.relatedTarget) ? e.relatedTarget : e.toElement;
	while (reltg != tg && reltg.nodeName != 'BODY')
		reltg= reltg.parentNode
	if (reltg== tg) return;
	// Mouseout took place when mouse actually left layer
	showMenu(false, goMenu);
}
function showMenu(show, goMenu){
	var menu = document.getElementById(goMenu);
	if (menu) menu.style.display = show ? "block" : "none";
    var dropdown = document.getElementById('menu');
    if(dropdown != null){
      dropdown.style.visibility = (dropdown.style.visibility  == 'hidden' ? 'visible':'');
      if(ObjectOverlap(menu, dropdown))
         dropdown.style.visibility = (show ? "hidden" : "visible");
    }
}

/* In order to fix an IE bug for Incremental search
	 The div is always below the select box, so every time you display the div
	 you should hide the select boxes that overlap
*/
function ObjectOverlap(obj1, obj2){
    var obj1TopX = getLeft(obj1);
	var obj1TopY = getTop(obj1);
	var obj1BottomX = getLeft(obj1)+obj1.offsetWidth;
	var obj1BottomY = getTop(obj1)+obj1.offsetHeight;
	var obj2TopX = getLeft(obj2);
	var obj2TopY = getTop(obj2);
	var obj2BottomX = getLeft(obj2)+obj2.offsetWidth;
	var obj2BottomY = getTop(obj2)+obj2.offsetHeight;
	var overlapOnX = (obj1TopX < obj2BottomX && obj2TopX < obj1BottomX);
	var overlapOnY = (obj1TopY < obj2BottomY && obj2TopY < obj1BottomY);
	return (overlapOnX && overlapOnY);
}
function writeLink(name, formId, param, url, sel, last,bCookie){
	if(bCookie)
	   document.write("<a onMouseover=\"this.style.color='#7EbE00';window.status='" + name + "'\" onMouseout=\"this.style.color='#000';window.status=''\"  onClick=\"assignParam('navinfo','GoButton|"+name+"');return submitGoButton(document.getElementById('"+formId+"'),null,null,'"+param+"','"+url+"', '"+sel+"')\">"+name+"</a>" + (last?"":"<br/>"));
	else
	   document.write("<a onMouseover=\"this.style.color='#7EbE00';window.status='" + name + "'\" onMouseout=\"this.style.color='#000';window.status=''\"  onClick=\"return submitGoButton(document.getElementById('"+formId+"'),null,null,'"+param+"','"+url+"', '"+sel+"')\">"+name+"</a>" + (last?"":"<br/>"));
}
function writeLinkToDW(name, formId, param, url, sel, last){
	document.write("<a onMouseover=\"this.style.color='#7EbE00';window.status='" + name + "'\" onMouseout=\"this.style.color='#000';window.status=''\"  onClick=\"assignParam('navinfo','GoButton|"+name+"');return submitGoButton(document.getElementById('"+formId+"'),null,null,'"+param+"','"+url+"', '"+sel+"')\">"+name+"</a>" + (last?"":"<br/>"));
}
function writeGoMenuHeader(staticURL,lookupMenuDivId,formId,bShop,imageUrl,newsUrl,blogsUrl,goButtonText,go_buttonUp,go_buttonDown,arrowTooltip,news){
	arrowStatusBar = arrowTooltip.replace("'","\\'");
	document.write("<div id=\"goHeaderButton\">" +
	"<input title='"+goButtonText+"' alt=\""+goButtonText+"\" type=\"image\" name=\"go_button\" id=\"go_button\" onMouseOver=\"window.status='"+goButtonText+"'\"" +
	" OnMouseDown=\"this.src='"+staticURL+"/images/"+go_buttonDown+"';return 1;\" onMouseUp=\"this.src='"+staticURL+"/images/"+go_buttonUp+"';return 1;\"" +
	" onMouseOut=\"window.status='';this.src='"+staticURL+"/images/"+go_buttonUp+"'\" src='"+staticURL+"/images/"+go_buttonUp+"'  onclick=\"assignParam('navinfo','GoButton|Go');return submitGoButton(document.getElementById('"+formId+"'));\" />" +
	"<img title=\""+arrowTooltip+"\" type=\"image\"  alt=\""+arrowTooltip+"\"  name=\"go_arrow\" id=\"go_arrow\" onMouseOver=\"window.status='"+arrowStatusBar+"';\"" +
	" OnMouseDown=\"this.src='"+staticURL+"/images/go_arrowDown.gif';return 1;\" onMouseUp=\" this.src='"+staticURL+"/images/go_arrowUp.gif';return 1;\" " +
	" onMouseOut=\"window.status='';this.src='"+staticURL+"/images/go_arrowUp.gif';hideMenu(event,'lookupMenuHeader');\"  src='"+staticURL+"/images/go_arrowUp.gif' onclick=\"showMenu(true,'"+lookupMenuDivId+"');\"/> <br/>" +
	"<div id='"+lookupMenuDivId+"' onMouseOver=\"showMenu(true,'"+lookupMenuDivId+"');\" onMouseOut=\"hideMenu(event,'"+lookupMenuDivId+"');\"/>");
	writeLink("Answers",formId,"","","Answers",false,true);
	writeLink("Web",formId,"web.x=1","","Web",false,true);
	if (bShop)
		writeLink("Shopping",formId,"shop.x=1","","Shop",false,true);
	writeLink("Images",formId,"",imageUrl,"Images",false,false);
	writeLink(news,formId,"",newsUrl,"News",false,false);
	writeLink("Blogs",formId,"",blogsUrl,"Blogs",true,false);
	document.write("</div></div>");
}

function writeGoMenuFooter(staticURL,lookupMenuDivId,formId,bShop,imageUrl,newsUrl,blogsUrl,goButtonText,go_buttonUp,go_buttonDown,arrowTooltip,news){
	arrowStatusBar = arrowTooltip.replace("'","\\'");
	document.write("<div id=\"goFooterButton\">" +
 					"<div id='"+lookupMenuDivId+"' onMouseOver=\"showMenu(true,'"+lookupMenuDivId+"');\" onMouseOut=\"hideMenu(event,'"+lookupMenuDivId+"');\"/>");
	writeLink("Answers",formId,"","","Answers",false,true);
	writeLink("Web",formId,"web.x=1","","Web",false,true);
	if (bShop)
		writeLink("Shopping",formId,"shop.x=1","","Shop",false,true);
	writeLink("Images",formId,"",imageUrl,"Images",false,false);
	writeLink(news,formId,"",newsUrl,"News",false,false);
	writeLink("Blogs",formId,"",blogsUrl,"Blogs",true,false);
	document.write("</div>");
	document.write("<input title='"+goButtonText+"' alt=\""+goButtonText+"\" type=\"image\" name=\"go_button\" id=\"go_button\" onMouseOver=\"window.status='"+goButtonText+"'\"" +
	" OnMouseDown=\"this.src='"+staticURL+"/images/"+go_buttonDown+"';return 1;\" onMouseUp=\"this.src='"+staticURL+"/images/"+go_buttonUp+"';return 1;\"" +
	" onMouseOut=\"window.status='';this.src='"+staticURL+"/images/"+go_buttonUp+"'\" src='"+staticURL+"/images/"+go_buttonUp+"'  onclick=\"return submitGoButton(document.getElementById('"+formId+"'));\" />" +
	"<img title=\""+arrowTooltip+"\" type=\"image\"  alt=\""+arrowTooltip+"\"  name=\"go_arrow\" id=\"go_arrow\" onMouseOver=\"window.status='"+arrowStatusBar+"';\"" +
	" OnMouseDown=\"this.src='"+staticURL+"/images/go_arrowDown.gif';return 1;\" onMouseUp=\" this.src='"+staticURL+"/images/go_arrowUp.gif';return 1;\" " +
	" onMouseOut=\"window.status='';this.src='"+staticURL+"/images/go_arrowUp.gif';hideMenu(event,'lookupMenuHeader');\"  src='"+staticURL+"/images/go_arrowUp.gif' onclick=\"showMenu(true,'"+lookupMenuDivId+"');\"/> <br/>" +
	"</div>");
}
function assignParam(name,value){
	var futdate = new Date()
	var expdate = futdate.getTime()
	expdate += 10000
	futdate.setTime(expdate)
	var newCookie=name+"="+value+";path=/;";
	newCookie += " expires=" + futdate.toGMTString() ;
	//alert("write cookie:"+newCookie);
	document.cookie=newCookie; //Write the cookie
}
//Positioning functions
function getObjLeft(anObject){return(anObject.offsetParent ? (getObjLeft(anObject.offsetParent) + anObject.offsetLeft) : anObject.offsetLeft);}
function getObjTop(anObject){return(anObject.offsetParent ? (getObjTop(anObject.offsetParent) + anObject.offsetTop) : anObject.offsetTop);}
function getLeft(anObject){ return(getObjLeft(anObject)); }
function getTop(anObject){ return(getObjTop(anObject));}
