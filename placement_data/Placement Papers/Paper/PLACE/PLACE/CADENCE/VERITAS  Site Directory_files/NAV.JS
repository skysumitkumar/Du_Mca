// bool vars
ns4 = (document.layers) ? true:false;
ie4 = (document.all) ? true:false;
ns6 = (document.getElementById)? true:false;
if (ie4) ns6 = false;

	// collection of layers
var mainLayers = new Array('solutionsDiv','productsDiv','educationDiv','consultingDiv','supportDiv','partnershipsDiv','aboutDiv');
var subLayers = new Array('solutionsSubDiv','productsSubDiv','educationSubDiv','consultingSubDiv','supportSubDiv','partnershipsSubDiv','aboutSubDiv');

getImages();

function init() {
	// getImages preloads tools
	squishTransDiv();
	setCaptures();
}

// capture events
function setCaptures() {
	if(ns4) {
			// reset when transdiv is rolled over
		document.layers['transDiv'].captureEvents(Event.MOUSEOVER);
		document.layers['transDiv'].onmouseover = reset;
	} else if(ie4) {
			// reset when transdiv is rolled over
		document.all.transDiv.onmouseover = reset;
	} else if(ns6) {
		document.getElementById('transDiv').onmouseover = reset;
	}
}

// preload function for images
function preload(imgObj,imgSrc) {
	if (document.images) {
		eval(imgObj+' = new Image()');
		eval(imgObj+'.src = "'+imgSrc+'"');
	}
}

// basic rollover code. takes in the layer name, image name and image object
function changeImage(layer,imgName,imgObj,subName) {
	if (ns4) {
		eval('document.'+layer+'.document.images["'+imgName+'"].src = '+imgObj+'.src');
	} else {
		document.images[imgName].src = eval(imgObj+".src");
	}
}

// simple "show" routine. takes in the div id.
function show(divid) {
	if(ns4)
		document.layers[divid].visibility = "show";
	else if(ie4)
		document.all[divid].style.visibility = "visible";
	else if (ns6)
		document.getElementById(divid).style.visibility = "visible";
}

// simple "hide" routine. takes in the div id.
function hide(divid) {
	if(ns4)
		document.layers[divid].visibility = "hide";
	else if(ie4)
		document.all[divid].style.visibility = "hidden";
	else if (ns6)
		document.getElementById(divid).style.visibility = "hidden";
}


// resets menus then shows appropriate menu
function set(layerName) {
	reset();
	show(layerName);
	stretchTransDiv();
}

// function that hides all 1st and 2nd level menus
function reset() {
	for (var i=0; i<subLayers.length; i++) {
		hide(subLayers[i]);
	}
	squishTransDiv();
}

// to be sure to be able to prevent missing any menu mouseout events
function stretchTransDiv() {
	if(ns4) {
		document.layers['transDiv'].clip.width = window.innerWidth - 20;
		document.layers['transDiv'].clip.height = window.innerHeight - 50;
		// stretch main nav
//		document.layers['solutionsDiv'].clip.height = 100;
	} else if(ie4) {
		document.all.transDiv.style.width = document.body.clientWidth - 20;
		document.all.transDiv.style.height = document.body.clientHeight - 50;
		// stretch main nav
//		document.all.solutionsDiv.style.height = 100;
	} else if(ns6) {
		document.getElementById('transDiv').style.width = window.innerWidth - 20;
		document.getElementById('transDiv').style.height = window.innerHeight - 50;	
		// stretch main nav
//		document.getElementById('solutionsDiv').style.height = 100;
	}
}

// to be sure to be able to prevent missing any menu mouseout events
function squishTransDiv() {
	if(ns4) {
		document.layers['transDiv'].clip.width = 0;
		document.layers['transDiv'].clip.height = 0;
		// squish main nav
//		document.layers['solutionsDiv'].clip.height = 30;
	} 
	else if(ie4) {
		document.all.transDiv.style.width = 0;
		document.all.transDiv.style.height = 0;
		// squish main nav
//		document.all.solutionsDiv.style.height = 30;
	}
	else if(ns6) {
		document.getElementById('transDiv').style.width = 0;
		document.getElementById('transDiv').style.height = 0;
		// squish main nav
//		document.getElementById('solutionsDiv').style.height = 0;
	}
}

// preload images
function getImages() {
	var mainImages = new Array('nav_solutions','nav_products','nav_education','nav_consulting','nav_support','nav_about','nav_partnerships')
	var menuImages = new 
Array('abt_awards','abt_company_info','abt_legal_info','abt_vc_group','abt_vfoundation','nav_products_find','nav_products_listing','nav_products_category','nav_products_regis',
'nav_products_trialsoft','nav_products_discont','sol_featured_solutions','sol_operating_systems','sol_enterprise_app','sol_vertical_markets','sup_vsupport_serv','sup_knowledge_base','sup_product_listing','par_our_partners','par_become_partner','par_partners_listing','edu_instructor_training','edu_elearning','edu_webcasts','edu_downloads','edu_training_loc','edu_del_opt','con_vpro_services');

	for (var i=0; i<menuImages.length; i++) {
		eval("preload('"+menuImages[i]+"_on','/images/nav/"+menuImages[i]+"_on.gif')");
		eval("preload('"+menuImages[i]+"_off','/images/nav/"+menuImages[i]+"_off.gif')");
	}
	for (var i=0; i<mainImages.length; i++) {
		eval("preload('"+mainImages[i]+"_on','/images/nav/"+mainImages[i]+"_on.gif')");
		eval("preload('"+mainImages[i]+"_off','/images/nav/"+mainImages[i]+"_off.gif')");
	}
}

/* utilities */

function curl(fileName)
{
	var globalPath = "/downloads/";
	str = "<a href='" + globalPath + 
		fileName +
	 "' class='link'>" + fileName + "</a>";
	return(str);
}

function imagePathAwards(fileName, path)
{
	var globalPath = "/images/";
	if (fileName.length > 0)
		str = "<img border='0' src='" + globalPath + path + "/" +
			fileName + "' width='134' height='80'>";
	else 
		str = "";
	return(str);
}

function imagePath(fileName, path)
{
	var globalPath = "/images/";
	if (fileName.length > 0)
		str = "<img border='0' src='" + globalPath + path + "/" +
			fileName + "'>";
	else 
		str = "";
	return(str);
}

function imagePathRight(fileName, path)
{
	var globalPath = "/images/";
	if (fileName.length > 0)
		str = "<img align='right' border='0' src='" + globalPath + path + "/" +
			fileName + "'>";
	else 
		str = "";
	return(str);
}
function imagePathReseller(fileName, path, link)
{
	var globalPath = "/images/";


	if (fileName.length > 0)
		str = "<img width='80' height='60' border='0' hspace='3' vspace='0' src='" + globalPath + path + "/" +
			fileName + "'>";
	else 
		str = "";

	if (link.length > 0)
	{
		str = "<a href='" + link + "'>" + str + "</a>";
	}

	return(str);
}


function imagePathSmall(fileName, path)
{
	var globalPath = "/images/";
	if (fileName.length > 0)
		str = "<img width='58' border='0' hspace='3' vspace='0' src='" + globalPath + path + "/" +
			fileName + "'>";
	else 
		str = "";
	return(str);
}

function externalPath(path, title)
{
	str = "<a href=" +  path + " class='linkmodule'>" + title + "</a><span class='link'>&nbsp;&gt;</span>";
	return(str);
}
function urlimagePath(path, title)
{
	str = "<a href=" +  path + " target='_blank'>" + title + "</a>";
	return(str);
}

function downloadPath(fileName, title, path)
{
	var globalPath = "http://eval.veritas.com/downloads/";
	str = "<a href='" + globalPath +  path + "/" + 
		fileName +
	 "' class='linkmodule'>" + title + "</a>";
	return(str);
}

function downloadPathForTrialSoftware(fileName, title, path,protocol)
{	var globalPath;

	if(protocol == 'http')
	{		   
		globalPath = "http://eval.veritas.com/downloads/";
	}	
	else		
	{	
		globalPath = "ftp://eval.veritas.com/downloads/";
	}	
	str = "<a href='" + globalPath +  path + "/" + fileName + "' class='linkmodule'>" + title + "</a>";	
	
	return(str);
}

function productdownloadPath(fileName, title, path)
{
	var productPath = "http://eval.veritas.com/downloads/";
	str = "<a href='" + productPath +  path + "/" + fileName + "' class='linkmodule'>" + title + "</a>";
	return(str);
}

function validateList(item) {
	var arr = item.split(" ");
	var count = 0;
	for(i=0;i<arr.length;i++){
		if(arr[i] != ""){
			count++;
		}
	}
	if(count != 0){
		document.write("<span class='link'><li type='square'><span class='bodytext'>" + item + "</span></li></span>");
	}
}

function validateList1(item) {

	if(item.length > 0){
		document.write("<span class='link'><li type='square'><span class='bodytext'>" + item + "</span></li></span>");
	}
}

function validateTop(item) {
	if (item.length > 0)
		document.write("<span class='link'><li type='square'>");
}

function validateBottom(item) {
	if (item.length > 0)
		document.write("</span></li></span>");
}

	// parse out special symbols' hex values
function stringReplaceSup(str){
	var rExp_line = /\&amp\;\#8212\;/gi;
	var rExp_sup = /\&lt\;sup\&gt\;TM\&lt\;\/sup\&gt\;/gi;
	var rExp_tm = /\&amp\;\#8482\;/gi;
	var rExp_tm2 = /\&\#8482\;/gi;
	var rExp_rest = /\&amp\;\#174\;/gi;
	var rExp_copy = /\&amp\;\#169\;/gi;
	var rExp_pipe = /\/\;/gi;
	var rExp_italics_open = /\&lt\;I\&gt\;/gi;
	var rExp_italics_close = /\&lt\;\/I\&gt\;/gi;
	var rExp_quote = /\&quot\;/gi;
	var rExp_open = /\&lt\;/gi;
	var rExp_close = /\&gt\;/gi;
	var rExp_br = /\&lt\;BR\&gt\;/gi;
	str = str.replace(rExp_line, '&#8212;');
	str = str.replace(rExp_sup, '');
	str = str.replace(rExp_tm, '&#8482;');
	str = str.replace(rExp_tm2, '&#8482;');
	str = str.replace(rExp_rest, '&#174;');
	str = str.replace(rExp_copy, '&#169;');
	str = str.replace(rExp_pipe, '&#174;');
	str = str.replace(rExp_italics_open, '<i>');
	str = str.replace(rExp_italics_close, '</i>');
	str = str.replace(rExp_quote, '`');
	str = str.replace(rExp_open, '<');
	str = str.replace(rExp_close, '>');
	str = str.replace(rExp_br, '<br>');
	return str;
}

function stringParseSup(str){
	var rExp_sup = /\&lt\;sup\&gt\;TM\&lt\;\/sup\&gt\;/gi;
	var rExp_tm = /\&amp\;\#8482\;/gi;
	var rExp_br = /\&lt\;BR\&gt\;/gi;
	var rExp_tm2 = /\&\#8482\;/gi;
	var rExp_rest = /\&amp\;\#174\;/gi;
	var rExp_copy = /\&amp\;\#169\;/gi;
	var rExp_italics_open = /\&lt\;I\&gt\;/gi;
	var rExp_italics_close = /\&lt\;\/I\&gt\;/gi;
	var rExp_time = /\&\#8211\;/gi;
	str = str.replace(rExp_sup, '');
	str = str.replace(rExp_tm, '');
	str = str.replace(rExp_br, '<br>');
	str = str.replace(rExp_tm2, '');
	str = str.replace(rExp_rest, '');
	str = str.replace(rExp_copy, '');
	str = str.replace(rExp_copy, '');
	str = str.replace(rExp_italics_open, '');
	str = str.replace(rExp_italics_close, '');
	str = str.replace('<I>', '');
	str = str.replace('</I>', '');
	str = str.replace('<i>', '');
	str = str.replace('</i>', '');
	str = str.replace(rExp_time, '');
	return str;
}

	// slice strings longer than 30 characters, append "..."
function stringParseLength(str, limit){
	str = str.slice(0, limit);
	if(str.length > 29)
		str += "...";
	return str;
}

function stringParseLengthWithCompleteWords(str, limit){


	str = str.replace("\"",'\'');

	var originalString = str;
	var lastIndexOfTruncatedString;	

	originalStringArr = str.match(/(\w+)/g)

	truncatedString =  originalString.slice(0, limit);
	truncatedStringArr = truncatedString.match(/(\w+)/g);
	
	lastIndexOfTruncatedString = (truncatedStringArr.length -1);
	
		if(truncatedStringArr[lastIndexOfTruncatedString].length < originalStringArr[lastIndexOfTruncatedString].length)
		{
				truncatedString = originalString.slice(0, limit - truncatedStringArr[lastIndexOfTruncatedString].length);
		}else
		{
			truncatedString = originalString.slice(0, limit);		
		}

	if(truncatedString.length > 29)
		truncatedString += "...";
	return truncatedString;
}

function stringParseLengthBuy(str, limit){
	str = str.slice(0, limit);
	return str;
}
function stringParseLengthDate(str, limit){
	str = str.slice(0, limit);
	if(str.length > 10)
		str += "";
	return str;
}

function stringParseLengthModule(str, limit){
	str = str.slice(0, limit);
	if(str.length > 16)
		str += "...";
	return str;
}

function stringParseLengthModule2(str, limit){
	str = str.slice(0, limit);
	if(str.length > 10)
		str += "..";
	return str;
}

function is(test, backup){
	if(!test) return backup;
	else return test;
}

function isNull(test, backup){
	if(!test) return backup;
	else return test + "<br>";
}

function getTimeStampFormatted(str){
	arr1 = str.split(" ");
	arr2 = arr1[0].split("-");
	month = getEnglishMonth(arr2[1]);
	day = arr2[2];
	year = arr2[0];
	return month + " " + day + ", " + year;
}

function getTimeStampYear(str){
	arr1 = str.split("-");
	year = arr1[0];
	return year;
}

function getEnglishMonth(str){
	var month;
	switch(str){
		case '01': month = "January"; break
		case '02': month = "February"; break
		case '03': month = "March"; break
		case '04': month = "April"; break
		case '05': month = "May"; break
		case '06': month = "June"; break
		case '07': month = "July"; break
		case '08': month = "August"; break
		case '09': month = "September"; break
		case '10': month = "October"; break
		case '11': month = "November"; break
		case '12': month = "December"; break
		default: month = "";
	}
	return month;
}

	var win = null;
	function NewWindow(mypage,myname,w,h,scroll){
		LeftPosition = (screen.width) ? (screen.width-w)/2 : 0;
		TopPosition = (screen.height) ? (screen.height-h)/2 : 0;
		settings = 'height='+h+',width='+w+',top='+TopPosition+',left='+LeftPosition+',scrollbars='+scroll+',resizable=true'
		win = window.open(mypage,myname,settings)
	}

function doDateFormat(startdate,enddate){

	if (startdate == enddate) 
	 var str = startdate;

	if (startdate != enddate) 
	 var str = startdate + " - " + enddate;
	return str;

}

