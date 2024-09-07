// Standard Javascript library for departmental webpages

function timestamp() { // Write out date of last modification
  doc  = new Date(document.lastModified);
  day  = doc.getDate();
  mo   = doc.getMonth();
  year = doc.getYear();
  if (year < 100) {year = year + 2000;}
  if (year < 1900) {year = year + 1900;}
  switch(mo){
    case  0 : month="January";   break;
    case  1 : month="February";  break;
    case  2 : month="March";	 break;
    case  3 : month="April";	 break;
    case  4 : month="May";	 break;
    case  5 : month="June";	 break;
    case  6 : month="July";	 break;
    case  7 : month="August";	 break;
    case  8 : month="September"; break;
    case  9 : month="October";   break;
    case 10 : month="November";  break;
    case 11 : month="December";  break;
    default : month="unknown"
    }
  date = day + " " + month + " " + year;
  document.write("This page was last updated on " + date + ".<br>");
} // timestamp

function validator() { // Validate page
      var url = 'Check this page for ' +
                '<a href="http://validator.w3.org/checklink?uri=' +
                location.href + '" target="_top">dead links</a>, ' +
                '<a href="http://validator.w3.org/check?uri=' +
                location.href + '" target="_top">invalid html</a>, or ' +
                '<a href="http://jigsaw.w3.org/css-validator/validator?uri=' +
                location.href + '" target="_top">invalid CSS</a>.';
      document.write(url);
} // validator
