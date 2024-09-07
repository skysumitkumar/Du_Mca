<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>Insert in student</title>
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
</style>

</head>

<body>
<table width="100%" border="0">
  <tr> 
    <td height="52" bgcolor="#0000CC"><div align="center"><font color="#999999" size="+2">Student</font></div></td>
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
<p>&nbsp;</p><form name="form1" method="post" action="insstudent.asp">
  <table width="58%" border="0">
    <tr> 
      <td width="39%" bgcolor="#99CCFF">SID</td>
      <td width="35%"><input type="text" name="sid"></td>
      <td width="26%"><font color="#990000">*[must be given]</font></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">NAME</td>
      <td><input type="text" name="name"></td>
      <td><font color="#990000">*[must be given]</font></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">YEAR</td>
      <td><input type="text" name="year"></td>
      <td><font color="#990000">*[must be given]</font></td>
    </tr>
    <tr> 
      <td >&nbsp;</td>
      <td >&nbsp;</td>
      <td >&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">MOBILE</td>
      <td><input type="text" name="mobile"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">LAND_LINE</td>
      <td><input name="landline" type="text" ></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">SELECTED_IN</td>
      <td><input type="text" name="selectedin"></td>
      <td>&nbsp;</td>
    </tr>
  </table>
  <p>&nbsp;</p>
  <p align="center">
   <input type="submit" name="Submit" value="Submit"></p>
    </form>
<%
	 on error resume next 	 
	if (not request("sid") = "" and not request("name")="" and not request("year")="")then
	 dim oConn,oRs,insert_string
     set oConn = Server.CreateObject("ADODB.Connection")			
	 Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
     insert_string="insert into student_recruited values('"& request("sid")&"','"+request("name")+"',to_date('"+request("year")+"','dd/mm/yy'),'"+request("mobile")+"','"+request("landline")+"','"+request("selectedin")+"') "                 
	 Set oRs = Server.CreateObject("ADODB.Recordset")
	 oRs=oConn.execute(insert_string)
	 call errhandler()
	  
	   end if 
	   sub errhandler()
  if err.number<>0 then
	   Response.Write("Wrong format of Data might be given or connection is not build or student is already present")
	   else
	    response.write("Data has been inserted successfully")
	   end if
	   end sub  
	 %>
<hr size="1" color="#0000CC" />
<p>Insert into: <a href="inscontact.asp">Contact </a>| <a href="inslocation.asp">Location</a> 
  | <a href="rec_history.asp">Recuitment history</a> | <a href="insfield.asp">Field</a> 
  |<a href="insertcomp.asp"> Company</a></p>
<p><font color="#0000CC" size="-1">Copyright &copy; DU-MCA-02. All rights reserved</font></p>
</body>

</html>
