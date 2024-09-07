<!--

function worldWideRedirector() {
    var URL; 
    if (!document.countryNav)
    {
        URL = document.form.site.options[document.form.site.selectedIndex].value;        
    }
    else
    {
	URL = document.countryNav.country.options[document.countryNav.country.selectedIndex].value;
    }
    window.location.href = URL; 
}


var country = [  
		 ['Austria', 'at'],
		 ['Australia', 'au'],
                 ['Brazil', 'br'],
                 ['Canada', 'ca'],
                 ['China', 'cn'],
                 ['Denmark', 'dk'],
                 ['Finland', 'fi'],
				 ['France', 'fr'],
                 ['Germany', 'de'],
                 ['Hong Kong', 'hk'],
                 ['India', 'in'],
				 ['Italy', 'it'],
                 ['Japan', 'jp'],
                 ['Korea', 'kr'],
                 ['Malaysia', 'my'],
				 ['New Zealand', 'nz'],
                 ['Norway', 'no'],
                 ['Philippines', 'ph'],
                 ['Poland', 'pl'],
                 ['Singapore', 'sg'],
                 ['South Africa', 'sa'],
                 ['Spain', 'es'],
                 ['Sweden', 'se'],
                 ['Switzerland', 'ch'],
                 ['Thailand', 'th'],
				 ['The Netherlands', 'nl'],
                 ['United Kingdom', 'uk'],
                 ['United States', 'us'] ];

var header = "<form name='countryNav'>\n";
header += "<FONT face='sans-serif, Arial, Helvetica' size='1'><select name='country' size='1' onChange='worldWideRedirector()' class='inputbox'></FONT>\n";
var body = '';
var footer = "</select></form>\n";
pageCountry = getPageCountry();
for (var i = 0 ; i < country.length ; i++)
{
    
	if (country[i][1] == pageCountry){
	var item = '<option value="/' + country[i][1] + '/"' ;
    item += ' selected="true">' + country[i][0] + '</option>\n';
   body += item;
	}
	else
	{
	var item = '<option value="/' + country[i][1] + '/"' ;
    item += '>' + country[i][0] + '</option>\n';
   body += item;
   }
}

var rc = header + body + footer;
document.write (rc);




// -->

