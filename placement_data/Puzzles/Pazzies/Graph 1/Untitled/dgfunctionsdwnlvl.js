var strPostUIParams="height=520,width=740,resizable=1,scrollbars=1,status=1,directories=0,location=0,toolbar=0,menubar=0";var strProfileViewParams="height=360,width=450,resizable=1,scrollbars=1,status=1,directories=0,location=0,toolbar=0,menubar=0";if(document.images){aImages=new Array(strResourceRoot+"gif/1ptrans.gif",strResourceRoot+"gif/plus.gif",strResourceRoot+"gif/minus.gif");aImageCache=new Array();for(var nCounter in aImages){aImageCache[nCounter]=new Image();aImageCache[nCounter].src=aImages[nCounter];}}function fnGetQueryString(){var strQueryString="";if(fSearch){if(arguments.length>0){strQueryString="query="+escape(strSearch);}else{strQueryString="&query="+escape(strSearch);}}if(strCategory!=null){strQueryString+="&cat="+strCategory;}if(strLanguage!=null){strQueryString+="&lang="+strLanguage;}if(strCountryRegion!=null){strQueryString+="&cr="+strCountryRegion;}if(strGuid!=null){strQueryString+="&guid="+strGuid;}if((strSiteLocale!=null)&&(strSiteLocale!="")){strQueryString+="&sloc="+strSiteLocale;}return strQueryString;}function fnSetDateSort(nDirection){nSortOrder=nDirection;fnGoToPage(false,1);}function fnGoToPage(fThreadView){var strNewPage="";var nNewPage;var strTempPage="";if(arguments.length>1){strNewPage+=arguments[1];}else{strNewPage=document.frmReader.elements[strPageControl].value;}var nCharCode=strNewPage.charCodeAt(0);switch(nCharCode){case 65296:case 65297:case 65298:case 65299:case 65300:case 65301:case 65302:case 65303:case 65304:case 65305:for(var i=0;i<strNewPage.length;i++){switch(strNewPage.charCodeAt(i)){case 65296:strTempPage+="0";break;case 65297:strTempPage+="1";break;case 65298:strTempPage+="2";break;case 65299:strTempPage+="3";break;case 65300:strTempPage+="4";break;case 65301:strTempPage+="5";break;case 65302:strTempPage+="6";break;case 65303:strTempPage+="7";break;case 65304:strTempPage+="8";break;case 65305:strTempPage+="9";break;default:strTempPage="";fError=true;break;}}break;default:strTempPage=strNewPage;break;}nNewPage=parseInt(strTempPage,10);var strQueryString=fnGetQueryString();if(strDiscussionGroupID!=null){strQueryString+="&dg="+strDiscussionGroupID;}if(strFilter!=null){strQueryString+="&fltr="+strFilter;}if(fThreadView){strQueryString+="&tid="+strThreadID;strQueryString+="&p=1";}if(fExpandPage){strQueryString+="&exp=1";}nNewPage=parseInt(strNewPage);if((nNewPage>0)&&(nNewPage <= nMaxPage)){location.href=strCommReader+"?pg="+nNewPage+strQueryString;}else{alert(strInvalidPage);}}function fnShowFilter(strFilter){var strQueryString=fnGetQueryString();if(strDiscussionGroupID!=null){if(strDiscussionGroupID!=""){strQueryString+="&dg="+strDiscussionGroupID;}}if(fExpandPage){strQueryString+="&exp=1";}if(strFilter==0){location.href=strCommReader+"?"+strQueryString;}else{location.href=strCommReader+"?fltr=,"+strFilter+","+strQueryString;}}function fnNewPost(nType){var strQueryString=fnGetQueryString("nosearch");if(strDiscussionGroupID!=null){strQueryString+="&dg="+strDiscussionGroupID;}var strCurBaseURL=fnGetCurBaseURL();if(strCurBaseURL!=""){strQueryString+="&base="+strCurBaseURL;}if(strBrandBackColor!=""){strQueryString+="&bclr="+strBrandBackColor;}if(strBrandForeColor!=""){strQueryString+="&fclr="+strBrandForeColor;}if(strSiteXML!=""){strQueryString+="&sxml="+strSiteXML;}if(strSettingXML!=""){strQueryString+="&stgxml="+strSettingXML;}if(strDGLocale!=""){strQueryString+="&sdgloc="+strDGLocale;}if(fWizard){strQueryString+="&fwizard=1";strQueryString+="&sub="+strSearch;if(strWizardDGList!=""){fnSetCookie("WN3Wiz",strWizardDGList+";","","/");}else{if(fnGetCookie("WN3Wiz")!=""){fnSetCookie("WN3Wiz","","","/");}}if(!fQuestionWizard){strQueryString+="&fsugg=1";}}if(strPassportHref!=""){if(fControlIsAuth==true||fRedirectIsAuth==true){fnSetCookie("WN3R","","","/");if(fWizard){location.href=strCommPostUI+"?"+strQueryString+"&pt="+nType;}else{window.open(strCommPostUI+"?"+strQueryString+"&pt="+nType,"_blank",strPostUIParams);}}else{if(fnTestCookieAccept()==false){location.href=strResourceRoot+"aspx/err.aspx?sloc="+strSiteLocale+"&stgxml="+strSettingXML+"&id=2";return;}var NotInLoop=fnGetCookie("WN3R");if(NotInLoop==""){strQueryString=fnSplitQueryString(strQueryString);var strCookie;if(fWizard){strCookie="baseurl="+strCommPostUI+";"+strQueryString+"pt="+nType+";";}else{strCookie=fnGetCurrentURLForPassport();}fnSetCookie("WN3",strCookie,"","/");var strDoLater="4fnNewPost(\""+nType+"\",\"callback\");";fnSetCookie("WN3R",strDoLater,"","/");location.href=strPassportHref;}else{fnSetCookie("WN3R","","","/");}}}else{alert("Unable to call Passport for user authorization");}}function fnNewReply(){var strQueryString=fnGetQueryString();if(strDiscussionGroupID!=""){if(strQueryString!=""){strQueryString+="&";}strQueryString+="dg="+strDiscussionGroupID;}var strCurBaseURL=fnGetCurBaseURL();if(strCurBaseURL!=""){strQueryString+="&base="+strCurBaseURL;}if(strBrandBackColor!=""){strQueryString+="&bclr="+strBrandBackColor;}if(strBrandForeColor!=""){strQueryString+="&fclr="+strBrandForeColor;}if(strSiteXML!=""){strQueryString+="&sxml="+strSiteXML;}if(strSettingXML!=""){strQueryString+="&stgxml="+strSettingXML;}if(strDGLocale!=""){strQueryString+="&sdgloc="+strDGLocale;}if(arguments.length>0){strMessageID=arguments[0];}if(fWizard){strQueryString+="&fwizard=1";if(!fQuestionWizard){strQueryString+="&fsugg=1";}}if(strPassportHref!=""){if(fControlIsAuth==true||fRedirectIsAuth==true){fnSetCookie("WN3R","","","/");if(fWizard){location.href=strCommPostUI+"?mid="+strMessageID+strQueryString;}else{window.open(strCommPostUI+"?mid="+strMessageID+strQueryString,"_blank",strPostUIParams);}}else{if(fnTestCookieAccept()==false){location.href=strResourceRoot+"aspx/err.aspx?sloc="+strSiteLocale+"&stgxml="+strSettingXML+"&id=2";return;}var NotInLoop=fnGetCookie("WN3R");if(NotInLoop==""){strQueryString=fnSplitQueryString(strQueryString);var strCookie;if(fWizard){strCookie="baseurl="+strCommPostUI+";"+strQueryString+"mid="+strMessageID+";";}else{strCookie=fnGetCurrentURLForPassport(strMessageID);}fnSetCookie("WN3",strCookie,"","/");if(arguments.length>0){fnSetCookie("WN3R","5fnNewReply('"+strMessageID+"')","","/");}else {fnSetCookie("WN3R","5fnNewReply()","","/");}location.href=strPassportHref;}else{fnSetCookie("WN3R","","","/");}}}else{alert("Unable to call Passport for user authorization");}}function fnPrint(){var strQueryString=fnGetQueryString();if(strSiteXML!=""){strQueryString+="&sxml="+strSiteXML;}if(arguments.length>0){strMessageID=arguments[0];}window.open(strCommMsgPrint+"?dg="+strDiscussionGroupID+"&mid="+strMessageID+strQueryString,"_blank");}function fnSearchAuthor(strAuthor,strEmail){var strQueryString="";var dg="";var cat="";var guid="";var lang="";var cr="";var pos;var argname;var value;var query=location.search.substring(1);var pairs=query.split("&");if(query.indexOf("dg=")==-1){if(typeof(strDiscussionGroupID)!="undefined"){strQueryString+="&dg="+strDiscussionGroupID;}}for(var i=0; i<pairs.length; i++){pos=pairs[i].indexOf("=");if(pos==-1){continue;}argname=pairs[i].substring(0,pos);value=pairs[i].substring(pos+1);if(argname=="dg"){strQueryString+="&dg="+unescape(value);}else if(argname=="guid"){strQueryString+="&guid="+unescape(value);}else if(argname=="lang"){strQueryString+="&lang="+unescape(value);}else if(argname=="cr"){strQueryString+="&cr="+unescape(value);}else if(argname=="sloc"){strQueryString+="&sloc="+unescape(value);}}if(fExpandPage){strQueryString+="&exp=1";}location.href=strCommReader+"?author="+strAuthor+"&email="+strEmail+strQueryString;}function fnPostRating(nPostRating,strMID,strThreadID,strDGID){if(strPassportHref!=""){if(fControlIsAuth==true||fRedirectIsAuth==true){fnSetCookie("WN3R","","","/");var strQueryString=fnGetQueryString();strQueryString+="&dg="+strDGID;strQueryString+="&tid="+strThreadID;strQueryString+="&mid="+strMID;strQueryString+="&rmid="+strMID;strQueryString+="&helpful="+nPostRating;strQueryString+="&p=1";strQueryString+="&stgxml="+strSettingXML;location.href=strCommPostRating+"?"+strQueryString;}else{if(fnTestCookieAccept()==false){location.href=strResourceRoot+"aspx/err.aspx?sloc="+strSiteLocale+"&stgxml="+strSettingXML+"&id=2";return;}var NotInLoop=fnGetCookie("WN3R");if(NotInLoop==""){var strQueryString=fnGetQueryString();strQueryString+="&dg="+strDGID;strQueryString+="&tid="+strThreadID;strQueryString+="&mid="+strMID;strQueryString+="&rmid="+strMID;strQueryString+="&helpful="+nPostRating;strQueryString+="&p=1";strQueryString+="&stgxml="+strSettingXML;var strCookie="baseurl="+strCommPostRating+"?"+strQueryString+";";fnSetCookie("WN3",strCookie,"","/");location.href=strPassportHref;}else{fnSetCookie("WN3R","","","/");}}}else{alert("Unable to call Passport for user authorization");}}function fnPostRatingAnswer(nPostRatingAnswer,strMID,strThreadID,strDGID){if(strPassportHref!=""){if(fControlIsAuth==true||fRedirectIsAuth==true){fnSetCookie("WN3R","","","/");var strQueryString=fnGetQueryString();strQueryString+="&dg="+strDGID;strQueryString+="&tid="+strThreadID;strQueryString+="&mid="+strMID;strQueryString+="&amid="+strMID;strQueryString+="&answer="+nPostRatingAnswer;strQueryString+="&p=1";strQueryString+="&stgxml="+strSettingXML;location.href=strCommPostRating+"?"+strQueryString;}else{if(fnTestCookieAccept()==false){location.href=strResourceRoot+"aspx/err.aspx?sloc="+strSiteLocale+"&stgxml="+strSettingXML+"&id=2";return;}var NotInLoop=fnGetCookie("WN3R");if(NotInLoop==""){var strQueryString=fnGetQueryString();strQueryString+="&dg="+strDGID;strQueryString+="&tid="+strThreadID;strQueryString+="&mid="+strMID;strQueryString+="&amid="+strMID;strQueryString+="&answer="+nPostRatingAnswer;strQueryString+="&p=1";strQueryString+="&stgxml="+strSettingXML;var strCookie="baseurl="+strCommPostRating+"?"+strQueryString+";";fnSetCookie("WN3",strCookie,"","/");location.href=strPassportHref;}else{fnSetCookie("WN3R","","","/");}}}else{alert("Unable to call Passport for user authorization");}}function fnNotifyThreadView(nNotifyOption){location.href=strNotifyURL+"&subtype="+nNotifyOption;}