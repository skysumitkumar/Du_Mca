// rzahgcookies.js
//
// (C) Copyright IBM Corporation, 2001                              //
// All rights reserved. Licensed Materials Property of IBM          //
// US Government Users Restricted Rights                            //
// Use, duplication or disclosure restricted by                     //
// GSA ADP Schedule Contract with IBM Corp.                         //

  var debug_read=false;
  // Gets cookie values.
  //
  function getCookie(Name) 
  {
    var search = Name + "="
	if (top.document.cookie == "") return false;
    if (top.document.cookie.length > 0) { // if there are any cookies
      offset = top.document.cookie.indexOf(search)
      if (offset != -1) { // if cookie exists
        offset += search.length
        // set index of beginning of value
        end = top.document.cookie.indexOf(";", offset)
        // set index of end of cookie value
        if (end == -1)
          end = top.document.cookie.length
        return unescape(top.document.cookie.substring(offset, end))
      } else return null;
    } else return null;
  }


