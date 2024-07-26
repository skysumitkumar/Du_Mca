<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>Insert in company</title>
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
    <td height="52" bgcolor="#0000CC"><div align="center"><font color="#999999" size="+2">Company</font></div></td>
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
<form name="form1" method="post" action="insertcomp.asp">
  <table width="58%" border="0">
    <tr> 
      <td width="39%" bgcolor="#99CCFF">NAME </td>
      <td width="35%"><input type="text" name="cname"></td>
      <td width="26%"><font color="#990000">*[must be given]</font></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">VISITING DATE </td>
      <td><input type="text" name="visit"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">ESTABLISHED DATE</td>
      <td><input type="text" name="established"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td >&nbsp;</td>
      <td >&nbsp;</td>
      <td >&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">CEO </td>
      <td><input type="text" name="ceo"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">WEBSITE</td>
      <td><input name="web" type="text" ></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">STATUS</td>
      <td><input type="text" name="status"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">REVENUE</td>
      <td><input type="text" name="revenue"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">PROFIT</td>
      <td><input type="text" name="profit"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">PAY</td>
      <td><input type="text" name="pay"></td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">REQUIREMENTS</td>
      <td><input type="text" name="require"></td>
      <td>&nbsp;</td>
    </tr>
  </table>
  <p>&nbsp;</p>
  <p><fieldset><legend>SELECTION PROCEDURE</legend>
  <p> 
    <input type="checkbox" name="test" value="y">
    TEST</p>
  <p> 
    <input type="checkbox" name="gd" value="y">
    GD</p>
  <p>
    <input type="checkbox" name="inter" value="y">
    INTERVIEW </p>
  </fieldset>
  <p>&nbsp;CONSTRAINTS 
    <input type="text" name="constraints">
  </p>
  <p align="center">
    <input type="submit" name="Submit" value="Submit">
  </p>
</form>
<%
	on error resume next  	 
	if not request("cname") = "" then
	 if request("revenue")="" then
	 revenue="null"
	 else revenue=request("revenue")
	 end if
	 if request("profit")="" then
	 profit="null"
	 else profit=request("profit")
	 end if
	 if request("pay")="" then
	 pay="null"
	 else pay=request("pay")
	 end if
	 if request("require")="" then
	 require="null"
	 else require=request("require")
	 end if
	 if request("test")="y" then
	tests="y"
	else tests="n"
	end if
	if request("gd")="y" then
	gd="y"
	else gd="n"
	end if
	if request("inter")="y" then
	inter="y"
	else inter="n"
	end if	 
	 dim oConn,oRs,insert_string
     set oConn = Server.CreateObject("ADODB.Connection")			
	 Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
     insert_string="insert into company values('"+ request("cname")+"','"+request("visit")+"','"+request("established")+"','"+request("ceo")+"','"+request("web")+"','"+request("status")+"',"& revenue& ","& profit& ",null,null,recruit_policy("&pay&","&require&",select_proc('"+tests+"','"+gd+"','"+inter+"'),'"+request("constraints")+"'),null)"                  
	 	 Set oRs = Server.CreateObject("ADODB.Recordset")
		  oRs=oConn.execute(insert_string)
          call errhandler()
		  end if 
	   sub errhandler()
	   if err.number<>0 then
	   Response.Write("Wrong format of Data might be given or connection is not build or company name is already present")
	   else
	    response.write("Data has been inserted successfully")
	   end if
	   end sub 
	 %>
<hr size="1" color="#0000CC" />
<p>Insert into: <a href="inscontact.asp">Contact </a>| <a href="inslocation.asp">Location</a> 
  | <a href="rec_history.asp">Recuitment history</a> | <a href="insfield.asp">Field</a> 
  | <a href="insstudent.asp">Student details</a></p>
<p><font color="#0000CC" size="-1">Copyright &copy; DU-MCA-02. All rights reserved</font></p>
</body>

</html>
