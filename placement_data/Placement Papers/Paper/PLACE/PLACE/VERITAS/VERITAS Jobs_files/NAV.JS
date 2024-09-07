// bool vars
ns4 = (document.layers) ? true:false;
ie4 = (document.all) ? true:false;
ns6 = (document.getElementById)? true:false;
if (ie4) ns6 = false;

// detect browser
	
function getPageCountry(){
    return 'in';
}

var mainLayers = new Array('productsDiv','solutionsDiv','partnershipsDiv','educationDiv','consultingDiv','supportDiv','aboutusDiv');
var subLayers = new Array('productsSubDiv','solutionsSubDiv','partnershipsSubDiv','educationSubDiv','consultingSubDiv','supportSubDiv','aboutusSubDiv');

getImages();

function init() {
		// getImages preloads tools
//	getImages();
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
function changeImage(layer,imgName,imgObj){
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
		document.layers['transDiv'].clip.height = window.innerHeight - 20;
		// stretch main nav
//		 document.layers['solutionsDiv'].clip.height = 100;
	} else if(ie4) {
		document.all.transDiv.style.width = document.body.clientWidth - 20;
		document.all.transDiv.style.height = document.body.clientHeight - 20;
		// stretch main nav
//		 document.all.productsDiv.style.height = 100;
	} else if(ns6) {
		document.getElementById('transDiv').style.width = window.innerWidth - 20;
		document.getElementById('transDiv').style.height = window.innerHeight - 20;	
		// stretch main nav
//		 document.getElementById('solutionsDiv').style.height = 100;
	}
}

// to be sure to be able to prevent missing any menu mouseout events
function squishTransDiv() {
	if(ns4) {
		document.layers['transDiv'].clip.width = 0;
		document.layers['transDiv'].clip.height = 0;
		// squish main nav
//		 document.layers['solutionsDiv'].clip.height = 30;
	} 
	else if(ie4) {
		document.all.transDiv.style.width = 0;
		document.all.transDiv.style.height = 0;
		// squish main nav
//		 document.all.productsDiv.style.height = 30;
	}
	else if(ns6) {
		document.getElementById('transDiv').style.width = 0;
		document.getElementById('transDiv').style.height = 0;
		// squish main nav
//		 document.getElementById('solutionsDiv').style.height = 0;
	}
}

// preload images
function getImages() {
	var mainImages = new Array('nav_products','nav_solutions','nav_partnerships','nav_education','nav_consulting','nav_support','nav_aboutus')
	// var menuImages = new Array(//'sol_oracle','sol_ha','sol_dr','sol_san','sol_desktop',
		//			'pro_backup','pro_volandfile','pro_clusterrep','pro_san','pro_apps','pro_endoflife',
		//			'sup_device_sup_list','sup_knowledge_base','sup_listserver',
		//			'par_channel','par_strategic','par_schulungs',
		//			'ser_training','ser_consulting','abo_contactus',
		//			'abo_customer','abo_veritas','abo_vox','abo_produkt');
	for (var i=0; i<mainImages.length; i++) {
		eval("preload('"+mainImages[i]+"_on','/in/images/nav/"+mainImages[i]+"_on.gif')");
		eval("preload('"+mainImages[i]+"_off','/in/images/nav/"+mainImages[i]+"_off.gif')");
	}
}

// begin resize code
if (ns4) {
	origWidth = innerWidth;
	origHeight = innerHeight;
}
function dealWithResize() {
alert()
	if (innerWidth != origWidth || innerHeight != origHeight) {
		top.location.reload();
	}
	else if(ie4) {
		stretchTransDiv();
	}
}

function curl(fileName)
{
//	alert();
	var globalPath = "/downloads/";
	str = "<a href='" + globalPath + fileName + "' class='link'>" + fileName + "</a>";
	return(str);
}

function imagePath(fileName, path)
{
	var globalPath = "/images/";
	str = "<img width='130' height='157' src='" + globalPath + path + "/" + fileName + "'>";
	return(str);
}

function validateList(item) {
	var arr = item.split(" ");
	var count = 0;
	for(i=0;i<arr.length;i++){
		if(arr[i] != ""){
			count++
		}
	}
	if(count != 0){
		document.write("<span class='link'><li type='square'><span class='bodytext'>" + item + "</span></li></span>")
	}
}

	// parse out special symbols' hex values
function stringParseSup(str){
	var rExp_sup = /\&lt\;sup\&gt\;TM\&lt\;\/sup\&gt\;/gi;
	var rExp_tm = /\&amp\;\#8482\;/gi;
	var rExp_rest = /\&amp\;\#174\;/gi;
	var rExp_copy = /\&amp\;\#169\;/gi;
	str = str.replace(rExp_sup, '');
	str = str.replace(rExp_tm, '');
	str = str.replace(rExp_rest, '');
	str = str.replace(rExp_copy, '');
	return str;
}

	// slice strings longer than 30 characters, append "..."
function stringParseLength(str, limit){
	str = str.slice(0, limit);
	if(str.length > 29)
		str += "...";
	return str;
}
