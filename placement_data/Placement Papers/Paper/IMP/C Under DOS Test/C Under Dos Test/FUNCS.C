#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

#define XZERO 320
#define YZERO 240

double sn(double x)
 {
	return(sin(x));
 }
double cs(double x)
 {
   return(cos(x));
 }

void clr1()
 {
   int i,j;

   for (i=50;i<58;i++)
	for (j=57;j<70;j++)
	  putpixel(j,i,5);
 }
void clr2()
 {
   int i,j;

   for (i=50;i<58;i++)
	for (j=145;j<160;j++)
	  putpixel(j,i,5);
 }

void makegraph()
 {
	int i;

	for (i=-300;i<300;i++)
	   putpixel(i+XZERO,YZERO,6);
	for (i=-240;i<240;i++)
	   putpixel(XZERO,YZERO-i,6);
 }


void main()
 {
	int gd=DETECT,gm,x,i,s,c,maxx,s1=1,c1=1,scale;
	char *n1,*n2;
	double y;

	initgraph(&gd,&gm,"d:\\turbo\\bgi");

	makegraph();
	outtextxy(50,50," _ SIN(x) + _ COS(x)");
	outtextxy(50,400," X : exit");
	outtextxy(50,420," C : change");

	for (i=-180;i<180;i++)
	  {
	   y=sn((double)(i)*22/(180*7))+cs((double)(i)*22/(180*7));
	   putpixel(XZERO+i,YZERO-(int)(10*y),3);
	  }
	while(1)
	 {
	   switch(c=getch())
		 {
		  case 'c':
		  case 'C':outtextxy(50,40,"enter the values");
				   clr1();
				   //n1=malloc(sizeof(char));
				   (*n1)=getch();(*(n1+1))='\0';
				   clr2();
				   outtextxy(58,50,n1);
				   s=atoi(n1);
				   fflush(stdin);
				   //n2=malloc(sizeof(char));
				   (*n2)=getch();(*(n2+1))='\0';
				   outtextxy(150,50,n2);
				   c=atoi(n2);
				   for (i=-180;i<180;i++)
				   {
					  y=s1*sn((double)(i)*22/(180*7))+c1*cs((double)(i)*22/(180*7));
					  putpixel(XZERO+i,YZERO-((int)(10*y)),0);
					  delay(2);
				   }
				   makegraph();
				   maxx=atan((double)s/(double)c);
				   scale=abs(((s*sn((double)maxx)+c*cs((double)maxx))/200))+1;
				   for (i=-180;i<180;i++)
				   {
					  y=s*sn((double)(i)*22/(180*7))+c*cs((double)(i)*22/(180*7));
					  putpixel(XZERO+i,YZERO-((int)(10*y)/abs(scale)),3);
					  delay(2);
				   }
				   s1=s;c1=c;
				   break;
		  case 'x':
		  case 'X':closegraph();
				   exit(1);
		 }
	   }
 }