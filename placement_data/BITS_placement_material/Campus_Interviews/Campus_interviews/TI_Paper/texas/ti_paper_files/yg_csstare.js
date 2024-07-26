<!--
ygagt=navigator.userAgent.toLowerCase();ygd=document;ygdom=(document.getElementById)?1:0;ygns=(ygd.layers)?1:0;ygns6=(ygdom&&navigator.appName=="Netscape");ygie=(ygd.all);ygwin=((ygagt.indexOf("win")!=-1)||(ygagt.indexOf("16bit")!=-1));ygmac=(ygagt.indexOf("mac")!=-1);ygnix=((ygagt.indexOf("x11")!=-1)||(ygagt.indexOf("linux")!=-1));
var ygar = new Array();
ygar[0]="<style type=\"text/css\">\n<!--\n";
if (ygns && ygwin){
ygar[1]=".ygbody,th,td,.ygbt,big{font-family:arial,helvetica,sans-serif;font-size:small;}body{background-color:white;}";
ygar[2]=".ygta,input{font-family:monospace;font-size:small;}";
ygar[3]="small{font-family:verdana,arial,sans-serif;font-size:x-small;}";
ygar[4]="big{font-size:medium;}";}
else if (ygns && ygmac){
ygar[1]=".ygbody,body,th,td,big{font-family:arial,helvetica,sans-serif;font-size:medium;}body{background-color:white;}";
ygar[2]="small{font-family:verdana,arial,sans-serif;font-size:small;}";
ygar[3]="big{font-size:big;}";}
else if (ygns && ygnix){
ygar[1]=".ygbody,body,th,td,.ygbt,big{font-family:helvetica,clean,sans-serif;font-size:medium;}body{background-color:white;}";
ygar[2]=".ygta,input,select{line-height:7px;font-family:monospace;font-size:small;}";
ygar[3]="small{line-height:10px;font-family:helvetica,clean,terminal,sans-serif;font-size:small;}";
ygar[4]="big{font-size:110%;}";}
else if (ygns6||(ygie && ygmac)){
ygar[1]=".ygbody,body,table,big {font-family:arial,helvetica,sans-serif;font-size:12px;}body{background-color:white;}";
ygar[2]="tr,th,td{font-size:12px;line-height:16px;}";
ygar[3]="small,small b,small a{font-family:verdana,arial,sans-serif;font-size:10px;line-height:14px;}";
ygar[4]="big,big b,big a{font-size:16px;line-height:20px;}";}
// percentages: IE PC
else{
ygar[1]="body,th,td,big{font-family:arial,helvetica,sans-serif;font-size:79%;}body{background-color:white;}";
ygar[2]="td{line-height:1.25em;}";
ygar[3]="small{font-family:verdana,arial,sans-serif;font-size:81%;line-height:1.25em;}";
ygar[4]="big{font-size:125%;line-height:1.15em;}";}
var ygarjoin = ygar.join('');
ygd.write (ygarjoin);	
ygd.write(".ygcw{color:white;}.ygcb{color:black;}.ygfa{font-family:arial,sans-serif;}.ygfv{font-family:verdana,arial,sans-serif;}.ygft{font-family:times,serif;}.ygtb{font-size:18px;}.ygtbw{font-size:18px;color:white;}\n-->\n<\/style>");
// -->
