
<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>New user</title>
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
        NEW USER</font></div></td>
  </tr>
  <tr> 
    <td height="29" bgcolor="#FFFFCC"><table width="100%" border="0">
        <tr bgcolor="#FFFFCC"> 
          <td width="80%" height="21"><a href="update.asp">Home</a></td>
          <td width="10%" bgcolor="#6699FF"><div align="right"><a href="welcome.asp"><font size="-1">View 
              the site</font></a></div></td>
          <td width="10%" bgcolor="#66CCFF"><div align="right"><font color="#FFFFCC" size="-1"><a href="home.html">[SIGN 
              OUT]</a></font></div></td>
        </tr>
      </table></td>
  </tr>
</table>
<p align="right">&nbsp;</p>
<form name="form1" method="post" action="newuser.asp">
  <table width="63%" border="0">
    <tr> 
      <td width="40%">USER ID</td>
      <td width="27%"><input type="text" name="uid"></td>
      <td width="33%"><font color="#990000">*[must be given]</font></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>PASSWORD</td>
      <td><input type="password" name="password"></td>
      <td><font color="#990000">*[must be given]</font></td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td>RE TYPE PASSWORD</td>
      <td><input type="password" name="repassword"></td>
      <td><font color="#990000">*[must be given]</font></td>
    </tr>
  </table>
  <p align="left">&nbsp;
  <p align="left">
    <input type="checkbox" name="user" value="y">
    SUPER USER
  <p align="center"> 
    <input type="submit" name="Submit" value="Submit">
  </p>
  
  </form>
<%
  on error resume next
  if (not request("uid")="" and not request("password")="" and not request("repassword")="") then
    if request("password")= request("repassword") then    
	 if request("user")="y" then
	   super="y"
	   else super="n"
	 end if  
	  dim oConn,oRs,insert_string
     set oConn = Server.CreateObject("ADODB.Connection")			
	 Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
	insert_string= "insert into user_account values('"+ request("uid")+"','" & request("password")& "','"+super+"')"
    Set oRs = Server.CreateObject("ADODB.Recordset")
  oRs=oConn.execute(insert_string) 
  call errhandler()
   else response.write(" Password does not match")
    end if
	
  end if
  sub errhandler()
  if err.number<>0 then
	   Response.Write("User is already there. Enter new id")
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
