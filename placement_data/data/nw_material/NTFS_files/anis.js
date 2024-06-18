/*
	Created by Asher Szmulewicz
	User: ashers
	Date: Sep 01, 2005
	Time: 3:56:44 PM
	*/
	// on november 3rd added keyboard navigation Asher
var autos = new Array();		// array of autoforms
var tid = 0;	 // timer id
var httpBaseURL;
var startswithServlet;
var resultCache=new Object(); // This is a cache of results from the server...
var keycode=0; //holds the last keycode pressed
var req = null;
var currentfid;
var enter = false;

function AutoForm(fid,aid,dir)
{
	this.id = fid;
	this.autoid = aid;
	var thisform = document.getElementById(fid);
	this.inputfield = thisform.s;
	this.rows = 0;
	this.rowDivList = null;
    this.highlightedSuggestionIndex = -1;
    this.highlightedSuggestionDiv= null;
	this.topics = new Array(11); // holds the simple urls array
	this.topicTitles = new Array(11); // holds the topic title array
	this.cursorUpDownPressed = false;
	this.currentInputFieldValue=""; // also inputfield value
	this.partialquery="";
	this.currentTopic = ""; // holds the current simple url
	this.currentTitle = ""; // holds the current title
	this.keycode = 0; // holds the last keycode pressed
    this.dir=dir;
    if (this.inputfield.addEventListener)
		this.inputfield.addEventListener("keypress", KeyPress, true);
	thisform.onsubmit= returnFalse;
}
function returnFalse() {return false;}
function returnTrue(){return true;}
function InitForm(fid,aid,dir)
{
	var autoform = new AutoForm(fid,aid,dir);
	autos[fid] = autoform;
}
function BodyLoad(HttpBaseURL, StartsWithServlet,s, setFocus)
{
	httpBaseURL = HttpBaseURL;
	startswithServlet = StartsWithServlet;
    var queryfield = document.getElementById(s);
    //Don't set focus for sitePages - check the value of boolean setFocus
    if ((queryfield && queryfield.value=="") && ((setFocus != null && setFocus == true) || setFocus == null))
        queryfield.focus(); // focus on first inputfield if available and empty
}
function KeyDown(fid,evt)
{
    var ctrl = 0;
    if(!evt && window.event)
	{
        evt=window.event;
    }
    if(document.layers)
        ctrl = (evt.modifiers & Event.CONTROL_MASK) > 0;
    else
        ctrl = evt.ctrlKey;
    if (tid)
		return;
	keycode = evt.keyCode;
    if (ctrl)
       return true;
    if (isCtrlKey(keycode))
        return true;
    if(isSendKey(keycode))
	{
		tid = setTimeout("SendQuery('" + fid + "')", 150);
	}
	return UpDown(fid,keycode);
}
function KeyPress(event)
{
	if (event.which == 0 && !isShowKey(keycode)) {
	if (event.preventDefault)
		event.preventDefault();
	return false;
	}
}
UpDown = function(fid,keycode)
{
	var inputfield = autos[fid].inputfield;
	var inputfieldValue = inputfield.value;
	autos[fid].keycode = keycode;
	if(handleCursorUpDownEnter(keycode,fid,inputfieldValue) || isShowKey(keycode))
		return true;
	else
		return false;
}
// returns false if cursor up / cursor down or enter pressed...
function handleCursorUpDownEnter(eventCode,fid,inputfieldValue)
{
	var highlightedSuggestionIndex = autos[fid].highlightedSuggestionIndex;
	var autodiv = document.getElementById(autos[fid].autoid);
    if (eventCode == 33) // page up
	{
		if (autodiv.style.visibility=="visible")
		{
			setStyleForElement(autos[fid].highlightedSuggestionDiv,"1");
			autos[fid].highlightedSuggestionIndex = 0;
			highlightNewValue(fid,0);
		}
		return false;
	}
	else if (eventCode == 34) // page down
	{
		if (autodiv.style.visibility=="visible")
		{
			setStyleForElement(autos[fid].highlightedSuggestionDiv,"1");
			autos[fid].highlightedSuggestionIndex = autos[fid].rows-1;
			highlightNewValue(fid,autos[fid].rows-1);
		}
		return false;
	}
	else if(eventCode==40)
	{
		if (autodiv.style.visibility=="visible")
		{
			highlightNewValue(fid,highlightedSuggestionIndex+1);
			return false;
		}
	}
	else if(eventCode==38)
	{
		if (autodiv.style.visibility=="visible")
		{
			highlightNewValue(fid,highlightedSuggestionIndex-1);
			return false;
		}
	}
	else if(eventCode==13||eventCode==3)
	{
		if (eventCode==13) {
			enter = true;
            return submitHandlerIncr1(fid);
		}
		return false;
	}
	if (keycode != 0)
		ForEachKeyPressed(inputfieldValue,fid);
	return true;
}
// Called when cursor up/down pressed... selects new entry in autodiv...
function highlightNewValue(fid,C)
{
	autos[fid].currentInputFieldValue= autos[fid].partialquery;
	//autos[fid].inputfield.value=autos[fid].partialquery;
	if(!autos[fid].rowDivList)
	{
		return;
	}
	ShowDiv(fid);
	if(C>=autos[fid].rows)
	{
        if (autos[fid].dir=="up")
        {
            C=autos[fid].rows;
        }
        else
        {
            C=autos[fid].rows-1
            autos[fid].highlightedSuggestionDiv=autos[fid].rowDivList.item(C);
        }
    }
	if(C<0)
	{
        if (autos[fid].dir=="up")
        {
            C=0;
            autos[fid].highlightedSuggestionDiv=autos[fid].rowDivList.item(C);
        }
        else
        {
            C=-1;
            autos[fid].highlightedSuggestionIndex=-1
            autos[fid].highlightedSuggestionDiv= null;
            setStyleForElement(autos[fid].rowDivList.item(0),"1");
        }
    }
	 if(autos[fid].highlightedSuggestionIndex!=-1&&C!=autos[fid].highlightedSuggestionIndex)
	 {
		setStyleForElement(autos[fid].highlightedSuggestionDiv,"1");
		autos[fid].highlightedSuggestionIndex=-1
	}

	if (C>=0)
	{
		autos[fid].highlightedSuggestionIndex=C;
		autos[fid].highlightedSuggestionDiv=autos[fid].rowDivList.item(C);
		setStyleForElement(autos[fid].highlightedSuggestionDiv,"0");
		currentInputFieldValue=autos[fid].partialquery;
		var q = valueOfAutodiv(autos[fid].highlightedSuggestionDiv);
		autos[fid].currentTopic = autos[fid].topics[C];
		autos[fid].currentTitle = autos[fid].topicTitles[C];
	}
	else
	{
		autos[fid].currentTopic ="";
		autos[fid].currentTitle ="";
	}
}
// This function gets called for every keypress I make...
function ForEachKeyPressed(partialquery,fid)
{
	var localInputField = autos[fid].inputfield;
	var autoid = autos[fid].autoid;
	var autodiv = document.getElementById(autoid);
	var highlightedSuggestionIndex= autos[fid].highlightedSuggestionIndex;
    // This becomes the rows in our suggestion list...
	var J=autodiv.getElementsByTagName("LI");

	// # of rows in list...
	var rows = J.length;
	autos[fid].rows = rows;
	autos[fid].rowDivList=J;
	autos[fid].partialquery=partialquery;
	autos[fid].currentTopic = ""; //reset
	autos[fid].currentTitle = ""; //reset
	var s= localInputField.value;
	if(s=="" || rows==0 || keycode==27 || s.search(/\S/)==-1 || (autodiv.style.visibility=="hidden" && ( keycode==35 || keycode==36))) //esc
		HideDiv(fid);
	for(var f=0; f<rows; f++)
	{
		setStyleForElement(J.item(f),"1");
	}
	var highlightedSuggestionDiv = autos[fid].highlightedSuggestionDiv;
	var noncharkey = false;
	switch(autos[fid].keycode)
	{
		case 8: // back space
		case 33: //page up
		case 34: // page down
		case 35: // end
		case 36: // home
		case 37: // left arrow
		case 39: // right arrow
		case 45: //	????
		case 46: // delete
		noncharkey=true;
		break;
		default:
			// regular keypress ...
		break
	}
	if(!noncharkey && highlightedSuggestionDiv)
	{
		setStyleForElement(highlightedSuggestionDiv,"0");
		var z;
		z=valueOfAutodiv(highlightedSuggestionDiv);
		if(z!=localInputField.value)
		{
			if(localInputField.value!=partialquery)
			{
				return;
			}
		}
	}
	else
	{
		highlightedSuggestionIndex=-1;
    }
}
// Return null if i undefined...
// otherwise return value of span 3...
function valueOfAutodiv(i)
{
	if(!i)
	{
		return null;
	}
	return findSpanValueForClass(i,"5")
}
// Find span value with className = dc...
function findSpanValueForClass(i,dc){
	var ga=i.getElementsByTagName("span");
	if(ga){
		for(var f=0; f<ga.length; ++f){
			if(ga[f].className==dc){
				var value=ga[f].innerHTML;
				if(value=="&nbsp;") {
					return"";
				} else{
					var z=stripCRFromString(value);
					return z
				}
			}
		}
	}else{
		return""
	}
}
// strip CR from string...
function stripCRFromString(va)
{
	for(var f=0,oa="",zb="\n\r"; f<va.length; f++)
	{
		if (zb.indexOf(va.charAt(f))==-1)
			oa+=va.charAt(f);
		else
			oa+=" ";
	}
	return oa
}

function submitHandlerIncr1(fid,suffix,ts)
{
    if(autos[fid].autoid)
    {
        var autodiv = document.getElementById(autos[fid].autoid);
        if (autodiv.style.visibility=="visible")
        {
            var highlightedSuggestionIndex = autos[fid].highlightedSuggestionIndex;
            if(autos[fid].currentTopic || highlightedSuggestionIndex==autos[fid].topicTitles.length)
                setLocation(fid,suffix,ts);
            else
               return submitHandler(autos[fid].inputfield,null,ts,suffix);
            setTimeout("HideDiv('" + fid + "')", 300);
            return false;
        }
        else
        {
            HideDiv(fid);
            return submitHandler(autos[fid].inputfield,null,ts,suffix);
        }
    }
    else
         return submitHandler(autos[fid].inputfield,null,ts,suffix);
}
function setLocation(fid,suffix,ts)
{
	if(location.search.indexOf("gwp=13")>-1 || location.search.indexOf("ff=1")>-1){
		if (suffix) suffix+="&ff=1";
		else suffix="ff=1";
	}
    var highlightedSuggestionIndex = autos[fid].highlightedSuggestionIndex;
    if (highlightedSuggestionIndex==autos[fid].topicTitles.length)
    {
        window.location.href = "/main/Record2?a=fayt_searchweb&url="+encodeURIComponent("/"+autos[fid].partialquery+"?web.x=1"+ (suffix?"&"+suffix:""));
        return;
    }
    autos[fid].inputfield.value=autos[fid].currentTitle;
    assignParam('navinfo','method|22');
	if (suffix && (suffix.indexOf("web.x")>-1 || suffix.indexOf("shop.x")>-1))
		window.location.href = "/" + encodeURIComponent(autos[fid].currentTitle) + (suffix?"?"+suffix:"");
	else
		window.location.href = "/topic/"+encodeURIComponent(autos[fid].currentTopic) + (suffix?"?"+suffix:"");
}
function SendQuery(fid)
{
	tid =0;
	var autoid = autos[fid].autoid;
	var s = autos[fid].inputfield;
	var query = s.value;
	if(query.length!=0 && query.search(/\S/)!=-1)
	{
		var result=resultCache[query];
		if(result)
		{
			// Found in our cache...
			ShowDiv(autoid);
			startswithResult(query,result[0],result[1],result[2],fid);
		}
		else
		{
			var url= httpBaseURL + "/" + startswithServlet + "?s=" + encodeURIComponent(query) +"&method=22";
			if (req)
				req.abort();
			req = (!window.XMLHttpRequest)? (ActiveXObject ? (new ActiveXObject("Microsoft.XMLHTTP")):""):(new XMLHttpRequest());
			req.open("GET", url, true);
			req.onreadystatechange = new Function("Process('" + fid + "')");
			req.send(null);
		}
	}
	else
		HideDiv(fid);
}
function Process(fid)
{
	if (req.readyState == 4)
	{
		try // ff throws an exception sometimes
		{
			if (req.status == 200)
			{
				if(req.responseText=="")
					HideDiv(fid);
				else
				{

					eval('startswithResult(' + req.responseText + '"' + fid + '");');
				}
			}
		}
		catch(e){}
	}
}
function ShowDiv(fid)
{
	if (autos[fid])
	{
		document.getElementById(autos[fid].autoid).style.visibility="visible";
        hideGoButtonMenu();
        showHideSelects(fid,false);
	}
}

function HideDiv(fid)
{
	if (autos[fid])
	{
		document.getElementById(autos[fid].autoid).style.visibility="hidden";
		showHideSelects(fid,true);
	}

}
function onBlurHandler( fid, evt )
{
	if(!evt && window.event)
	{
		evt=window.event;
	}
	setTimeout("HideDiv('" + fid + "')", 300);
}
startswithResult=function(partialquery,topictitles,shortdesc,simpleurl,fid)
{
	resultCache[partialquery]=new Array(topictitles,shortdesc,simpleurl);
	autos[fid].topics = simpleurl;
	autos[fid].topicTitles = topictitles;
	autos[fid].partialquery=partialquery;
	if (topictitles.length==0)
	{
		//HideDiv(fid);
		autos[fid].rows=0;
		autos[fid].rowDivList=null;
	}
	//else
	{
        ShowDiv(fid); // ShowDiv has to be before displayFoundList
         if (autos[fid].dir=="up")
            autos[fid].highlightedSuggestionIndex= topictitles.length+1;
        else
            autos[fid].highlightedSuggestionIndex= -1;
        displayFoundList(topictitles, shortdesc, fid);
        ForEachKeyPressed(partialquery, fid);
	}
}
function displayFoundList(topictitles, shortdesc, fid)
{
	var autoid = autos[fid].autoid;
	var autoDIV = document.getElementById(autoid);
	var s = autos[fid].inputfield;
	var query = s.value;
	while(autoDIV.childNodes.length > 0)
		autoDIV.removeChild(autoDIV.childNodes[0]);
//	if (topictitles.length!=0)
	{
		var su = document.createElement("SPAN");
		setStyleForElement(su, "1");
		var suka = document.createElement("SPAN");
		setStyleForElement(suka, "2");
		var suua = document.createElement("SPAN");
		suua.innerHTML = "<b>Choose a suggestion...</b>";
		setStyleForElement(suua, "7");
		var suea = document.createElement("SPAN");
		var url= httpBaseURL + "/transoptform?method=22";
		suea.innerHTML = "<A  onClick=\"assignParam('navinfo','method|22');\" href="+url+"> Hide Suggestions</A>";
		setStyleForElement(suea, "6");
		su.displaySpan = suea;
		suka.appendChild(suea);
		suka.appendChild(suua);
		su.appendChild(suka);
		autoDIV.appendChild(su);
		var pp = document.createElement("DIV");
		var mm = document.createElement("UL");
        currentfid = fid;
		for(var f = 0; f < topictitles.length+1; ++f)
		{
            var u = document.createElement("LI");
            var ua = document.createElement("SPAN");
            u.displaySpan = ua;
            if (f==topictitles.length)
            {
                var suffix="";
                setStyleForElement(u, "9");
                if(location.search.indexOf("gwp=13")>-1 || location.search.indexOf("ff=1")>-1)
                {
		            suffix="&ff=1";
                }
		        ua.innerHTML="<span style='text-decoration:none;color:black;font-size:12px;'><A href="+ "/main/Record2?a=fayt_searchweb&url="+encodeURIComponent("/"+autos[fid].partialquery+"?web.x=1"+suffix)+"> Search Web for <B>"+query+"</B></A></span>";
            }
            else
            {
                if (typeof(document.addEventListener) !="undefined")
                    u.addEventListener("mousedown",mdown ,false);
                else
                    u.onmousedown=mdown;
                setStyleForElement(u, "1");
                var text = topictitles[f];
                var text2 = "";
                if (shortdesc[f].length>0)
                {
                    if (shortdesc[f].charAt(0)!= "(" && shortdesc[f].charAt(shortdesc[f].length-1)!= ")")
                        shortdesc[f] = "(" + shortdesc[f] +")";
                    text2= " <span style='text-decoration:none;color:black;font-size:12px;'>" + shortdesc[f] + "</span>";
                }
                ua.innerHTML = "<span style='color:green;font-size:12px;text-decoration:underline'>" +text +"</span>"+ text2;
            }
            u.appendChild(ua);
            u.onmouseover=new Function("mover('" + fid + "',"+f +")");
            u.onmouseout=new Function("mout('" +fid +"')");
            mm.appendChild(u);
        }
		var utip = document.createElement("DIV");
		utip.innerHTML = "<b>...or finish typing and press Enter.</b>";
		setStyleForElement(utip, "8");
		pp.appendChild(mm);
        pp.appendChild(utip);
		autoDIV.appendChild(pp);
	}
}
var mdown=function(event)
{
	if (isLeftButton(event))
	{
		setLocation(currentfid,"");
	}
}
var mover=function(fid,index)
{
	if(autos[fid].highlightedSuggestionIndex!=-1 && index!=autos[fid].highlightedSuggestionIndex)
	{
		setStyleForElement(autos[fid].highlightedSuggestionDiv,"1");
		autos[fid].highlightedSuggestionIndex=-1
	}
	var autoid = autos[fid].autoid;
	var autodiv = document.getElementById(autoid);
	J=autodiv.getElementsByTagName("LI");
    autos[fid].highlightedSuggestionIndex=index;
	autos[fid].rowDivList=J;
	autos[fid].highlightedSuggestionDiv=autos[fid].rowDivList.item(index);
	autos[fid].currentTopic= autos[fid].topics[index];
	autos[fid].currentTitle= autos[fid].topicTitles[index];
	setStyleForElement(autos[fid].highlightedSuggestionDiv,"0");
};

var mout=function(fid)
{
    autos[fid].currentTopic= "";
	autos[fid].currentTitle= "";
    setStyleForElement(autos[fid].highlightedSuggestionDiv,"1");
}
function setStyleForElement(c,name)
{
    if (c!= null && typeof(c) !="undefined")
	{
		c.className=name;
		switch(name.charAt(0))
		{
		 case "0":
			c.style.backgroundColor="#3366cc";
			c.style.color="black";
            c.style.cursor= "pointer";
            if(c.displaySpan)
			{
				var linkarray = c.displaySpan.getElementsByTagName("span");
                var anchorarray = c.displaySpan.getElementsByTagName("a");
                if (linkarray.item(0))linkarray.item(0).style.color= "white";
				if (linkarray.item(1))linkarray.item(1).style.color= "white";
                if (anchorarray.item(0))anchorarray.item(0).style.color= "white";
            }
			break;
		 case "1":
			c.style.backgroundColor="white";
			c.style.color="black";
			if(c.displaySpan)
			{
				var linkarray = c.displaySpan.getElementsByTagName("span");
                var anchorarray = c.displaySpan.getElementsByTagName("a");
                if (linkarray.item(0))linkarray.item(0).style.color= "green";
				if (linkarray.item(1))linkarray.item(1).style.color= "black";
                if (anchorarray.item(0))anchorarray.item(0).style.color= "black";
            }
			break;
		case "2":
			c.style.display="block";
			c.style.paddingRight="3";
			c.style.height="15px";
			c.style.overflow="hidden";
			break;
		case "6":
			c.style.styleFloat = "right";
			c.style.cssFloat="right";
			c.style.width=40+"%";
			c.style.fontSize="11px";
			c.style.textAlign="right";
			c.style.whiteSpace="nowrap";
			break;
		case "7":
			c.style.width=60+"%";
			c.style.cssFloat="left";
			c.style.textAlign="left";
			c.style.fontSize="11px";
			c.style.whiteSpace="nowrap";
			break;
		case "8":
			c.style.textAlign="right";
			c.style.whiteSpace="nowrap";
			c.style.fontSize="11px";
			break;
		case "9":
            c.style.color="black";
            c.style.listStyle="none";
            break;
		}
	}
}
/* In order to fix an IE bug for Incremental search
	 The div is always below the select box, so every time you display the div
	 you should hide the select boxes that overlap
*/
function showHideSelects(fid,bShow)
{
	var selObjects=document.getElementsByTagName("SELECT");
	var autodiv = document.getElementById(autos[fid].autoid);
	for(var i=0;i<selObjects.length;i++)
	{
		if(ObjectOverlap(autodiv, selObjects[i]) || selObjects[i].id=="menu" || selObjects[i].id=="topic" || selObjects[i].id=="categories")
		{
			goMenu=document.getElementById("lookupMenuHeader");
			if (goMenu&&goMenu.style.display =="block") goShown=true; else goShown=false;
			selObjects[i].style.visibility = (bShow == true && !goShown ? "visible" : "hidden");
		}
	}
}
function ObjectOverlap(obj1, obj2)
{
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
//Positioning functions
function getObjLeft(anObject)
{
	return(anObject.offsetParent ? (getObjLeft(anObject.offsetParent) + anObject.offsetLeft) : anObject.offsetLeft);
}

function getObjTop(anObject)
{
	return(anObject.offsetParent ? (getObjTop(anObject.offsetParent) + anObject.offsetTop) : anObject.offsetTop);
}


function getLeft(anObject)
{
	return(getObjLeft(anObject));
}

function getTop(anObject)
{
	return(getObjTop(anObject));
}

function isSendKey(keycode)
{
	var sendkey = true;
	switch(keycode)
	{
		//case 8: // back space
		case 10: //shift
		case 11: //ctrl
		case 12: //alt
		case 13: //enter
		case 27: //esc
		case 33: //page up
		case 34: // page down
		case 35: // end
		case 36: // home
		case 37: // left arrow
		case 38: // up arrow
		case 39: // right arrow
		case 40: // down arrow
		case 45: //	????
		//case 46: // delete
			sendkey=false;
			break;
		default:
			// regular keypress ...
			break;
	}
	return sendkey;
}
function isShowKey(keycode)
{
// 38 is up cursor key, 40 is down cursor key...
	if(keycode==40 || keycode==38 || keycode == 33 || keycode== 34 || keycode==13)
		return false;
	else
	return true;
}
function isCtrlKey(keycode)
{
	if(keycode==16 || keycode==17 || keycode == 18)// shift,ctrl,alt
		return true;
	else
	return false;
}
function isLeftButton(e)
{
	var leftclick;
	if (!e) var e = window.event;
	if (e.which) leftclick = (e.which == 1);
	else if (e.button) leftclick = (e.button == 0 || e.button==1);
	return leftclick;
}

function hideGoButtonMenu(){
    var headerMenu = document.getElementById("lookupMenuHeader");
    var footerMenu = document.getElementById("lookupMenuFooter");
    if(headerMenu) headerMenu.style.display = "none";
    if(footerMenu) footerMenu.style.display = "none";
}
