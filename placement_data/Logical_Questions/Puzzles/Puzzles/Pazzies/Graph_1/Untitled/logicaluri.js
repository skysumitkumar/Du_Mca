var __LogicalURI = "";
var doImage=1; // not null.
var TType = TType;

function setLogicalURI(p)
{
  __LogicalURI = p;
  var a = new Array();
  a[0] = __prepTrackingString(window.location.hostname, 7);
  if (TType == null)
  {	
	a[1] = __prepTrackingString('PV', 8);
  }
  else
  {
 	a[1] = __prepTrackingString(TType, 8);
  }
  a[2] = ltrim(__prepTrackingString(window.location.pathname, 0));
  if( '' != window.document.referrer)
  {
 	a[a.length] = ltrim(__prepTrackingString(window.document.referrer,5));
  }
  if (navigator.userAgent.indexOf("SunOS") == -1 && navigator.userAgent.indexOf("Linux") == -1)
  {
 	__buildIMG(a);
  }
}

function __buildIMG(pArr)
{
	var TG = '<LAYER visibility="hide"><div style="display:none;"><IMG src="' + location.protocol + '//c.microsoft.com/trans_pixel.asp?';
	for(var i=0; i<pArr.length; i++)
	{
		if(0 == i)
		{
			TG +=  pArr[i];
		}
		else
		{
			TG += '&' + pArr[i];
		}
	}
	TG +='" height="0" width="0" hspace="0" vspace="0" Border="0"></div></layer>';
	document.write(TG);
}
function __prepTrackingString(ts, type)
{
	var rArray;
	var rString;
	var pName = '';
	if (0 == type)
	{
		pName = 'p=';
		rString = ts.substring(1);
		rArray = rString.split('/');
	}
	if (1 == type)
	{
		pName = 'qs=';
		rString = ts.substring(1);
		rArray = rString.split('&');		
	}
	if (2 == type)
	{
		pName = 'f=';
		rString = escape(ts);
		return pName + rString;
	}
	if (3 == type)
	{
		pName = 'tPage=';
		rString = escape(ts);
		return pName+rString;
	}
	if (4 == type)
	{
		pName = 'sPage=';
		rString = escape(ts);
		return pName + rString;
	}
	if (5 == type)
	{
		pName = 'r=';
		rString = escape(ts);
		return pName + rString;
	}
	if (6 == type)
	{
		pName = 'MSID=';
		rString = escape(ts);
		return pName + rString;
	}
	if (7 == type)
	{
		pName = 'source=';
		rString = ts.toLowerCase();
		if(rString.indexOf("microsoft.com") != -1)
		{
			rString = rString.substring(0,rString.indexOf("microsoft.com"));
			if('' == rString)
			{
				rString = "www";
			}	
			else
			{
				rString = rString.substring(0,rString.length -1);
			}
		}
		return pName + rString;
	}
	if (8 == type)
	{
		pName = 'TYPE=';
		rString = escape(ts);
		return pName + rString;
	}
	rString = '';
	if(null != rArray)
	{
		if(0 == type)
		{
			for( j=0; j < rArray.length - 1; j++)
			{	
				rString += rArray[j] + '_';  
			} 
		}
		else
		{
			for( j=0; j < rArray.length  ; j++)
			{
				rString += rArray[j] + '_';  
			} 
		}
	}
	rString = rString.substring(0, rString.length - 1);  	 	
        if(__LogicalURI != '')
          if(0==type)
             return pName + __LogicalURI;
	return pName + rString;
}

function ltrim(s)
{
  var nCount = 0;
  var nLen = s.length;
  for(var i=0;i<nLen;i++)
  {
    if(s.charAt(i) == ' ')
      nCount++;
    else
      break;
  }
  if(nCount!=0)
  {
    return s.substring(nCount);
  }    
  else
    return s;
}
