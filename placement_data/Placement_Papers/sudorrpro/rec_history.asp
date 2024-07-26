
<%@LANGUAGE="VBSCRIPT"%>
<html>
<head>
<title>Insert in recruit history</title>
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
    <td height="52" bgcolor="#0000CC"><div align="center"><font color="#999999" size="+1">RECRUITMENT 
        HISTORY </font></div></td>
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
<form name="form1" method="post" action="rec_history.asp">
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
  <table width="65%" border="0">
    <tr> 
      <td width="48%" bgcolor="#99CCFF">PACKAGE</td>
      <td width="30%"><input type="text" name="package"></td>
      <td width="22%">e.g 2.3</td>
    </tr>
    <tr> 
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">NO OF STUDENT RECRUITED</td>
      <td><input type="text" name="stud_rec"></td>
      <td>&nbsp;</td>
    </tr>
    <tr>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
      <td>&nbsp;</td>
    </tr>
    <tr> 
      <td bgcolor="#99CCFF">VISITED DATE</td>
      <td><input type="text" name="visit"></td>
      <td><font color="#990000">*[must be given]</font></td>
    </tr>
  </table>
  <p><fieldset><legend>Selection procedure</legend>
  <p> 
    <input type="checkbox" name="test" value="y">
    Test</p>
  <p> 
    <input type="checkbox" name="gd" value="y">
    GD</p>
  <p> 
    <input type="checkbox" name="inter" value="y">
    INTERVIEW</p>
  <p align="center">
    <input type="submit" name="Submit" value="Submit">
  </p>
  </fieldset>&nbsp;</p><p align="left">&nbsp;
  </form>
<%
  if (not request("visit")="") then
    if request("package")="" then
	 package="null"
	 else package=request("package")
	 end if
	 if request("stud_rec")="" then
	 stud_rec="null"
	 else stud_rec=request("stud_rec")
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
	insert_string= "select cname from company c where c.cname='"+ request("company")+"' and c.rec_hist is null"
  call oRs.open(insert_string, oConn)
  if oRs.eof then
   insert_string="insert into table(select c.rec_hist from company c where c.cname='"+request("company")+"') values("& package&"," &stud_rec& ",to_date('"+request("visit")+"','dd/mm/yy'), select_proc('"+tests+"','"+gd+"','"+inter+"'))"
  else
  insert_string="update company set rec_hist=recruit_tab(recruit_history("& request("package")&"," & request("stud_rec")& ",to_date('"+request("visit")+"','dd/mm/yy'), select_proc('"+tests+"','"+gd+"','"+inter+"'))) where cname='"+request("company")+"'"        
  end if
  oRs.close
  response.write("Data has been inserted successfully")
  oRs=oConn.execute(insert_string) 
  end if
  
  %>
<hr size="1" color="#0000CC" />
<p>Insert into: <a href="inscontact.asp">Contact </a>| <a href="inslocation.asp">Location</a> 
  | <a href="insertcomp.asp">Company</a>| <a href="insfield.asp">Field</a> | <a href="insstudent.asp">Student 
  details</a></p>
<p><font color="#0000CC" size="-1">Copyright &copy; DU-MCA-02. All rights reserved</font></p>
</body>
</html>
