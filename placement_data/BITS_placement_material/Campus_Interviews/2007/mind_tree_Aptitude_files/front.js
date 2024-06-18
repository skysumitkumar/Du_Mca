if(undefined==itxtInProg){
var itxtInProg=1,itxtIas='f6dd5b4135424d18914f7d191f344c0b';
function gIT(o){if(o.nodeType==3)return o.nodeValue;if(o.tagName&&('script'==o.tagName.toLowerCase()))return '';var t='';var cn=o.childNodes;for(var i=0;i<cn.length;i++)t+=gIT(cn[i]);return t;}
function itxtbtl(){if(document.body.innerText!=undefined){return itxtsW(document.body.innerText).length};return gIT(document.body).length;}
function itxtsW(x){var r=x;var v=/\s/g;if(x.search(v)!=-1){r=x.replace(v, '');}return r;}
function itxtDSB(u){try{if(navigator.appVersion.indexOf('MSIE')>=0 && ('uninitialized'==document.readyState||'interactive'==document.readyState||'loading'==document.readyState)){document.write('<s'+'cript language="javascript" src="'+u+'"></s'+'cript>');}else{var spt=document.createElement("script");spt.type="text/javascript";spt.src=u;document.getElementsByTagName("body")[0].appendChild(spt);}}catch(e){}}
function itxtHurraCookie(u){try{if(navigator.appVersion.indexOf('MSIE')>=0 && ('uninitialized'==document.readyState||'interactive'==document.readyState||'loading'==document.readyState)){document.write('<img src="http://ads.hurra.de/cgi-local/view.cgi?sid=f6dd5b4135424d18914f7d191f344c0b" style="display:none" />');}else{var hurraImg=document.createElement('img');hurraImg.src='http://ads.hurra.de/cgi-local/view.cgi?sid=f6dd5b4135424d18914f7d191f344c0b';document.getElementsByTagName( "body" )[0].appendChild( hurraImg );}}catch(e){}}
var itxturl='http://geekinterview.us.intellitxt.com/v3/door.jsp?ts='+(new Date()).getTime()+'&pagecl='+itxtbtl()+'&ias='+itxtIas+'&ipid=6512&refurl='+document.location.href.replace(/\&/g,'%26').replace(/\'/g, '%27').replace(/\"/g, '%22').replace(/\#(.)*/,'');
itxtDSB(itxturl);
}
