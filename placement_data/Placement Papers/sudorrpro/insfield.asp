
<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>Insert in field</title>
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
        FIELD </font></div></td>
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
<form name="form1" method="post" action="insfield.asp">
  <table width="63%" border="0">
    <tr> 
      <td width="25%">COMPANY</td>
      <td width="37%"><select name="company">
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
        </select></td>
      <td width="38%">&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>FIELD </td>
      <td><input type="text" name="field"></td>
      <td><font color="#990000">*[must be given]</font></td>
    </tr>
  </table>
  <p align="left">&nbsp;
  <p align="center"> 
    <input type="submit" name="Submit" value="Submit">
  </p>
  
  </form>
<%
  on error resume next
  if (not request("field")="" ) then
    
	insert_string= "insert into field values('"& request("field")&"','" & request("company")& "')"
  
 
  
  oRs=oConn.execute(insert_string) 
  call errhandler()
  end if
  sub errhandler()
  if err.number<>0 then
	   Response.Write("Value is already there")
	   else
	    response.write("Data has been inserted successfully")
	   end if
	   end sub   
  %>
<p>&nbsp;</p><hr size="1" color="#0000CC" />
Insert into: <a href="inslocation.asp">Location</a> |<a href="rec_history.asp"> 
Recuitment history</a>| <a href="insertcomp.asp">Company</a>| <a href="inscontact.asp">Contact</a> 
| <a href="insstudent.asp">Student details</a> 
<p><font color="#0000CC" size="-1">Copyright &copy; DU-MCA-02. All rights reserved</font> 
</p>
<p>&nbsp;</p>
</body>
</html>
