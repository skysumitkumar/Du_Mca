
<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>Update location</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
<style type="text/css">
<!--
body,td,th {
	color: #000000;
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
.style11 {color:#ffffff  }
-->
</style></head>

<body>
<table width="100%" border="0">
  <tr> 
    <td height="52" bgcolor="#0000CC"><div align="center"><font color="#999999" size="+1"> 
        UPDATE LOCATION</font></div></td>
  </tr>
  <tr> 
    <td height="29" bgcolor="#FFFFCC"><table width="100%" border="0">
        <tr bgcolor="#FFFFCC"> 
          <td width="80%" height="21"><a href="update.asp">Home</a></td>
          <td width="10%" bgcolor="#66CCFF"><div align="right"><a href="welcome.asp"><font size="-1">View 
              the site</font></a></div></td>
          <td width="10%" bgcolor="#6699FF"><div align="right"><font color="#FFFFCC" size="-1"><a href="home.html">[SIGN 
              OUT]</a></font></div></td>
        </tr>
      </table></td>
  </tr>
</table>
<p align="right">&nbsp;</p>
<form name="form1" method="post" action="update location.asp">
  <table width="86%" border="0">
    <tr> 
      <td>COMPANY</td>
      <td><select name="company">
          <%
	           
                Set oConn = Server.CreateObject("ADODB.Connection")			
	            insert_string="select cname from company "		
	            Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
                Set oRs = Server.CreateObject("ADODB.Recordset")
	            Call oRs.Open(insert_string,oConn)
	            while not oRs.eof
				val=oRs("cname")
				Response.Write("<option value="+val+">"+ucase(val)+"</option>")
                oRs.movenext 
				wend
				
				
				%>
        </select></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>LOCATION</td>
      <td><select name="location">
          <option value="street_addr">street_addr</option>
          <option value="state">state</option>
          <option value="city">city</option>
          <option value="zip_code">zip_code</option>
          <option value="tel_no">tel_no</option>
        </select></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>CITY</td>
      <td><input type="text" name="old value"></td>
      <td><font color="#990000">(for which tuple has to be updated)</font></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td width="27%">NEW VALUE</td>
      <td width="32%"><input type="text" name="new value"></td>
      <td width="41%">&nbsp;</td>
    </tr>
  </table>
  <p align="center"> 
    <input type="submit" name="Submit" value="Submit">
  </p>
  
  </form>
<%
    on error resume next
	if not request("old value")=""  then
   if not request("location")="city" or not request("new value")="" then
   	insert_string= "update  table(select c.comp_location from company c where c.cname='"&request("company")&"') set  "&request("location")&"= '"&request("new value")&"' where city='"&request("old value")&"'"           
   oRs=oConn.execute(insert_string) 
   call errhandler()
    end if
   
   end if
  sub errhandler()
  if err.number<>0 then
	   Response.Write("Wrong format of Data might be given or connection is not build")
	   else
	     response.write("<p align=&quot;center&quot;>DATA UPDATED SUCEESSFULLY</p>")
   
	   end if
	   end sub  
  %>
<p>&nbsp;</p><hr size="1" color="#0000CC" />
<p>Update into: <a href="update%20company.asp">Company</a> | <a href="update%20contact.asp">Contact</a> 
  |<a href="update%20student.asp"> Student</a></p>
<p><font color="#0000CC" size="-1">Copyright &copy; DU-MCA-02. All rights reserved</font> 
</p>
<p>&nbsp;</p>
</body>
</html>
