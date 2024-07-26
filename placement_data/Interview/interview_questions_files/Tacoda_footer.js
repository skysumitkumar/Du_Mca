/* START - Aggregate Knowledge - 4.18.07 -removed 6.01.07 - reinstalled 7.30.07,......new parameters added, on 3.27.08 : 10:50 am EDT, revised 4.15.08 */

var bodyClass = document.getElementsByTagName("body")[0].className;
if (bodyClass != "" && bodyClass.indexOf(" ") != -1) {
		bodyClass = bodyClass.substring(0, bodyClass.indexOf(" "));
	}


if (!document.getElementById("relatedItems") && document.getElementById("inset") && (!document.getElementById("specialReport")) && (bodyClass == "technology" || bodyClass == "topNews") ) {	
	var akContentAnchor = document.createElement("a");
	akContentAnchor.setAttribute("id", "akAPI");
	var storyToolsDiv = document.getElementById("insetContent").firstChild;
	document.getElementById("insetContent").insertBefore(akContentAnchor,storyToolsDiv);
	
	}

	var metas = document.getElementsByTagName("meta");
	var titletag = document.getElementsByTagName("title")[0];

	for (i = 0; i < metas.length; i++) {
		if (metas[i].name == "headline") { var writehead = metas[i].content }
		if (metas[i].name == "channel") { var writechannel = metas[i].content }
		if (metas[i].name == "akWebsiteRegion") { var writeregion = metas[i].content }
		if (metas[i].name == "akTargetType") { var writetarget = metas[i].content }
		if (metas[i].name == "mediatype") { var writetype = metas[i].content }
	}
			
	var writetitle = (!titletag)?writehead:titletag.innerHTML;
	var writechannel = (!writechannel)?"NEWS":writechannel;
	var writechannel = writechannel.replace(/ /g, "_");
	var writeregion = (!writeregion)?writechannel:writeregion;
	var writetarget = (!writetarget)?writechannel:writetarget;
	var writetype = (!writetype)?"unknown":"mediatype:" + writetype.replace(/ /g, "_");

	var akApiKey = "RecEngine-0D56B322-C5A9-C6E4-E8BC-1244BD9CB207";
	var akTarget = window.top.location.toString();
	var akWebsiteRegion = writeregion;
	var akTargetType = writetarget;
	var akTargetDesc = writetitle; 
	var akAnchorId = "akAPI";
	var akResultsTitle = (bodyClass == "topNews")?"MORE FROM BUSINESSWEEK":"READERS ALSO READ";
	var akMaxNum = "5";
	var akKeywords = writetype; 
 
var akScript = document.createElement('script'); 
akScript.setAttribute('src', 'http://api.aggregateknowledge.com/2007/01/15/js/' + Math.floor((new Date().valueOf()) / 3600000) + '.js');
document.getElementsByTagName('head')[0].appendChild(akScript);

	
/* END - Aggregate Knowledge Test - 4.18.07 -removed 6.01.07 - reinstalled 7.30.07*/

/* tacoda footer voided 01.31.07, original content backed at /common_scripts/Tacoda.old/Tacoda_footer.v4.js */

/* Start - Revenue Science (see also Tacoda_AMS_DDC_Header.js) install with channel map 06.19.07 */
			
	/* DM_cat removed 7.28.07 */
	
	DM_tag();
	
	
/* End - Revenue Science (see also Tacoda_AMS_DDC_Header.js) install with channel map 06.19.07 */
	
/* Start - WebTrends  (see also Tacoda_AMS_DDC_Header.js) */
	
	// START OF Advanced SmartSource Data Collector TAG
// Copyright (c) 1996-2006 WebTrends Inc. All rights reserved.
// $DateTime: 2006/03/09 14:15:22 $
var gService = true;
var gTimeZone = -5;
// Code section for Enable First-Party Cookie Tracking
function dcsCookie(){
	if (typeof(dcsOther)=="function"){
		dcsOther();
	}
	else if (typeof(dcsPlugin)=="function"){
		dcsPlugin();
	}
	else if (typeof(dcsFPC)=="function"){
		dcsFPC(gTimeZone);
	}
}
function dcsGetCookie(name){
	var pos=document.cookie.indexOf(name+"=");
	if (pos!=-1){
		var start=pos+name.length+1;
		var end=document.cookie.indexOf(";",start);
		if (end==-1){
			end=document.cookie.length;
		}
		return unescape(document.cookie.substring(start,end));
	}
	return null;
}
function dcsGetCrumb(name,crumb){
	var aCookie=dcsGetCookie(name).split(":");
	for (var i=0;i<aCookie.length;i++){
		var aCrumb=aCookie[i].split("=");
		if (crumb==aCrumb[0]){
			return aCrumb[1];
		}
	}
	return null;
}
function dcsGetIdCrumb(name,crumb){
	var cookie=dcsGetCookie(name);
	var id=cookie.substring(0,cookie.indexOf(":lv="));
	var aCrumb=id.split("=");
	for (var i=0;i<aCrumb.length;i++){
		if (crumb==aCrumb[0]){
			return aCrumb[1];
		}
	}
	return null;
}
function dcsFPC(offset){
	if (typeof(offset)=="undefined"){
		return;
	}
	if (document.cookie.indexOf("WTLOPTOUT=")!=-1){
		return;
	}
	var name=gFpc;
	var dCur=new Date();
	var adj=(dCur.getTimezoneOffset()*60000)+(offset*3600000);
	dCur.setTime(dCur.getTime()+adj);
	var dExp=new Date(dCur.getTime()+315360000000);
	var dSes=new Date(dCur.getTime());
	WT.co_f=WT.vt_sid=WT.vt_f=WT.vt_f_a=WT.vt_f_s=WT.vt_f_d=WT.vt_f_tlh=WT.vt_f_tlv="";
	if (document.cookie.indexOf(name+"=")==-1){
		if ((typeof(gWtId)!="undefined")&&(gWtId!="")){
			WT.co_f=gWtId;
		}
		else if ((typeof(gTempWtId)!="undefined")&&(gTempWtId!="")){
			WT.co_f=gTempWtId;
			WT.vt_f="1";
		}
		else{
			WT.co_f="2";
			var cur=dCur.getTime().toString();
			for (var i=2;i<=(32-cur.length);i++){
				WT.co_f+=Math.floor(Math.random()*16.0).toString(16);
			}
			WT.co_f+=cur;
			WT.vt_f="1";
		}
		if (typeof(gWtAccountRollup)=="undefined"){
			WT.vt_f_a="1";
		}
		WT.vt_f_s=WT.vt_f_d="1";
		WT.vt_f_tlh=WT.vt_f_tlv="0";
	}
	else{
		var id=dcsGetIdCrumb(name,"id");
		var lv=parseInt(dcsGetCrumb(name,"lv"));
		var ss=parseInt(dcsGetCrumb(name,"ss"));
		if ((id==null)||(id=="null")||isNaN(lv)||isNaN(ss)){
			return;
		}
		WT.co_f=id;
		var dLst=new Date(lv);
		WT.vt_f_tlh=Math.floor((dLst.getTime()-adj)/1000);
		dSes.setTime(ss);
		if ((dCur.getTime()>(dLst.getTime()+1800000))||(dCur.getTime()>(dSes.getTime()+28800000))){
			WT.vt_f_tlv=Math.floor((dSes.getTime()-adj)/1000);
			dSes.setTime(dCur.getTime());
			WT.vt_f_s="1";
		}
		if ((dCur.getDay()!=dLst.getDay())||(dCur.getMonth()!=dLst.getMonth())||(dCur.getYear()!=dLst.getYear())){
			WT.vt_f_d="1";
		}
	}
	WT.co_f=escape(WT.co_f);
	WT.vt_sid=WT.co_f+"."+(dSes.getTime()-adj);
	var expiry="; expires="+dExp.toGMTString();
	document.cookie=name+"="+"id="+WT.co_f+":lv="+dCur.getTime().toString()+":ss="+dSes.getTime().toString()+expiry+"; path=/"+(((typeof(gFpcDom)!="undefined")&&(gFpcDom!=""))?("; domain="+gFpcDom):(""));
	if (document.cookie.indexOf(name+"=")==-1){
		WT.co_f=WT.vt_sid=WT.vt_f_s=WT.vt_f_d=WT.vt_f_tlh=WT.vt_f_tlv="";
		WT.vt_f=WT.vt_f_a="2";
	}
}

// Add dcsOther() here if using existing first-party cookie, or dcsPlugin() here if using WT Cookie Plugin

// Code section for Set the First-Party Cookie domain
//var gFpcDom=".webtrends.com";

// Code section for Enable Event Tracking
function dcsParseSvl(sv){
	sv=sv.split(" ").join("");
	sv=sv.split("\t").join("");
	sv=sv.split("\n").join("");
	var pos=sv.toUpperCase().indexOf("WT.SVL=");
	if (pos!=-1){
		var start=pos+8;
		var end=sv.indexOf('"',start);
		if (end==-1){
			end=sv.indexOf("'",start);
			if (end==-1){
				end=sv.length;
			}
		}
		return sv.substring(start,end);
	}
	return "";
}
function dcsIsOnsite(host){
    var aDoms=gDoms.split(',');
    for (var i=0;i<aDoms.length;i++){
		if (host.indexOf(aDoms[i])!=-1){
		       return 1;
		}
    }
    return 0;
}
function dcsIsHttp(e){
	return (e.href&&e.protocol&&(e.protocol.indexOf("http")!=-1))?true:false;
}

var gHref="";
function dcsSaveHref(evt){
	if (evt.preventDefault&&evt.target.href){
		evt.preventDefault();
		gHref=evt.target.href;
	}
}
function dcsLoadHref(evt){
	if (gHref.length>0){
		window.location=gHref;
		gHref="";
	}
}
function dcsEvt(evt,tag){
	var e=evt.target||evt.srcElement;
	while (e.tagName&&(e.tagName!=tag)){
		e=e.parentElement||e.parentNode;
	}
	return e;
}
function dcsBind(event,func){
	if ((typeof(window[func])=="function")&&document.body){
		if (document.body.addEventListener){
			document.body.addEventListener(event, window[func], true);
		}
		else if(document.body.attachEvent){
			document.body.attachEvent("on"+event, window[func]);
		}
	}
}
function dcsET(){
	dcsBind("click","dcsDownload");
	dcsBind("click","dcsDynamic");
	dcsBind("click","dcsFormButton");
	dcsBind("click","dcsOffsite");
	dcsBind("click","dcsAnchor");
	dcsBind("mousedown","dcsRightClick");
}
	
function dcsMultiTrack(){
	if (arguments.length%2==0){
		for (var i=0;i<arguments.length;i+=2){
			if (arguments[i].indexOf('WT.')==0){
				WT[arguments[i].substring(3)]=arguments[i+1];
			}
			else if (arguments[i].indexOf('DCS.')==0){
				DCS[arguments[i].substring(4)]=arguments[i+1];
			}
			else if (arguments[i].indexOf('DCSext.')==0){
				DCSext[arguments[i].substring(7)]=arguments[i+1];
			}
		}
		var dCurrent=new Date();
		DCS.dcsdat=dCurrent.getTime();
		dcsFunc("dcsCookie");
		dcsTag();
	}
}

// Add event handlers here

// Code section for Generate an Ad View query parameter for every Ad Click link. For examples, see Help.
function dcsAdSearch(){
	if (document.links){
		for (var i=0;i<document.links.length;i++){
			var anch=document.links[i].href+"";
			var pos=anch.toUpperCase().indexOf("WT.AC=");
			if (pos!=-1){
				var start=pos+6;
				var end=anch.indexOf("&",start);
				var value=anch.substring(start,(end!=-1)?end:anch.length);
				WT.ad=WT.ad?(WT.ad+";"+value):value;
			}
		}
	}
}
function dcsDownload(evt){
	evt=evt||(window.event||"");
	if (evt){
		var e=dcsEvt(evt,"A");
		if (e.hostname&&dcsIsOnsite(e.hostname)){
			var types="xls,doc,pdf,txt,csv,zip";
			if (types.indexOf(e.pathname.substring(e.pathname.lastIndexOf(".")+1,e.pathname.length))!=-1){
				var qry=e.search?e.search.substring(e.search.indexOf("?")+1,e.search.length):"";
				if (qry.toUpperCase().indexOf("WT.SVL=")==-1){
					WT.svl=dcsParseSvl(e.name?e.name.toString():(e.onclick?e.onclick.toString():""));
				}
				var path=e.pathname?((e.pathname.indexOf("/")!=0)?"/"+e.pathname:e.pathname):"/";
				dcsSaveHref(evt);
				dcsMultiTrack("DCS.dcssip",e.hostname,"DCS.dcsuri",path,"DCS.dcsqry",e.search||"","WT.ti","Download:"+(e.innerHTML||""),"WT.dl","1");
				DCS.dcssip=DCS.dcsuri=DCS.dcsqry=WT.ti=WT.svl=WT.dl="";
			}
		}
	}
}

// Code section for Track clicks to links leading offsite.
function dcsOffsite(evt){
	evt=evt||(window.event||"");
	if (evt){
		var e=dcsEvt(evt,"A");
		if (e.hostname&&!dcsIsOnsite(e.hostname)){
			var qry=e.search?e.search.substring(e.search.indexOf("?")+1,e.search.length):"";
			if (qry.toUpperCase().indexOf("WT.SVL=")==-1){
				WT.svl=dcsParseSvl(e.name?e.name.toString():(e.onclick?e.onclick.toString():""));
			}
			var path=e.pathname?((e.pathname.indexOf("/")!=0)?"/"+e.pathname:e.pathname):"/";
			var trim=true;
			dcsSaveHref(evt);
			dcsMultiTrack("DCS.dcssip",e.hostname,"DCS.dcsuri",path,"DCS.dcsqry",trim?"":qry,"WT.ti","Offsite:"+e.hostname+path+qry,"WT.os","1");
			DCS.dcssip=DCS.dcsuri=DCS.dcsqry=WT.ti=WT.svl=WT.os="";
		}
	}
}




function dcsAdv(){
//	dcsFunc("dcsET");
	dcsFunc("dcsCookie");
	dcsFunc("dcsAdSearch");
	dcsFunc("dcsTP");
}
// END OF Advanced SmartSource Data Collector TAG

// START OF Basic SmartSource Data Collector TAG
// Copyright (c) 1996-2006 WebTrends Inc. All rights reserved.
// $DateTime: 2006/03/09 14:15:22 $
var gImages=new Array;
var gIndex=0;
var gQP=new Array();
var gI18n=false;
if (window.RegExp){
	var RE={"%09":/\t/g,"%20":/ /g,"%23":/\#/g,"%26":/\&/g,"%2B":/\+/g,"%3F":/\?/g,"%5C":/\\/g,"%22":/\"/g,"%7F":/\x7F/g,"%A0":/\xA0/g};
	var I18NRE={"%25":/\%/g};
}

// Add customizations here

function dcsVar(){
	var dCurrent=new Date();
	WT.tz=dCurrent.getTimezoneOffset()/60*-1;
	if (WT.tz==0){
		WT.tz="0";
	}
	WT.bh=dCurrent.getHours();
	WT.ul=navigator.appName=="Netscape"?navigator.language:navigator.userLanguage;
	if (typeof(screen)=="object"){
		WT.cd=navigator.appName=="Netscape"?screen.pixelDepth:screen.colorDepth;
		WT.sr=screen.width+"x"+screen.height;
	}
	if (typeof(navigator.javaEnabled())=="boolean"){
		WT.jo=navigator.javaEnabled()?"Yes":"No";
	}
	if (document.title){
		WT.ti=gI18n?dcsEscape(dcsEncode(document.title),I18NRE):document.title;
	}
	WT.js="Yes";
	WT.jv=dcsJV();
	if (document.body&&document.body.addBehavior){
		document.body.addBehavior("#default#clientCaps");
		if (document.body.connectionType){
			WT.ct=document.body.connectionType;
		}
		document.body.addBehavior("#default#homePage");
		WT.hp=document.body.isHomePage(location.href)?"1":"0";
	}
	if (parseInt(navigator.appVersion)>3){
		if ((navigator.appName=="Microsoft Internet Explorer")&&document.body){
			WT.bs=document.body.offsetWidth+"x"+document.body.offsetHeight;
		}
		else if (navigator.appName=="Netscape"){
			WT.bs=window.innerWidth+"x"+window.innerHeight;
		}
	}
	WT.fi="No";
	if (window.ActiveXObject){
		for(var i=10;i>0;i--){
			try{
				var flash = new ActiveXObject("ShockwaveFlash.ShockwaveFlash."+i);
				WT.fi="Yes";
				WT.fv=i+".0";
				break;
			}
			catch(e){
			}
		}
	}
	else if (navigator.plugins&&navigator.plugins.length){
		for (var i=0;i<navigator.plugins.length;i++){
			if (navigator.plugins[i].name.indexOf('Shockwave Flash')!=-1){
				WT.fi="Yes";
				WT.fv=navigator.plugins[i].description.split(" ")[2];
				break;
			}
		}
	}
	if (gI18n){
		WT.em=(typeof(encodeURIComponent)=="function")?"uri":"esc";
		if (typeof(document.defaultCharset)=="string"){
			WT.le=document.defaultCharset;
		} 
		else if (typeof(document.characterSet)=="string"){
			WT.le=document.characterSet;
		}
	}
//	WT.sp="@@SPLITVALUE@@";
	DCS.dcsdat=dCurrent.getTime();
	DCS.dcssip=window.location.hostname;
  DCSext.wt_domain=window.location.hostname;
	DCS.dcsuri=window.location.pathname;
	if (window.location.search){
		DCS.dcsqry=window.location.search;
		if (gQP.length>0){
			for (var i=0;i<gQP.length;i++){
				var pos=DCS.dcsqry.indexOf(gQP[i]);
				if (pos!=-1){
					var front=DCS.dcsqry.substring(0,pos);
					var end=DCS.dcsqry.substring(pos+gQP[i].length,DCS.dcsqry.length);
					DCS.dcsqry=front+end;
				}
			}
		}
	}
	if ((window.document.referrer!="")&&(window.document.referrer!="-")){
		if (!(navigator.appName=="Microsoft Internet Explorer"&&parseInt(navigator.appVersion)<4)){
			DCS.dcsref=gI18n?dcsEscape(window.document.referrer, I18NRE):window.document.referrer;
		}
	}
}

function dcsA(N,V){
	return "&"+N+"="+dcsEscape(V, RE);
}

function dcsEscape(S, REL){
	if (typeof(REL)!="undefined"){
		var retStr = new String(S);
		for (R in REL){
			retStr = retStr.replace(REL[R],R);
		}
		return retStr;
	}
	else{
		return escape(S);
	}
}

function dcsEncode(S){
	return (typeof(encodeURIComponent)=="function")?encodeURIComponent(S):escape(S);
}

function dcsCreateImage(dcsSrc){
	if (document.images){
		gImages[gIndex]=new Image;
		if ((typeof(gHref)!="undefined")&&(gHref.length>0)){
			gImages[gIndex].onload=gImages[gIndex].onerror=dcsLoadHref;
		}
		gImages[gIndex].src=dcsSrc;
		gIndex++;
	}
	else{
		document.write('<IMG ALT="" BORDER="0" NAME="DCSIMG" WIDTH="1" HEIGHT="1" SRC="'+dcsSrc+'">');
	}
}

function dcsMeta(){
	var elems;
	if (document.all){
		elems=document.all.tags("meta");
	}
	else if (document.documentElement){
		elems=document.getElementsByTagName("meta");
	}
	if (typeof(elems)!="undefined"){
		for (var i=1;i<=elems.length;i++){
			var meta=elems.item(i-1);
			if (meta.name){
				if (meta.name.indexOf('WT.')==0){
					WT[meta.name.substring(3)]=(gI18n&&(meta.name.indexOf('WT.ti')==0))?dcsEscape(dcsEncode(meta.content),I18NRE):meta.content;
				}
				else if (meta.name.indexOf('DCSext.')==0){
					DCSext[meta.name.substring(7)]=meta.content;
				}
				else if (meta.name.indexOf('DCS.')==0){
					DCS[meta.name.substring(4)]=(gI18n&&(meta.name.indexOf('DCS.dcsref')==0))?dcsEscape(meta.content,I18NRE):meta.content;
				}
			}
		}
	}
}

function dcsTag(){
	if (document.cookie.indexOf("WTLOPTOUT=")!=-1){
		return;
	}
	var P="http"+(window.location.protocol.indexOf('https:')==0?'s':'')+"://"+gDomain+(gDcsId==""?'':'/'+gDcsId)+"/dcs.gif?";
	for (N in DCS){
		if (DCS[N]) {
			P+=dcsA(N,DCS[N]);
		}
	}
	for (N in WT){
		if (WT[N]) {
			P+=dcsA("WT."+N,WT[N]);
		}
	}
	for (N in DCSext){
		if (DCSext[N]) {
			P+=dcsA(N,DCSext[N]);
		}
	}
	if (P.length>2048&&navigator.userAgent.indexOf('MSIE')>=0){
		P=P.substring(0,2040)+"&WT.tu=1";
	}
	dcsCreateImage(P);
}

function dcsJV(){
	var agt=navigator.userAgent.toLowerCase();
	var major=parseInt(navigator.appVersion);
	var mac=(agt.indexOf("mac")!=-1);
	var nn=((agt.indexOf("mozilla")!=-1)&&(agt.indexOf("compatible")==-1));
	var nn4=(nn&&(major==4));
	var nn6up=(nn&&(major>=5));
	var ie=((agt.indexOf("msie")!=-1)&&(agt.indexOf("opera")==-1));
	var ie4=(ie&&(major==4)&&(agt.indexOf("msie 4")!=-1));
	var ie5up=(ie&&!ie4);
	var op=(agt.indexOf("opera")!=-1);
	var op5=(agt.indexOf("opera 5")!=-1||agt.indexOf("opera/5")!=-1);
	var op6=(agt.indexOf("opera 6")!=-1||agt.indexOf("opera/6")!=-1);
	var op7up=(op&&!op5&&!op6);
	var jv="1.1";
	if (nn6up||op7up){
		jv="1.5";
	}
	else if ((mac&&ie5up)||op6){
		jv="1.4";
	}
	else if (ie5up||nn4||op5){
		jv="1.3";
	}
	else if (ie4){
		jv="1.2";
	}
	return jv;
}

function dcsFunc(func){
	if (typeof(window[func])=="function"){
		window[func]();
	}
}

dcsVar();
dcsMeta();
dcsFunc("dcsAdv");
dcsTag();
// END OF Basic SmartSource Data Collector TAG
	
	
	
	
	
	
/* End - WebTrends  (see also Tacoda_AMS_DDC_Header.js) */
	
	
	
	
	


 
 /* iCrossing tracking code : added 4/4/06 */

var io = new Image();
var pageAction, sale, price, sku, order_code, currency_id, user_defined1, user_defined2, user_defined3, urlA, prefix;
function pixel()
{
	var icstring ="://www.ic-live.com/goat.php?cID=1161&cdid=2681&campID=8";
	var refVar = (document.referrer);
	var locURL = location.href;
	var locHttp = locURL.split(":")[0];

	if (!pageAction) { pageAction = 0; };
	if (!sale) { sale=""; }
	if (!price) { price=""; }
	if (!sku) { sku=""; }
	if (!order_code) { order_code=""; }
	if (!user_defined1) { user_defined1=""; }
	if (!user_defined2) { user_defined2=""; }
if (!user_defined3) { user_defined3=""; }
	if (!currency_id) { currency_id=""; }
	if (locHttp.toLowerCase( ) == "https")  { prefix="https"+icstring+"";}
	if (locHttp.toLowerCase( ) == "http")  { prefix="http"+icstring+"";}

	if (pageAction > 0) {
		urlA = prefix+"&convID="+pageAction+"&sl="+sale+"&convP="+price+"&curID="+currency_id+"&ordID="+escape(order_code)+"&ud1="+escape(user_defined1)+"&ud2="+escape(user_defined2)+"&ud3="+escape(user_defined3)+"&sku="+escape(sku)+"&refVar="+escape(refVar);
	} else {
		urlA = prefix+"&refVar="+escape(refVar);
	}	
	io.src = urlA;
}
pixel();