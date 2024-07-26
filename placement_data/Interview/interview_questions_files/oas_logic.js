function getObj(code,title) {

	this.code = code;
	this.title = title;

}

var x = new Array();

	x[x.length] = new getObj("localhost","businessweek.com");
	x[x.length] = new getObj("bwads","bwads.businessweek.com");
	x[x.length] = new getObj("bw1ads","bw1ads.businessweek.com");
	x[x.length] = new getObj("bw2ads","bw2ads.businessweek.com");
	x[x.length] = new getObj("bw3ads","bw3ads.businessweek.com");

var BW_host = location.hostname.toLowerCase();

for(var i = 0; i < x.length; i++) {

	matchCode = x[i].code.toLowerCase();
	
	siteTitle = x[i].title;
	
	if (BW_host.match(matchCode)) {
	
		var BW_site = siteTitle;
	}

}

function getChan(base,conversion) {

	this.base = base;
	this.conversion = conversion;

}

var y = new Array();

	y[y.length] = new getChan("chan=tc","chan=tech");
	y[y.length] = new getChan("chan=eb","chan=tech");
	y[y.length] = new getChan("chan=pi","chan=investing");
	y[y.length] = new getChan("chan=bs","chan=bschools");
	y[y.length] = new getChan("chan=sb","chan=smallbiz");
	y[y.length] = new getChan("chan=bf","chan=bw50");
	y[y.length] = new getChan("chan=ca","chan=careers");
	y[y.length] = new getChan("chan=db","chan=topnews");
	y[y.length] = new getChan("chan=gb","chan=globalbiz");
	y[y.length] = new getChan("chan=hp","chan=homepage");
	y[y.length] = new getChan("chan=vv","chan=videoviews");
	y[y.length] = new getChan("chan=di","chan=innovation");
	

var BW_convertible = location.search;
var BW_convert = BW_convertible.toLowerCase();
var BW_exclude = "&RM_Exclude=Airlines,Automobiles";

for(var i = 0; i < y.length; i++) {

	matchBase = y[i].base.toLowerCase();
	
	makeConversion = y[i].conversion.toLowerCase() + BW_exclude;
	
	if (BW_convert.match(matchBase)) {
	
		var BW_replace = BW_convert.replace(matchBase,makeConversion);
		
		if (BW_replace.match(makeConversion)) {
	
	 		var BW_trim = BW_replace;
		
		}
		
	}
	
}

//configuration

var BW_site = (!BW_site)?"businessweek.com":(BW_site);

var BW_page = (!BW_page)?"/":(BW_page);

var BW_exclude = (!BW_exclude)?"":(BW_exclude);

var OAS_url = 'http://oascentral.businessweek.com/RealMedia/ads/';

var OAS_sitepage = (BW_site + BW_page);

var OAS_listpos = (!OAS_listpos)?"JXonly":(OAS_listpos);

var BW_campaigns = "?" + location.search.substring(1) + BW_exclude;

var OAS_query = (!BW_trim)?(BW_campaigns):(BW_trim);

var BW_query = OAS_query.toLowerCase();

var OAS_target = '_blank';

//end of configuration

var OAS_version = 10;

var OAS_rn = new String (Math.random()); OAS_rns = OAS_rn.substring (2, 11);

function OAS_NORMAL(position) {

  document.write('<a href="' + OAS_url + 'click_nx.ads/' + OAS_sitepage + '/1' + OAS_rns + '@' + OAS_listpos + '!' + position + OAS_query + '" target=' + OAS_target + '>');

  document.write('<img src="' + OAS_url + 'adstream_nx.ads/' + OAS_sitepage + '/1' + OAS_rns + '@' + OAS_listpos + '!' + position + OAS_query + '" border=0><\/a>');

}

var OAS_version = 11;

if ((navigator.userAgent.indexOf('Mozilla/3') != -1) || (navigator.userAgent.indexOf('Mozilla/4.0 WebTV') != -1)) {
	
	OAS_version = 10;
	
	}

if (OAS_version >= 11) {

	var v11 = '<scr' + 'ipt language=JavaScript1.1 type=text/javascript src="' + OAS_url + 'adstream_mjx.ads/' + OAS_sitepage + '/1' + OAS_rns + '@' + OAS_listpos + OAS_query + '"><\/script>';

	//document.write(v11);
	
	}


// temporarily added
var lastPos;

function OAS_AD(position) {

		// temporarily added
		lastPos = position;
	
		if (BW_query.match("debug") && OAS_version >= 11) {
	
			document.write('<br \/><div style="padding:3px;font-family:trebuchet ms, arial, helvetica;font-size:10px;color:\#bbb;">' + position + ' ad (all media)<\/div>');
			
		 	}
  		
  		if (BW_query.match("debug") && OAS_version == 10) {
	
			var v10 = OAS_url + "adstream_nx.ads/" + OAS_sitepage + "/1" + OAS_rns + "@" + OAS_listpos + "!" + position + OAS_query;
    	
    		document.write('<div style="padding:3px;font-family:trebuchet ms, arial, helvetica;font-size:10px;color:\#bbb;">');
    		
    		document.write('<a href="' + v10 + '" target=_blank><br \/><br \/>' + position + ' (standard media)<\/a><\/div>');

  			}

		if (BW_query.indexOf("noads") == -1 && OAS_version >= 11) {
  
  			// temporarily removed
    		//OAS_RICH(position); 
    		
    		document.write('<scr' + 'ipt language="JavaScript" type="text/javascript" src="http://oascentral.businessweek.com/RealMedia/ads/adstream_jx.ads/' + OAS_sitepage + '/1' + OAS_rns + '@' + position + OAS_query + '"><\/scr' + 'ipt>');
	
	
    	
    		}

  		if (BW_query.indexOf("noads") == -1 && OAS_version == 10) {

    		OAS_NORMAL(position);
    
   	 		}

	}
	
//debug

var BW_query = OAS_query.toLowerCase();

var adcheck = (BW_query.match("debug")?true:false);
	
var BW_listpos = OAS_listpos.replace(/,/gi,",<br\/>");

function debug() {

	document.write('<div style="background:#fff;padding:10px;border:1px solid #ccc;font-family:trebuchet ms, arial, helvetica;font-size:10px;font-weight:bold;text-align:left;">');
	
	document.write('' + printPos + '<br \/><br \/>');
	
	document.write('OAS_sitepage= ' + OAS_sitepage + '<br \/>');
	
	document.write('OAS_query= ' + OAS_query + '<br \/>');
	
	document.write('OAS_rn= ' + OAS_rn + '<br \/>');
	
	document.write('OAS_version= ' + OAS_version + '<br \/><br \/>');
	
	if (OAS_version == 11) {
	
		document.write('<a href="' + OAS_url + 'adstream_jx.ads/' + OAS_sitepage + '/1' + OAS_rns + '@' + lastPos + OAS_query + '" target="_blank">' + BW_page + '/1' + OAS_rns + '@' + lastPos + OAS_query + '<\/a><br \/><br \/>');
		
		}
	
	if (printPos.indexOf("Top = pos10(728,468),") != -1) {
	
		document.write('OAS_listpos=<br \/> ' + BW_listpos);

		}
	
	document.write('<\/div><br \/>');
	
	}

