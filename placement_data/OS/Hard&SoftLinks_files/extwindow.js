// extwindow.js
//
// (C) Copyright IBM Corporation, 2001                              //
// All rights reserved. Licensed Materials Property of IBM          //
// US Government Users Restricted Rights                            //
// Use, duplication or disclosure restricted by                     //
// GSA ADP Schedule Contract with IBM Corp.                         //

//////////////////////////////////////////////////////////////////////
//  functions for launching other secondary windows
//////////////////////////////////////////////////////////////////////
function customizeInterface(nLevel){
	if (top.isOP5) filename='./info/rzahgcustomize.htm';
	else filename = (nLevel == 0)? './info/rzahgcustomize.htm' : './rzahgcustomize.htm'
	newCustomizeWindow(filename, 375, 600);
}
function changeVersion(nLevel){
	if (top.isOP5) filename='./info/rzahgselectversion.htm';
	else filename = (nLevel == 0)? './info/rzahgselectversion.htm' : './rzahgselectversion.htm'
	newLangVersionWindow(filename, 550, 750);
}
function changeLocalVersion(nLevel){
	if (top.isOP5) filename='./info/rzah8selectversion.htm';
	else filename = (nLevel == 0)? './info/rzah8selectversion.htm' : './rzah8selectversion.htm'
	newLangVersionWindow(filename, 550, 750);
}
function sendFeedback(nLevel){
	if (top.isOP5) filename='./info/rzahgicfeedb.htm';
	else filename = (nLevel == 0)? './info/rzahgicfeedb.htm' : './rzahgicfeedb.htm'
	newFeedbackWindow(filename, 375, 600);
}
function advancedLocalSearch(){
	if (top.isOP5) newSearchWindow('./info/rzahgsearchadv.html', 600, 400);
	else newSearchWindow('./rzahgsearchadv.html', 600, 400);
}
function advancedSearch(){
	if (top.isOP5) newSearchWindow('./info/rzah8searchadv.html', 600, 400);
	else newSearchWindow('./rzah8searchadv.html', 600, 400);
}

//////////////////////////////////////////////////////////////////////
//  support functions for the above 'public' functions
//////////////////////////////////////////////////////////////////////
function newWindow (theURL)
{
	aWindow=window.open(theURL,"_blank",'titlebar=yes,location=yes,toolbar=yes,scrollbars=yes,resizable=yes,width=780,height=450,status=yes');
}

function newChildWindow (theURL, theWidth, theHeight)
{
	if ((theWidth != null)&(theHeight != null)){
		theSize = 'width='+theWidth+',height='+theHeight
		aWindow=window.open(theURL,"childWindow",theSize);
	} else {
		aWindow=window.open(theURL,"childWindow", 'titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=no');
	}	
	if(aWindow != null)	{
        if(aWindow.opener == null) {
            aWindow.opener = self;
        };
    }
}
var aPopupWindow=null;
function popupWindow(theURL, theWidth, theHeight) {
	var bExists=false;
	if (aPopupWindow != null && !(aPopupWindow.closed)) {
		bExists=true;
	}
	nWidth = (theWidth == null)? 500 : theWidth;
	nHeight = (theHeight == null)? 200 : theHeight;
	sAttributes = 'width='+nWidth+',height='+nHeight+',scrollbars=yes,alwaysRaised=yes';
	aPopupWindow=window.open(theURL,"popupWindow",sAttributes);
	if(aPopupWindow != null) {
        if(aPopupWindow.opener == null) {
            aPopupWindow.opener = self;
        }
	}
	aPopupWindow.focus();
	if (bExists){
		nPadW=5;
		nPadH=25; 
		aPopupWindow.resizeTo(nWidth+nPadW, nHeight+nPadH);
	}
}

var aMovieWindow=null;
function movieWindow(theURL, theWidth, theHeight) {
	var bExists=false;
	if (aMovieWindow != null && !(aMovieWindow.closed)) {
		bExists=true;
	}
	nWidth = (theWidth == null)? 350 : theWidth;
	nHeight = (theHeight == null)? 320 : theHeight;
	sAttributes = 'width='+nWidth+',height='+nHeight+',scrollbars=yes,alwaysRaised=yes,resizable';
	aMovieWindow=window.open(theURL,"movieWindow",sAttributes);
	if(aMovieWindow != null) {
        if(aMovieWindow.opener == null) {
            aMovieWindow.opener = self;
        }
	}
	aMovieWindow.focus();
	if (bExists){
		nPadW=5;
		nPadH=25; 
		aMovieWindow.resizeTo(nWidth+nPadW, nHeight+nPadH);
	}
}


var aCustomizeWindow=null;
function newCustomizeWindow (theURL, theWidth, theHeight) {
	if (aCustomizeWindow != null && !aCustomizeWindow.closed) {
		aCustomizeWindow.focus();
	} else {
		if ((theWidth != null)&(theHeight != null)){
			theSize = 'width='+theWidth+',height='+theHeight+',scrollbars=yes,resizable=yes'
			aCustomizeWindow=window.open(theURL,"customizeWindow",theSize);
		} else {
			aCustomizeWindow=window.open(theURL,"customizeWindow", 'titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=yes');
		}	
		if(aCustomizeWindow != null)	{
	        if(aCustomizeWindow.opener == null) {
	            aCustomizeWindow.opener = self;
	        }
		}
	}	
}

var aLangVersionWindow=null;
function newLangVersionWindow (theURL, theWidth, theHeight) {
	if (aLangVersionWindow != null && !aLangVersionWindow.closed) {
		aLangVersionWindow.focus();
	} else {
		if ((theWidth != null)&(theHeight != null)){
			theSize = 'width='+theWidth+',height='+theHeight+',scrollbars=yes,resizable=yes'
			aLangVersionWindow=window.open(theURL,"languageVersionWindow",theSize);
		} else {
			aLangVersionWindow=window.open(theURL,"languageVersionWindow", 'titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=no');
		}	
		if(aLangVersionWindow != null)	{
	        if(aLangVersionWindow.opener == null) {
	            aLangVersionWindow.opener = self;
	        }
		}
	}	
}

var aFeedbackWindow=null;
function newFeedbackWindow (theURL, theWidth, theHeight) {
	if (aFeedbackWindow != null && !aFeedbackWindow.closed) {
		aFeedbackWindow.focus();
	} else {
		if ((theWidth != null)&(theHeight != null)){
			theSize = 'width='+theWidth+',height='+theHeight+',scrollbars=yes,resizable=yes'
			aFeedbackWindow=window.open(theURL,"feedbackWindow",theSize);
		} else {
			aFeedbackWindow=window.open(theURL,"feedbackWindow", 'titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=no');
		}	
		if(aFeedbackWindow != null)	{
	        if(aFeedbackWindow.opener == null) {
	            aFeedbackWindow.opener = self;
	        }
		}
	}	
}
//////////////////////////////////////////////////////////////////////
// Search functions
//////////////////////////////////////////////////////////////////////
var aSearchWindow=null;
function newSearchWindow (theURL, theWidth, theHeight) {
	if (aSearchWindow != null && !aSearchWindow.closed) {
		aSearchWindow.focus();
	} else {
		if ((theWidth != null)&(theHeight != null)){
			theSize = 'width='+theWidth+',height='+theHeight+',scrollbars=yes,resizable=yes'
			aSearchWindow=window.open(theURL,"advancedSearchWindow",theSize);
		} else {
			aSearchWindow=window.open(theURL,"advancedSearchWindow", 'titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=no,dependent=no');
//			aSearchWindow=window.open(theURL,"advancedSearchWindow");
		}	
		if(aSearchWindow != null)	{
	        if(aSearchWindow.opener == null) {
	            aSearchWindow.opener = self;
	        }
		}
	}	
}

var searchResultsWindow=null;
function check_search(form) {
	if (searchResultsWindow != null && !searchResultsWindow.closed) {
		searchResultsWindow.focus();
	} else {
		if (top.isOP5) filename="./info/rzahgsearchresultswrapper.htm";
		else filename="./rzahgsearchresultswrapper.htm";
		searchResultsWindow=window.open(filename,"searchResultsWindow2", 'alwaysRaised=yes,dependent=no,width=250,height=400,titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=no');
		if(searchResultsWindow != null)	{
        	if(searchResultsWindow.opener == null) {
           		searchResultsWindow.opener = self;
	        }
		}
	}
	form.target="searchResultsWindow2";
}
// global variables are required to make the next two functions work
var searchResultsWindowInternet=null;
var nSearchCloseID=0;
var strSearchTerms="";
var strSearchVersion="";
var objForm=null;
var bSearchResultsWrapperLoaded=false;
function check_search_internet(form, searchVersion) {
	bResult = true;
	form.target="searchresultsframe";
	strSearchVersion = searchVersion;
	if (searchResultsWindowInternet != null && !searchResultsWindowInternet.closed
		&& searchResultsWindowInternet.searchformframe) {
		searchResultsWindowInternet.focus();
		objForm = null;
		bResult = true;  // allow the current form to be submited.
	} else {
		if (top.isOP5) filename="./info/rzah8searchresultswrapper.htm";
		else filename="./rzah8searchresultswrapper.htm";
		searchResultsWindowInternet=window.open(filename,"searchResultsWindow2", 'alwaysRaised=yes,dependent=no,width=400,height=450,titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=no');
		if(searchResultsWindowInternet != null)	{
        	if(searchResultsWindowInternet.opener == null) {
           		searchResultsWindowInternet.opener = self;
	        }
			searchResultsWindowInternet.focus();
		}
		objForm = form;
		bResult = false;  // defer processing of the search form.
	}
	strSearchTerms=form.free_text.value;
	nSearchCloseID=self.setTimeout(finalizeSearchPage,1000);
	return bResult;
}

function finalizeSearchPage(){
	if (!bSearchResultsWrapperLoaded) {
		// clear the timeout
		if (nSearchCloseID != 0) {
			self.clearTimeout(nSearchCloseID);
		}
		nSearchCloseID=self.setTimeout(finalizeSearchPage,1000);
		return;
	}
	// make sure advanced form is displayed
	if (searchResultsWindowInternet.searchformframe.document.URL.indexOf('searchadv.htm')==-1) {
		searchResultsWindowInternet.searchformframe.location="./info/rzah8searchadv.html"
	}
	// if processing deferred, submit the original form
	if (objForm != null) objForm.submit();
	// if stand-alone advanced search panel open, then close it.
	if (strSearchVersion == 'advanced' && aSearchWindow != null && !aSearchWindow.closed) {
		aSearchWindow.close();
	}
	// set the text within the search panel.
	searchResultsWindowInternet.searchformframe.initForm(strSearchTerms);
	// clear the timeout
	if (nSearchCloseID != 0) {
		self.clearTimeout(nSearchCloseID);
	}
}
function searchResultsWrapperLoaded(bValue){
	bSearchResultsWrapperLoaded=bValue;
}

var searchResultsWindowInternetLucene=null;
function check_search_internet_lucene(form, searchVersion) {
	bResult = true;
	form.target="results";
//	strSearchVersion = searchVersion;
	if (searchResultsWindowInternetLucene != null && !searchResultsWindowInternetLucene.closed
		&& searchResultsWindowInternetLucene.searchformframe) {
		searchResultsWindowInternetLucene.focus();
//		objForm = null;
//		bResult = true;  // allow the current form to be submited.
	} else {
		if (top.isOP5) filename="./info/rzahgsearchresultswait.htm";
		else filename="./rzahgsearchresultswait.htm";
		searchResultsWindowInternetLucene=window.open(filename,"results", 'alwaysRaised=yes,dependent=no,width=400,height=450,titlebar=no,location=no,toolbar=no,scrollbars=yes,resizable=yes,status=no');
		if(searchResultsWindowInternetLucene != null)	{
        	if(searchResultsWindowInternetLucene.opener == null) {
           		searchResultsWindowInternetLucene.opener = self;
	        }
			searchResultsWindowInternetLucene.focus();
form.target="results";

		}
//		objForm = form;
//		bResult = false;  // defer processing of the search form.
	}
//	strSearchTerms=form.free_text.value;
//	nSearchCloseID=self.setTimeout(finalizeSearchPage,1000);
	return bResult;
}
