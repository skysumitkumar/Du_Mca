<%@ Language =JScript %>
<html>

<head>
<meta http-equiv="Content-Language" content="en-us">
<meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
<meta name="GENERATOR" content="Microsoft FrontPage 5.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
<title>INSERT New Student DATA</title>

</head>

<body bgcolor="#DC1436">

<form name="genForm" Method = "POST" ACTION = "insert_students1.asp">
  <table border="1" cellpadding="0" cellspacing="0" width="100%">    
    <tr>
      <td width="50%">Student Roll Number:</td>
      <td width="100%"> <input type="text" name="studentnumber" size="10"></td>
    </tr>
    <tr>
      <td width="50%">Student Name:&nbsp;</td>
      <td width="200%"> <input type="text" name="studentname" size="40"></td>
    </tr>   
    <tr>
      <td width="40%">Student Marks:</td>
      <td width="100%"> <input type="text" name="studentmarks" size="15"></td>
    </tr>    
    <tr>
      <td width="40%">Student Grade :</td>
      <td width="100%"><select size="1" name="studentgrade" tabindex="5">
          <option>A</option>
          <option>B</option>
          <option>C</option>          
          <option>D</option>
    </tr>    
  </table>  
   <input type="submit" value="Submit"><input type="reset" value="Reset">	
</form>
<hr>
<!-- Define Variables to be used -->


<%
	var oConn;		
	var oRs;			
	var snumber;
	var sname;
	var smarks;
	var sgrade;
%>
<!-- Assign the form field values -->
<%	
	sno = Request.Form("studentnumber");
	sname = Request.Form("studentname");
	smarks = Request.Form("studentmarks");
	sgrade = Request.Form("studentgrade");	       
%>
<%
	// Build the query for insert
	if (sname > " ") 
	{
	var oRs;
	var insert_string;	
	// Build the insert_string as if you insert tuples in a relation using SQL*PLUS
	insert_string = "insert into student_relation(sno, sname,smarks,sgrade) values ('" + sno + "',";
	insert_string = insert_string +  "'"+sname+"'," ;
	insert_string = insert_string +  "'"+smarks+"'," ; 	
    insert_string = insert_string + "'"+ sgrade +"'"+ ")";	  

	// Following command will print the above insert string	
	Response.Write(insert_string);
	
	oConn = Server.CreateObject("ADODB.Connection");			
	
	// The Data Source SID in your tnsnames.ora file.Here it is myoracle.
	
	oConn.Open("Provider=MSDAORA.1;Data Source= shyam;User ID=SYSTEM; Password=MANAGER")
	oRs = oConn.Execute (insert_string);
	}
	else 
	{
	  Response.write("Please Enter student details");
	}
	
%>	

	
</body>

</html>