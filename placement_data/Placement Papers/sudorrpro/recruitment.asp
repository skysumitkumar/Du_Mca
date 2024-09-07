<%@LANGUAGE="VBSCRIPT" %>
<html>
<head>
<title>Recruitment details</title>
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
    set oConn = Server.CreateObject("ADODB.Connection")			
	Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
    Set oRs = Server.CreateObject("ADODB.Recordset")
	insert_string="select cname,h.visited_date visit ,h.pay pay,h.stud_recruit stud,h.proc.test test,h.proc.gd gd,h.proc.interview inter from company c, table(c.rec_hist) h where cname='" + request("Submit1")+"' and h.visited_date=to_date('" +request("history") +"','dd/mm/yy')"
	            
	Call oRs.Open(insert_string,oConn)         
%>
<table width="96%" border="0">
  <tr> 
    <td height="66" bgcolor="#0000CC"><p align="center"><font size="+3" face="Verdana, Arial, Helvetica, sans-serif" color="#666666"> 
        <%
   on error resume next
   response.Write(ucase(oRs("cname"))) 
    if err.number<>0 then
	  response.Write("No data available")
	 end if
%>
        </font></p></td>
  </tr>
  <tr> 
    <td height="28" bgcolor="ffffCC"><table width="100%" border="0">
        <tr> 
          <td width="53%"><a href="welcome.asp"><font size="-1">HOME</font></a></td>
          <td width="47%"><div align="right"><font size="-1"><a href="home.html">[Signout</a></font>]</div></td>
        </tr>
      </table></td>
  </tr>
</table>

<div align="left">
  <p>&nbsp;</p>
  <table width="48%" border="0">
    <tr>
      <td width="54%" bgcolor="#99CCFF"><font color="#000000" >Year</font></td>
      <td width="46%" bgcolor="#CCCCCC"><p> 
          <%on error resume next
   response.Write(oRs("visit")) 
   %>
        </p></td>
    </tr>
  </table>
  
  <p>&nbsp;</p><table width="48%" border="0">
    <tr>
      <td width="55%" bgcolor="#99CCFF"><font color="#000000">Pay package:</font> </td>
      <td width="45%" bgcolor="#CCCCCC"> 
        <%
  on error resume next
   response.Write(oRs("pay")) 
   %>
      </td>
    </tr>
  </table>
   <p>&nbsp;</p><table width="48%" border="0">
    <tr>
      <td width="55%" bgcolor="#99CCFF"><font color="#000000">No of students recruited:</font> 
      </td>
      <td width="45%" bgcolor="#CCCCCC"> 
        <%
  on error resume next
   response.Write(oRs("stud")) 
   %>
      </td>
    </tr>
  </table>
  <p>&nbsp;</p>
  <table width="74%" border="0">
    <tr> 
      <td width="36%" height="21" bgcolor="#99CCFF"><font color="#000000">Testing Procedure:</font></td>
      <td width="24%" bgcolor="#CCCCCC"><font color="#000000">Test:</font> 
        <%
	  on error resume next
   response.Write(ucase(oRs("test"))) 
   %>
      </td>
      <td width="22%" bgcolor="#CCCCCC"><font color="#000000">G.D.:</font> 
        <%
	  on error resume next
   response.Write(ucase(oRs("gd")))
    %>
      </td>
      <td width="18%" bgcolor="#CCCCCC"><font color="#000000">Interview:</font> 
        <%
	  on error resume next
   response.Write(ucase(oRs("inter")))
   oConn.close
   %>
      </td>
    </tr>
  </table>
  <p>&nbsp;</p>
  
</div>

  <p align="center">
<form name="form1" method="post" action="company.asp"> <input type="hidden" name="compname"
        <%
		   Response.Write(" value="+Request("submit1")+">")
		   %>
        
		<p align="center"><input type="submit" name="Sub" value="Back"> </p>
		 
  </form>
   <p align="left">&nbsp;</p>
  <hr size="1" noshade color="#3333FF" />
<p align="left"><font color="#0000FF" size="-1">Copyright &copy;DU-MCA-02. All 
  rights reserved.</font></p>

</body>
</html>
