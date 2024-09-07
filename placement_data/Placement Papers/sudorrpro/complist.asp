<%@LANGUAGE="VBSCRIPT" %>
<html>
<head>
<title>List of the companies</title>
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

<body bgcolor="#FFFFFF">
<%
    dim oConn,oRs,insert_string,i
    i=0
	Set oConn = Server.CreateObject("ADODB.Connection")			
	if request("field")="all" and request("location")="all" then
	insert_string="select cname from company"
	elseif request("field")="all" then
	insert_string="select  cname from company c, table(c.comp_location) t where t.city= '" + request("location") + "'"
    elseif request("location")="all" then
	insert_string="select  cname from company c, field f where c.cname=f.c_name and f.f_name= '" + Request("field") + "'" 
	else   	
	insert_string="select  cname from company c, field f ,table(c.comp_location) t where c.cname=f.c_name and f.f_name= '" + Request("field") + "'" 
	insert_string=insert_string + " and t.city= '" + request("location") + "'"
    end if   
	Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
    Set oRs = Server.CreateObject("ADODB.Recordset")
	Call oRs.Open(insert_string,oConn)
    
	
	
%>
<marquee>
</marquee>
<div align="center"> 
  <table width="99%" border="0" align="left" cellpadding="0" cellspacing="0" bordercolor="#666666" bgcolor="#FFFFCC">
    <tr bgcolor="#0000CC"  > 
      <td height="84" colspan="2" bgcolor="#0000CC"> <p> 
        
         <p align="center"><font color="#666666" size="+3" face="Verdana, Arial, Helvetica, sans-serif">COMPANY 
          LIST </font></p></td>
    </tr>
    <tr bgcolor="#0000CC"  >
      <td height="19" colspan="2" bgcolor="#FFFFCC"><table width="100%" border="0">
          <tr>
            <td><a href="welcome.asp">Home</a></td>
            <td><div align="right"><font color="#0000FF" size="-1"><a href="home.html">[Signout</a></font><font color="#0000FF" size="-1">]</font></div></td>
          </tr>
        </table></td>
    </tr>
    <tr > 
      <td width="22%" bgcolor="#FFFFCC"><table width="28%" height="369" border="0">
          <tr> 
            <td height="342"><div align="justify"><img src="pics/creation.jpg" width="146" height="306"></div></td>
          </tr>
          <tr> 
            <td height="21"><div align="justify"></div></td>
          </tr>
        </table></td>
      <td width="78%" height="369" bgcolor="#FFFFCC"> <table width="100%" height="226" border="0" align="right" bordercolor="#FFFFCC" bgcolor="#FFFFCC">
          <tr> 
            <td width="47%" height="222" bgcolor=><div align="center" > 
                <table width="161" border="1" align="right" bordercolor="#FFFFcc">
                  <tr> 
                    <td width="1" >&nbsp; 
                    <td height="23" bordercolor="#990000" bgcolor="#99CCFF"><div align="center"><font color="#000000">Company 
                        Name</font></div></tr>
                  <tr> 
                    <td height="121" >&nbsp; 
                    <td width="144" bordercolor="#990000" bgcolor="#CCCCCC"><form action="company.asp" method="post">
                        <p align="center"> 
                          <select name="compname">
                            <%
		     if oRs.eof then
			 Response.Write("<option value=&quot;none&quot;>none</option>")
			 end if
                
			 while not oRs.eof
				
				Response.Write("<option value="+oRs("cname")+">"+ucase(oRs("cname"))+"</option>")
                oRs.movenext 
				wend
			%>
                          </select>
                          <br>
                        </p>
                        <p align="center"> 
                          <input name="submit" type="submit" value="SEARCH" align="middle">
                        </p>
                      </form></tr>
                </table>
              </div></td>
            <td width="53%" bgcolor="#FFFFCC"><font color="#0000FF" size="-1">&nbsp;</font></td>
          </tr>
        </table></td>
    </tr>
  </table>
  <p>&nbsp;</p>
</div>
 
<p>&nbsp;</p>
<p align="right">&nbsp;</p>
    <p align="right">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
  
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>

<hr size="1" noshade color="#0000FF" />

<p><font color="#0000FF" size="-1">Copyright &copy;DU-MCA-02. All rights reserved.</font></p>
</body>

</html>
