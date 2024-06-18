<%@LANGUAGE="VBSCRIPT" CODEPAGE="1252"%>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<title>Check</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
<style type="text/css">
<!--
body,td,th {
	color: #996666;
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
  dim cConn ,oRs,  insert_string
  
  On Error Resume Next
  Set oConn = Server.CreateObject("ADODB.Connection")			
	insert_string="select superuser from user_account where name='" + Request( "name") + "' and password='"+  Request("password")+"'"
		
	Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
    Set oRs = Server.CreateObject("ADODB.Recordset")
	 Call oRs.Open(insert_string,oConn)
	 super=oRs("superuser")
     cond=Request("radiobutton")
	 call errhandler()
	  sub errhandler()
	  if Err.number<>0 then 
	   	  server.Execute("invalid.asp")
	  else
	    if request("superuser")="update" then
		  if super="y" then
			server.Execute("update.asp")
		  else server.Execute("invalid.asp")
		  end if
		  else	
			server.Execute("welcome.asp")
	   
	  end if
	  end if
	  
	  end sub
%>
</body>
</html>
