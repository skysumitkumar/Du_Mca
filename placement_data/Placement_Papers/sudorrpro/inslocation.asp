
<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>Insert in location</title>
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
        LOCATION</font></div></td>
  </tr>
  <tr>
    <td height="27" bgcolor="#FFFFCC"><table width="100%" border="0">
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
<form name="form1" method="post" action="inslocation.asp">
  <table width="20%" border="0" align="center" bgcolor="#99CCFF">
    <tr> 
      <td><div align="center">Company</div></td>
    </tr>
  </table>
  <p align="center"> 
    <select name="company">
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
				oRs.close
				
				%>
    </select>
  <p align="left">&nbsp;
  <table width="56%" border="0">
    <tr> 
      <td width="39%" bgcolor="#99CCFF">STREET_ADDRESS</td>
      <td width="36%"><input type="text" name="street"></td>
      <td width="25%">&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">STATE</td>
      <td><input type="text" name="state"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">CITY</td>
      <td><input type="text" name="city"></td>
      <td><font color="#990000">*[must be given]</font></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td height="33" bgcolor="#99CCFF">ZIP_CODE</td>
      <td><input type="text" name="zip"></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td height="33">&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td height="33" bgcolor="#99CCFF">TELEPHONE_NO</td>
      <td><p> 
          <input type="text" name="tel">
        </p></td>
      <td>&nbsp;</td>
    </tr>
  </table>
  
  <p>&nbsp;</p>
  <p align="center"> 
    <input type="submit" name="Submit" value="Submit">
  </p>
  
  </form>
<%
  on error resume next
  if (not request("city")="" ) then
    
	insert_string= "select cname from company c where c.cname='"+ request("company")+"' and c.comp_location is null"
  call oRs.open(insert_string, oConn)
  if oRs.eof then
   insert_string="insert into table(select c.comp_location from company c where c.cname='"+request("company")+"') values('"& request("street")&"','" & request("state")& "','"+request("city")+"','"+request("zip")+"','"+request("tel")+"') "    
  else
  insert_string="update company set comp_location=location_tab(location('"& request("street")&"','" & request("state")& "','"+request("city")+"','"+request("zip")+"','"+request("tel")+"')) where cname='"+request("company")+"'"
  
  end if
  oRs.close
  oRs=oConn.execute(insert_string) 
  call errhandler()
  end if
  sub errhandler()
  if err.number<>0 then
	   Response.Write("Wrong format of Data might be given or connection is not build")
	   else
	    response.write("Data has been inserted successfully")
	   end if
	   end sub  
    %>
<hr size="1" color="#0000CC" />
<p>Insert into: <a href="inscontact.asp">Contact </a>|<a href="rec_history.asp"> 
  Recuitment history</a>| <a href="insertcomp.asp">Company</a>| <a href="insfield.asp">Field</a> 
  | <a href="insstudent.asp">Student details</a></p>
<p><font color="#0000CC" size="-1">Copyright &copy; DU-MCA-02. All rights reserved</font> 
</p>
<p>&nbsp;</p>
</body>
</html>
