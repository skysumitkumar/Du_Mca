function questmenu( cName,nQuest,cTitle,pTip,catLink,cCat,mFlg)
{ 
var sep=" | ";          // seperator symbol with space
var hColor="orange";   // highlighting color
var minLink=5;        // minimum link to display more>> link
var overclr="orange"; // mouse over color
var txtclr="#FFFFFF"  // link text color  white default
var sepclr="black"  // seperator color

//getting selected link
var loc= window.location;
var len=String(loc).length;
var ls=String(loc).substring(len-4, len- 5);
document.write("<style>a.whitelink {color: "+txtclr+"; TEXT-DECORATION: none }")
document.write("a.whitelink:visited {text-decoration: none;color: "+txtclr+";}")
document.write("a.whitelink:hover{COLOR: "+overclr+";}")
document.write("</style>")
document.write("<table width=777 bgcolor=#3468EE height=7><tr><td>")
document.write("<a class=whitelink href="+cName+".htm>")
document.write("<font face=\"Microsoft Sans Serif\" size=4 >")
document.write(cTitle +"</a></font></td>")
document.write("<td valign=bottom><font color=#FFFFFF> Test Paper &nbsp;&nbsp;</font>")

for(i=1;i<=nQuest;i++)
{
if(ls==i)
{
 document.write("<font color="+hColor+">0"+i)
}
else
{
document.write("<a class=whitelink href=" + cName+i+".htm>0"+i+"</a>")
}
document.write("<font color="+sepclr+">"+sep+"</font>" )
}

if(mFlg==1)
document.write("<a class=whitelink href=../zip.htm> More >></a> </td>")

if(pTip!=0)
{document.write("<td valign=bottom width=110>")
document.write(" <a class=whitelink href=" + cName+"tips.htm>Placement Tips</a> </td>")
}
document.write("</tr></table>")//


document.write("</td></tr><tr>	<td  align='left' valign='top' width='100%'><img border='0' src='../../imgnew/san.gif' width='1' height='1'></td>")
			document.write("</tr><tr>	<td height='1' align='left' bgcolor='#E7E7E7' width='100%'><table border=0 width='777' cellspacing='0' cellpadding='0' height='22'>")
          document.write("<tr><td width='600' height='22'>&nbsp;&nbsp; <a href='../../index.htm'>Home</a> &gt;&gt; <a href='../papers.htm'> Placement Papers</a> &gt;&gt;")
          document.write("<a href='../"+catLink+".htm'>"+cCat+"</a>&gt;&gt; <a href='"+cName+".htm'>"+cTitle+"</a></td>")
          document.write("<td width='120' height='22'><p align='right'><a href='../../directory/company.asp'>IT Companies List</a></p></td></tr></table>")

}