<%@LANGUAGE="VBSCRIPT" %>
<html>
<head>
<title>Location details</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
<style type="text/css">
<!--
body,td,th {
	color:#990000;
}
body {
	background-color: #FFFFCC;
}
.style8 {
	font-family: "Courier New", Courier, mono;
	font-size: 36px;
	font-weight: bold;
}
.style9 {font-size: 14px}
.style11 {color: #FFFFFF}
-->
</style>
</head>

<body>
<%
 dim oConn,oRs,insert_string
    set oConn = Server.CreateObject("ADODB.Connection")			
	Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
    Set oRs = Server.CreateObject("ADODB.Recordset")
	insert_string="select cname, initcap(l.city) city,initcap(l.street_addr) addr,initcap(l.state) state,l.zip_code zip,l.tel_no tel from company c, table(c.comp_location) l where cname='" + request("Submit1")+"' and l.city='" + request("loc")+"'" 
    Call oRs.Open(insert_string,oConn)         
%>
<table width="96%" border="0">
  <tr> 
    <td height="66" bgcolor="#0000CC"><p align="center"><font size="+3" face="Verdana, Arial, Helvetica, sans-serif" color="#666666"> 
        <%
   on error resume next
   response.Write(ucase(oRs("cname"))) 
    if err.number<>0 then
	  response.Write("No data available")
	 end if
%>
        </font></p></td>
  </tr>
  <tr> 
    <td height="28" bgcolor="ffffCC"><table width="100%" border="0">
        <tr> 
          <td width="53%"><a href="welcome.asp"><font size="-1">HOME</font></a></td>
          <td width="47%"><div align="right"><font size="-1"><a href="home.html">[Signout</a></font>]</div></td>
        </tr>
      </table></td>
  </tr>
</table>


  
	
<div align="right"> </div>
   <p>&nbsp;</p><table width="31%" border="0" align="left">
    
  <tr> 
      <td width="48%" height="21" bgcolor="#99CCFF"><font color="#000000">Addresse :</font></td>
      <td width="52%" bgcolor="#CCCCCC"><p>
          <%
   on error resume next
   response.Write(oRs("addr")) 
   %>
        </p></td>
    </tr>
  </table>
  
  <p align="left">&nbsp;</p>
  <table width="31%" border="0" align="left">
    
  <tr> 
      <td width="48%" bgcolor="#99CCFF"><font color="#000000">City:</font></td>
      <td width="52%" bgcolor="#CCCCCC"><p>
          <%
  on error resume next
   response.Write(oRs("city"))
   %>
        </p></td>
    </tr>
  </table>
  <p align="left">&nbsp; </p>
    <table width="31%" border="0" align="left">
    
    <tr> 
      <td width="48%" bgcolor="#99CCFF"><font color="#000000">Zip-Code:</font></td>
      <td width="52%" bgcolor="#CCCCCC"><p>
          <%
  on error resume next
   response.Write(oRs("zip"))
   %>
        </p></td>
    </tr>
  </table>
  <p align="left">&nbsp; </p>
   <table width="31%" border="0" align="left">
    
    <tr> 
      <td width="48%" bgcolor="#99CCFF"><font color="#000000">State: </font></td>
      <td width="52%" bgcolor="#CCCCCC"><p>
          <%
  on error resume next
   response.Write(oRs("state"))
   %>
        </p></td>
    </tr>
  </table>
  <p align="left">&nbsp;</p>
   <table width="31%" border="0" align="left">
    
    <tr> 
      <td width="48%" bgcolor="#99CCFF"><font color="#000000">Phone: </font></td>
      <td width="52%" bgcolor="#CCCCCC"><p>
          <%
  on error resume next
   response.Write(oRs("tel"))
   oConn.close
   %>
        </p></td>
    </tr>
  </table>
  <p align="left">&nbsp;</p>
  <p align="left">&nbsp;</p>
   
  <p align="center">
<form name="form1" method="post" action="company.asp"> <input type="hidden" name="compname"
        <%
		   Response.Write(" value="+Request("submit1")+">")
		   %>
        
		<p align="center"><input type="submit" name="Sub" value="Back"> </p>
		 
  </form>
</div>
 <p align="left">&nbsp;</p>
  <hr size="1" noshade color="#3333FF" />
<p align="left"><font color="#0000FF" size="-1">Copyright &copy;DU-MCA-02. All 
  rights reserved.</font></p>

</body>
</html>
