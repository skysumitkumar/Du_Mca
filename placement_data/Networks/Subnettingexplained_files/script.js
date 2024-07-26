
var jcFadeTimer;function jc_showBusyImage(){clearTimeout(jcFadeTimer);jcOpacity('jc_busyDiv',0,100,0);jax.$("jc_busyDiv").innerHTML="";var newImg=document.createElement('img');newImg.setAttribute('src',jc_livesite_busyImg);newImg.setAttribute('id',"jc_busyImg");jax.$("jc_busyDiv").appendChild(newImg);}
function jc_removeBusyImage(){var t=jax.$("jc_busyImg");if(t!=null){t.parentNode.removeChild(t);}}
function jcRandomString(){var chars="0123456789ABCDEFGHIJKLMNOPQRSTUVWXTZabcdefghiklmnopqrstuvwxyz";var string_length=32;var randomstring='';for(var i=0;i<string_length;i++){var rnum=Math.floor(Math.random()*chars.length);randomstring+=chars.substring(rnum,rnum+1);}
return randomstring;}
function addComments(){jc_showBusyImage();jax.call('jomcomment','jcxAddComment',jax.getFormValues('jc_commentForm'));if(jax.$("jc_name")){if(jax.$("jc_name").value){jc_createCookie('jc_name',jax.$("jc_name").value,14);}}
if(jax.$("jc_email")){if(jax.$("jc_email").value){jc_createCookie('jc_email',jax.$("jc_email").value,14);}}
if(jax.$("jc_website")){if(jax.$("jc_website").value){jc_createCookie('jc_website',jax.$("jc_website").value,14);}}
var rememberMe=true;if(jax.$("jc_rememberInfo"))rememberMe=jax.$("jc_rememberInfo").checked;if(!rememberMe){jc_eraseCookie("jc_name");jc_eraseCookie("jc_email");jc_eraseCookie("jc_website");}
return;}
function jc_update(){if(jax.$("jc_contentid")!=null&jax.$("jc_option")!=null&jax.$("jc_numComment")){jax.call('jomcomment','jcxUpdateComment',jax.$("jc_contentid").value,jax.$("jc_option").value,jax.$("jc_numComment").innerHTML);}}
function jc_unpublishPost(postId,opt,id){jax.call('jomcomment','jcxUnpublish',postId,opt);if(jax.$(postId)!="undefined"){jax.$(postId).style.border="medium solid #FF0000";jcOpacity(postId,100,50,200);}}
function jc_commentAreaToggle(){if(typeof(jc_commentArea)!="undefined"){jc_commentArea.toggle();var img=jax.$("toggleAreaImg");if(img!=null){var imgSrc=img.src;if(jc_commentArea.el.offsetHeight>0){imgSrc=imgSrc.replace("min.gif","max.gif");}else{imgSrc=imgSrc.replace("max.gif","min.gif");}
img.src=imgSrc;}}}
function jc_commentFormToggle(){if(typeof(jc_commentFormArea)!="undefined"){jc_commentFormArea.toggle();var img=jax.$("toggleFormImg");if(img!=null){var imgSrc=img.src;if(jc_commentFormArea.el.offsetHeight>0){imgSrc=imgSrc.replace("min.gif","max.gif");}else{imgSrc=imgSrc.replace("max.gif","min.gif");}
img.src=imgSrc;}}}
function jc_disableForm(){if(jax.$("jc_name"))jax.$("jc_name").disabled=true;if(jax.$("jc_email"))jax.$("jc_email").disabled=true;if(jax.$("jc_website"))jax.$("jc_website").disabled=true;if(jax.$("jc_title"))jax.$("jc_title").disabled=true;if(jax.$("jc_comment"))jax.$("jc_comment").disabled=true;if(jax.$("jc_password"))jax.$("jc_password").disabled=true;if(jax.$("jc_submit"))jax.$("jc_submit").disabled=true;}
function jc_enableForm(){if(jax.$("jc_name"))jax.$("jc_name").disabled=false;if(jax.$("jc_email"))jax.$("jc_email").disabled=false;if(jax.$("jc_website"))jax.$("jc_website").disabled=false;if(jax.$("jc_title"))jax.$("jc_title").disabled=false;if(jax.$("jc_comment"))jax.$("jc_comment").disabled=false;if(jax.$("jc_password"))jax.$("jc_password").disabled=false;if(jax.$("jc_submit"))jax.$("jc_submit").disabled=false;}
function jc_insertNewEntry(entry,id){var comment_div=jax.$("jc_commentsDiv");var newCmt=document.createElement('div');newCmt.innerHTML=entry;newCmt.setAttribute("id",id);if(navigator.userAgent.indexOf('Safari')==-1)
jcChangeStyleOpac(0,newCmt.style);if(jc_orderBy=="0"){comment_div.insertBefore(newCmt,comment_div.firstChild);}else{if(navigator.userAgent.indexOf('Safari')!=-1)
comment_div.innerHTML+=newCmt.innerHTML;else
comment_div.appendChild(newCmt);}
if(navigator.userAgent.indexOf('Safari')==-1)
jcOpacity(id,0,100,500);}
function jc_loadUserInfo(){if(document.getElementById("jc_name")){if(jc_username&&!(jc_username.match(/^s+$/)||jc_username=="")){if(document.getElementById("jc_name")){document.getElementById("jc_name").value=jc_username;}}else{document.getElementById("jc_name").value=jc_readCookie('jc_name');}}
if(document.getElementById("jc_email")){if(jc_email&&!(jc_email.match(/^s+$/)||jc_email=="")){jc_email=jc_email.replace(/\+/,"@");if(document.getElementById("jc_email")){document.getElementById("jc_email").value=jc_email;}}else{document.getElementById("jc_email").value=jc_readCookie('jc_email');}}
var sid=jcRandomString();if(document.getElementById("jc_website")){document.getElementById("jc_website").value=jc_readCookie('jc_website');}
if(document.getElementById("jc_sid")){document.getElementById("jc_sid").value=sid;if(document.getElementById("jc_captchaImg")){document.getElementById("jc_captchaImg").src=jax_live_site+"?option=com_jomcomment&no_html=1&jc_task=img&jc_sid="+sid.toString();}}}
function jc_fadeMessage(){clearTimeout(jcFadeTimer);jcFadeTimer=setTimeout("jcOpacity('jc_busyDiv', 100, 0,1000)",3000);}
function jcOpacity(id,opacStart,opacEnd,millisec){var speed=Math.round(millisec/100);var timer=0;if(opacStart>opacEnd){for(i=opacStart;i>=opacEnd;i--){setTimeout("jcChangeOpac("+i+",'"+id+"')",(timer*speed));timer++;}}else if(opacStart<opacEnd){for(i=opacStart;i<=opacEnd;i++){setTimeout("jcChangeOpac("+i+",'"+id+"')",(timer*speed));timer++;}}}
function jcChangeOpac(opacity,id){var object=jax.$(id).style;object.opacity=(opacity/100);object.MozOpacity=(opacity/100);object.KhtmlOpacity=(opacity/100);object.filter="alpha(opacity="+opacity+")";}
function jcChangeStyleOpac(opacity,object){{object.opacity=(opacity/100);object.MozOpacity=(opacity/100);object.KhtmlOpacity=(opacity/100);object.filter="alpha(opacity="+opacity+")";}}
function jc_createCookie(name,value,days){var expires="";if(days){var date=new Date();date.setTime(date.getTime()+(days*24*60*60*1000));var expires="; expires="+date.toGMTString();}
document.cookie=name+"="+value+expires+"; path=/";}
function jc_readCookie(name){var ca=document.cookie.split(';');var nameEQ=name+"=";for(var i=0;i<ca.length;i++){var c=ca[i];while(c.charAt(0)==' ')c=c.substring(1,c.length);if(c.indexOf(nameEQ)==0)return c.substring(nameEQ.length,c.length);}
return"";}
function jc_eraseCookie(name){jc_createCookie(name,"",-1);}
function jc_init(){if((typeof jc_update_period!="undefined")&&jc_autoUpdate){setTimeout("jc_update()",jc_update_period);}}
function jc_addText(text,textarea){var comment=jax.$(textarea).value;comment=comment+text;jax.$(textarea).value=comment;}
function jc_encloseText(text1,text2,textarea)
{if(typeof(textarea.caretPos)!="undefined"&&textarea.createTextRange)
{var caretPos=textarea.caretPos,temp_length=caretPos.text.length;caretPos.text=caretPos.text.charAt(caretPos.text.length-1)==' '?text1+caretPos.text+text2+' ':text1+caretPos.text+text2;if(temp_length==0)
{caretPos.moveStart("character",-text2.length);caretPos.moveEnd("character",-text2.length);caretPos.select();}
else
textarea.focus(caretPos);}
else if(typeof(textarea.selectionStart)!="undefined")
{var begin=textarea.value.substr(0,textarea.selectionStart);var selection=textarea.value.substr(textarea.selectionStart,textarea.selectionEnd-textarea.selectionStart);var end=textarea.value.substr(textarea.selectionEnd);var newCursorPos=textarea.selectionStart;var scrollPos=textarea.scrollTop;textarea.value=begin+text1+selection+text2+end;if(textarea.setSelectionRange)
{if(selection.length==0)
textarea.setSelectionRange(newCursorPos+text1.length,newCursorPos+text1.length);else
textarea.setSelectionRange(newCursorPos,newCursorPos+text1.length+selection.length+text2.length);textarea.focus();}
textarea.scrollTop=scrollPos;}
else
{textarea.value+=text1+text2;textarea.focus(textarea.value.length-1);}}
function slideContent(divName,direction)
{var obj=document.getElementById(divName);height=obj.clientHeight;if(height==0)height=obj.offsetHeight;height=height+direction;rerunFunction=true;if(height<=1){height=1;rerunFunction=false;}
obj.style.height=height+'px';if(rerunFunction){setTimeout('slideContent(\''+divName+'\','+direction+')',100);}else{if(height<=1){obj.style.display='none';}else{}}}
function jc_toggleDiv(divName){var e=document.getElementById(divName);if(!e.style.display||e.style.display=='none'){e.style.display='block';e.style.visibility='visible';}else{e.style.display='none';e.style.visibility='hidden';}}
setTimeout("jc_init()",20000);