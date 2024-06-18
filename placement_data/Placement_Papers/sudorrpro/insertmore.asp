<%@LANGUAGE="VBSCRIPT" %>
<html>
<head>
<title>Untitled Document</title>
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
<form name="form1" method="post" action="insertmore.asp">
  <p>
    <input type="text" name="textfield">
    value</p>
  <p>
    <select name="select">
      <option value="cname">cname</option>
      <option value="revenue">revenue</option>
    </select>
  </p>
  <p> 
    <select name="select2">
      <%
	 
	 dim oConn,oRs,insert_string
     set oConn = Server.CreateObject("ADODB.Connection")			
	 Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
     insert_string="insert into company values("+ request("name")+",to_date("+request("visit")+"),to_date("+request("established")+"),"+request("ceo")+","+request("web")+","+request("status")+","& request("revenue")& ","& request("profit")& ",recruit_policy("+tests +","+gd+","+inter+"))"
	 insert_string="select cname from company"
	 Set oRs = Server.CreateObject("ADODB.Recordset")
	 call oRs.open(insert_string,oConn)
	 while not oRs.eof
	 response.Write("<option value="+oRs("cname")+">"+ucase(oRs("cname"))+"</option>")
	 oRs.movenext
	 wend
	 %>
    </select>
  </p>
  <%
      if request("textfield")="" then
	  response.Write("update")
	  else
	  oRs.close
	  upstring="update company set "+ request("select")+"='"+request("textfield") +"' where cname='"+ request("select2")+"'"
	  oRs=oConn.execute(upstring)
	  end if
	  oConn.close	   
	  %>
  <input type="submit" name="Submit" value="Submit">
</form>
</body>
</html>
