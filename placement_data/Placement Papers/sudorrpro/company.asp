<%@LANGUAGE="VBSCRIPT" %>
<html>
<head>
<title>Company details</title>
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
   on error resume next
   dim oConn,oRs,insert_string
    set oConn = Server.CreateObject("ADODB.Connection")			
	insert_string="select cname ,website,visiting_date visit ,established,initcap(ceo) ceo,profit,revenue,status,c.rec_policy.proc.test test,c.rec_policy.proc.gd gd,c.rec_policy.proc.interview inter ,c.rec_policy.pay pay,c.rec_policy.requirements require ,c.rec_policy.constraints cond from company c where cname='"+Request("compname")+"'"
	Call oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SCOTT; Password=TIGER") 
    Set oRs = Server.CreateObject("ADODB.Recordset")
	Call oRs.Open(insert_string,oConn)
	if err.number<>0 then
	ttle="Not Available"
	else
	ttle=ucase(oRs("cname"))
	end if
%>
<table width="745" height="830" border="0" align="left">
  <tr> 
    <td height="106" colspan="2" bgcolor="#0000CC"><table width="75%" border="0">
        <tr> 
          <td width="31%"><font color="#FFFFFF">Established on 
            <%
	   response.Write(oRs("established"))
	   %>
            </font></td>
          <td width="69%">&nbsp;</td>
        </tr>
      </table>
      <p align="left"><font color="#FFFFFF"> </font></p>
      <p align="center"><font size="+3"  face="Courier New, Courier, mono" color="#666666"><strong> 
        <%
    response.Write(ttle)
	%>
        </strong></font></p>
      <p align="center"><font color="#FFFFFF">
        <marquee>
        Company has reported a revenue of 
        <%
	   response.Write(oRs("revenue"))
	   %>
        with a profit of 
        <%
	   response.Write(oRs("Profit"))
	   %>
        </marquee></font>
      </p></td>
  </tr>
  <tr> 
    <td height="27" colspan="2" > <div align="justify"><font color="#0000FF" size="-1"><a href="home.html"> 
        </a></font> 
        <table width="100%" border="0">
          <tr> 
            <td height="21"><p><a href="welcome.asp">Home</a></p></td>
            <td><div align="right"><font color="#0000FF" size="-1"><a href="home.html">[Signout</a></font>]</div></td>
          </tr>
          <tr> 
            <td height="21" colspan="2"><div align="center"><font color="#000000"><strong>CEO</strong></font>: 
                <%
	   response.Write(oRs("ceo"))
	   %>
              </div></td>
          </tr>
        </table>
      </div></td>
  </tr>
  <tr> 
    <td width="80%" height="117"> <table width="49%" border="0">
        <tr> 
          <td width="51%" bgcolor="#99CCFF"><font color="#000000"><strong>Status 
            :</strong></font></td>
          <td width="35%" bgcolor="#CCCCCC"> 
            <%
   response.Write(ucase(oRs("status")))
 %>
          </td>
        </tr>
      </table>
      <p>&nbsp;</p></td>
    <td width="23%" rowspan="2"><table width="150" height="500" border="0"  align="right">
        <tr> 
          <td width="200" height="23" bgcolor="#99CCFF"><div align="center"><font color="#000000">Details 
              About </font></div></td>
        </tr>
        <tr> 
          <td height="487"bgcolor="#990000"><p align="center"><font color="#FFFF00">Addresses:</font></p>
            <form name="form1" method="post" action="location.asp">
              <p align="center"> 
                <select name="loc">
                  <%     
		        
		        insert_string="select cname, l.city city from company c, table(c.comp_location) l where cname='" + request("compname")+"'"
                Set oRs1 = Server.CreateObject("ADODB.Recordset")
	
				Call oRs1.open(insert_string,oConn)	
		        
				while not oRs1.eof
				val=oRs1("city")
				Response.Write("<option value="+val+">"+ucase(val)+"</option>")
                oRs1.movenext 
				wend
				
	     %>
                </select>
              </p><input type="hidden" name="Submit1"
        <%
		   Response.Write(" value="+Request("compname")+">")
		   %>
        
		      <p align="center"> 
                <input type="submit" name="Sub" value="Search">
            </form>
            <p align="center"><font color="#FFFF00">Recritment History :</font></p>
            <form name="form2" method="post" action="recruitment.asp">
              <p align="center"> 
                <select name="history">
                  <%   
		        call oRs1.close
		        insert_string="select to_char(h.visited_date,'dd/mm/yy') visited_date from company c, table(c.rec_hist) h where cname='" + request("compname")+"'"
	             call oRs1.open(insert_string,oConn)  
               while not oRs1.eof
				val=oRs1("visited_date")
				Response.Write("<option value="+val+">"+val+"</option>")
                oRs1.movenext 
				wend
				
	     %>
                </select>
              </p><input type="hidden" name="Submit1"
        <%
		   Response.Write(" value="+Request("compname")+">")
		   %>
        
        
		      <p align="center"> 
                <input type="submit" name="Sub" value="Search">
            </form>
            <p align="center"><font color="#FFFF00">Contact Details:</font></p>
            <form name="form3" method="post" action="contact.asp">
              <p align="center"> 
                <select name="cont">
                  <%      
		         call oRs1.close
		        insert_string="select d.hr_name hr_name from company c,table(c.contact_detail) d where cname='" + request("compname")+"'"
	             call oRs1.open(insert_string,oConn)
		        
				while not oRs1.eof
				val=oRs1("hr_name")
				Response.Write("<option value="+val+">"+ucase(val)+"</option>")
                oRs1.movenext 
				wend
				
	     %>
                </select>
              </p><input type="hidden" name="Submit1"
        <%
		   Response.Write(" value="+Request("compname")+">")
		   
		   %>
        
		      <p align="center"> 
                <input type="submit" name="Sub" value="Search">
            </form></td>
        </tr>
      </table></td>
  </tr>
   
  <td height="513"> <fieldset>
    <div align="center"> 
        <p align="center"> 
          <legend><font color="#000000"><strong>Current recritment policy</strong></font></legend>
        </p>
        <p align="center">&nbsp; </p>
    </div>
    <table width="92%" border="0">
      <tr> 
        <td width="32%" bgcolor="#99CCFF"><font color="#000000"><strong>Visiting 
          date:</strong></font> </td>
        <td width="21%" bgcolor="#CCCCCC"> 
          <%
	response.Write(oRs("visit"))%>
        </td>
        <td width="14%" bgcolor="#FFffcc">&nbsp;</td>
        <td width="17%" bgcolor="#99CCFF"><strong><font color="#000000">Pay:</font></strong> 
        </td>
        <td width="16%" bgcolor="#CCCCCC"> 
          <%
	response.Write(oRs("pay"))%>
        </td>
      </tr>
    </table>
      <p>&nbsp;</p>
      <p>&nbsp;</p>
    <table width="92%" border="0">
      <tr> 
        <td width="32%" bgcolor="#99CCFF"><strong><font color="#000000"><strong>Constraints</strong></font>:</strong> 
        </td>
        <td width="21%" bgcolor="#CCCCCC"> 
          <%response.Write(oRs("cond"))%>
        </td>
        <td width="14%" bgcolor="#FFffcc">&nbsp;</td>
        <td width="17%" bgcolor="#99CCFF"><font color="#000000"><strong>Requirements:</strong></font> 
        </td>
        <td width="16%" bgcolor="#CCCCCC"> 
          <%response.Write(oRs("require"))%>
        </td>
      </tr>
    </table>
      <p>&nbsp;</p>
      <p>&nbsp;</p>
    <table width="58%" border="0" align="center">
      <tr> 
        <td width="33%" height="24" bgcolor="#99CCFF"><font color="#000000">Testing 
          Procedure:</font></td>
        <td width="19%" bgcolor="#CCCCCC"><font color="#000000">Test:</font> 
          <%
	  on error resume next
   response.Write(ucase(oRs("test"))) 
   %>
        </td>
        <td width="21%" bgcolor="#CCCCCC"><font color="#000000">G.D.:</font> 
          <%
	  on error resume next
   response.Write(ucase(oRs("gd")))
    %>
        </td>
        <td width="27%" bgcolor="#CCCCCC"><font color="#000000">Interview:</font> 
          <%
	  on error resume next
   response.Write(ucase(oRs("inter")))
   
   %>
        </td></tr>
    </table>
      <p>&nbsp;</p>
      <p>&nbsp;</p>
      </fieldset>
    <p>&nbsp;</p></td>
     
</table>
<div align="center"><font size="+3" face="Courier New, Courier, mono" color="#0000CC"></font></div>
  
<p align="right"> </p> 
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>

<p>&nbsp;</p>
<fieldset>
<div align="center">
  <p align="center"> 
   
  </p>
</div>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<p>&nbsp;</p></fieldset>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left">&nbsp;</p>
<p align="left"><font color="#0000CC">Click here to visit the 
  <%

response.Write("<a href="+oRs("website")+">Website</a>")
oConn.close
%>
  </font> </p>


<p>&nbsp;</p>
<p>&nbsp;</p>
<hr size="1" noshade color="#3333FF" />
<p align="left"><font color="#0000FF" size="-1">Copyright &copy;DU-MCA-02. All 
  rights reserved.</font></p>
<p align="left">&nbsp;</p>
</body>
</html>
