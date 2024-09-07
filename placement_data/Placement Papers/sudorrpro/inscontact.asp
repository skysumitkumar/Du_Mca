
<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>Insert in contact</title>
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
        CONTACT </font></div></td>
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
<p align="right"><font size="-1"></font></p>
<form name="form1" method="post" action="inscontact.asp">
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
  <table width="46%" border="0">
    <tr> 
      <td bgcolor="#99CCFF">HR_NAME</td>
      <td><input type="text" name="hr"></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">E_MAIL</td>
      <td><input type="text" name="email"></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">MOBILE</td>
      <td><input type="text" name="mobile"></td>
    </tr>
    <tr>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">LAND LINE</td>
      <td><input type="text" name="land"></td>
    </tr>
  </table>
  
  <p>&nbsp;</p>
  <p align="center"> 
    <input type="submit" name="Submit" value="Submit">
  </p>
  
  </form>
<%
  on error resume next
  if (not request("HR")="") then
    
	insert_string= "select cname from company c where c.cname='"+ request("company")+"' and c.contact_detail is null"
  call oRs.open(insert_string, oConn)
  if oRs.eof then
   insert_string="insert into table(select c.contact_detail from company c where c.cname='"+request("company")+"') values('"& request("hr")&"','" & request("email")& "','"+request("mobile")+"','"+request("land")+"')"
  else
  insert_string="update company set contact_detail=contact_tab(contact('"& request("hr")&"','" & request("email")& "','"+request("mobile")+"','"+request("land")+"')) where cname='"+request("company")+"'"
  
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
<p>&nbsp;</p><hr size="1" color="#0000CC" />
Insert into: <a href="inslocation.asp">Location</a> |<a href="rec_history.asp"> 
Recuitment history</a>| <a href="insertcomp.asp">Company</a>| <a href="insfield.asp">Field</a> 
| <a href="insstudent.asp">Student details</a> 
<p><font color="#0000CC" size="-1">Copyright &copy; DU-MCA-02. All rights reserved</font> 
</p>
<p>&nbsp;</p>
</body>
</html>
