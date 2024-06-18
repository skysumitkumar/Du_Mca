<%@LANGUAGE="VBSCRIPT" %>
<html>
<head>
<title>Student details</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
<style type="text/css">
<!--
body,td,th {
	color: #990000;
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
    Set oConn = Server.CreateObject("ADODB.Connection")			
	insert_string="select sid ,initcap(name) name,year,mobile,land_line,initcap(selected_in) selected_in from student_recruited"  
	Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
    Set oRs = Server.CreateObject("ADODB.Recordset")
	Call oRs.Open(insert_string,oConn)
 	
%>
<table width="100%" border="0" bgcolor="#FFFFCC">
  <tr> 
    <td height="52" bgcolor="#0000CC"><div align="center" ><font color="#666666" size="+3" face="Courier New, Courier, mono"><strong>Student 
        Details</strong></font></div></td>
  </tr>
  <tr>
    <td height="27"><table width="100%" border="0">
        <tr>
          <td width="6%" height="21" ><font color="#0000FF" size="-1"><a href="welcome.asp">Home</a></font></td>
          <td width="85%">&nbsp;</td>
          <td width="9%"><div align="right"><font color="#0000FF" size="-1"><a href="home.html">[Signout]</a></font></div></td>
        </tr>
      </table></td>
  </tr>
</table>
<p align="center">&nbsp;</p>
  <p><img src="pics/create.JPG" width="156" height="145"></p>
<p align="right">&nbsp;</p>
<table width="133%" border="0">
  <tr> 
    <th width="11%" bgcolor="#99CCFF"><div align="center"><font color="#000000"><strong>Sid</strong></font></div></th>
    <th width="22%" bgcolor="#99CCFF"><div align="center"><font color="#000000"><strong>Name</strong></font></div></th>
    <th width="13%" bgcolor="#99CCFF"><div align="center"><strong><font color="#000000">Year</font></strong></div></th>
    <th width="15%" bgcolor="#99CCFF"><div align="center"><font color="#000000"><strong>Mobile</strong></font></div></th>
    <th width="16%" bgcolor="#99CCFF"><div align="center"><strong><font color="#000000">Res-Phn</font></strong></div></th>
    <th width="14%" bgcolor="#99CCFF"><div align="center"><strong><font color="#000000">Selected 
        In</font></strong></div></th>
  </tr>
  <%
  while not oRs.eof
  response.Write("<tr>")
  color="cccccc"
  response.Write("<td bgcolor="+color+">")
  response.Write(oRs("sid"))
  response.Write("</td>")
  response.Write("<td bgcolor="+color+">")
  response.Write(oRs("name"))
  response.Write("</td>")
  response.Write("<td bgcolor="+color+">")
  response.Write(oRs("year"))
  response.Write("</td>")
  response.Write("<td bgcolor="+color+">")
  response.Write(oRs("mobile"))
  response.Write("</td>")
  response.Write("<td bgcolor="+color+">")
  response.Write(oRs("land_line"))
  response.Write("</td>")
  
  response.Write("<td bgcolor="+color+">")
  response.Write(oRs("selected_in"))
  response.Write("</td></tr>")
  oRs.movenext
  wend
  %>
</table>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<hr size="1" color="#0000CC" />
<p align="left"><font color="#0000FF" size="-1">Copyright &copy;DU-MCA-02. All 
  rights reserved</font></p>
</body>
</html>
