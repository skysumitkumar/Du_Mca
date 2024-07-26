<%@LANGUAGE="VBSCRIPT" CODEPAGE="1252"%>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<title>Welcome to dumca</title>
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
<script language="JavaScript" type="text/JavaScript">
<!--
function MM_reloadPage(init) {  //reloads the window if Nav4 resized
  if (init==true) with (navigator) {if ((appName=="Netscape")&&(parseInt(appVersion)==4)) {
    document.MM_pgW=innerWidth; document.MM_pgH=innerHeight; onresize=MM_reloadPage; }}
  else if (innerWidth!=document.MM_pgW || innerHeight!=document.MM_pgH) location.reload();
}
MM_reloadPage(true);
//-->
</script>
</head>
</head>
<body>
<div align="center" class="style8">
<table width="99%" border="0" align="left" cellpadding="0" cellspacing="0" bordercolor="#666666" bgcolor="#FFFFCC">
    <tr bgcolor="#0000CC"  > 
      <td width="18%" rowspan="3" bgcolor="#FFFFCC"><img src="pics/creation3.jpg" width="133" height="139" align="top"> 
        <table width="100%" height="216" border="0" align="left" bgcolor="#CCCCCC">
          <tr> 
            <td height="212" bordercolor="#000000" bgcolor="#990000" align="left"> 
              <form name="form1"  method="post" action="complist.asp" >
                <p align="left"> <font color="#FFFFCC"> 
                  <label><strong><font color="#FFFF00" size="-1">FIELDS</font></strong></label>
                  </font></p>
                <p align="left"> <font color="#FFFFCC"> 
                  <select name="field">
                    <option value="all">all</option>
                    <%
                
				dim cConn ,oRs,  insert_string
                 On Error Resume Next
                Set oConn = Server.CreateObject("ADODB.Connection")			
	            insert_string="select distinct f_name from field"		
	            Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
                Set oRs = Server.CreateObject("ADODB.Recordset")
	            Call oRs.Open(insert_string,oConn)
	            while not oRs.eof
				val=oRs("f_name")
				Response.Write("<option value="+val+">"+ucase(val)+"</option>")
                oRs.movenext 
				wend
				oConn.close
				%>
                  </select>
                  <label></label>
                  </font></p>
                <p align="left"><font color="#FFFFCC"> 
                  <label><strong><font color="#FFFF00" size="-1">LOCATION</font></strong></label>
                  </font></p>
                <p align="left"> <font color="#FFFFCC" > 
                  <select name="location">
                    <option value="all">all</option>
                    <%
			  
                On Error Resume Next
                Set oConn = Server.CreateObject("ADODB.Connection")			
	            insert_string="select distinct n.city from company c,table(c.comp_location) n"		
	            Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
                Set oRs = Server.CreateObject("ADODB.Recordset")
	            Call oRs.Open(insert_string,oConn)
	            while not oRs.eof
				val=oRs("city")
				Response.Write("<option value="+val+">"+ucase(val)+"</option>")
                oRs.movenext 
				wend
				oConn.close
				%>
                  </select>
                  </font></p>
                <p align="justify"><font color="#FFFFCC"> 
                  <input type="submit" align="middle" name="Submit" value="Search">
                  </font></p>
              </form></td>
          </tr>
        </table></td>
      <td width="82%" height="134" bgcolor="#0000CC"><p> 
        
        <table width="100%" border="0">
          <tr>
            <td width="90%" height="54"><font color="#CCCCCC" size="-1" face="Georgia, Times New Roman, Times, serif"><marquee>Welcome 
              to M.C.A.,University of Delhi the world of infomation and technology</marquee></font> 
            </td>
            <td width="10%"><p align="right"><img src="pics/logo1.jpg" width="59" height="52"></p></td>
          </tr>
        </table>
        
        <p><font color="#666666" size="+3" face="Verdana, Arial, Helvetica, sans-serif">DUMCA 
          PLACEMENT GUIDE</font></p></td>
    </tr>
    <tr  > 
      <td height="19" bgcolor="#FFFFCC"><table width="26%" border="0" align="right" cellpadding="0" cellspacing="0" bgcolor="#FF9966">
          <tr>
            <td width="40%" height="19" bgcolor="#99CCFF"><font color="#0000FF" size="-1"><a href="student.asp">Student</a></font></td>
            <td width="18%" bgcolor="#66CCFF"><font size="-1"><a href="questions.doc">FAQ</a></font></td>
            <td width="42%" bgcolor="#6699FF"><div align="right"><font color="#003399" size="-1"><a href="home.html"> 
                Signout</a></font></div></td>
          </tr>
        </table></td>
    </tr>
    <tr > 
      <td height="272" bgcolor="#FFFFCC"><table width="100%" height="265" border="0" align="right" bordercolor="#FFFFCC" bgcolor="#FFFFCC">
          <tr> 
            <td width="65%" height="261" bgcolor="#FFFFCC"><div align="center"><img src="pics/dept.bmp" width="175" height="159"></div></td>
            <td width="35%" bgcolor="#FFFFCC"><div align="justify"><font color="#000000" size="+1" face="Courier New, Courier, mono">This 
                site is the first ever try from DUMCA students to inform others 
                for our recritment history. Besides our recruitment history it 
                also informs you about the company's information across the globe.</font></div></td>
          </tr>
        </table></td>
    </tr>
  </table>
  <p>&nbsp;</p>
  <p>&nbsp;</p>
  <p> 
  </p> 
  <div align="right"> 
    <p align="center">&nbsp;</p>
    <p align="center">&nbsp;</p>
    <p align="center">&nbsp;</p>
    <p align="center">&nbsp;</p>
    
  </div>
  <h1 align="left"></h1>
</div>
  <p align="left">&nbsp;</p>
  
<p>&nbsp;</p>
<p>&nbsp;</p>
<hr size="1" noshade color="#3333FF" />
<p align="left"><font color="#0000FF" size="-1">Copyright &copy;DU-MCA-02. All 
  rights reserved.</font></p>
<p align="left"><font color="#CC0000" size="-1"><marquee>We would like to thank our faculty 
  Mrs. Vidya Kulkarni for her precious help and ideas which has motivated us to 
  develop this project.</marquee></font></p>

</body>
</html>
