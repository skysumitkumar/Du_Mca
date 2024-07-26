//Program to solve the Equation f(x)=0, by Muller's Method
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ME 0.000001

main()

{ 
                        
	float funct(int n,float x,float *p);		//function prototype
	
	int i,n;
	float x0,x1,x2,x,f0,f1,f2,f;
	float h1,h2,a,b,c,*p;

	system("cls");

	printf("\nEnter the Highest degree of the polynomial-->");
	scanf("%d",&n);

	p=(float *)malloc((n+1)*sizeof(float));
	if(p==NULL)
	{
		printf("\nMemory allocation unsuccessful");
		exit(0);
	}
	for(i=0;i<=n;i++)
	{
		printf("Enter Coefficients of x[%d] :",i);
		scanf("%f",(p+i));
	}
	printf("\nInput Three Initial Points \n");
	scanf("%f %f %f",&x2,&x0,&x1);
	i=1;
	do
	{
	f0=funct(n,x0,p);
	f1=funct(n,x1,p);
	f2=funct(n,x2,p);

	h1=x1-x0;
	h2=x0-x2;

	//compute parameters a,b,c
	c=f0;
	a=((h2*f1)-(h1+h2)*f0+h1*f2)/(h1*h2*(h1+h2));
	b=(f1-f0-a*h1*h1)/h1;
	//printf("\n\n%f %f %f\n\n",a,b,c);
	
	if(b>0.0)
		x=x0-(2.0*c)/(b+sqrt(b*b-4*a*c));
	else
		x=x0-(2.0*c)/(b-sqrt(b*b-4*a*c));

	f=funct(n,x,p);
	//printf("\nf=%f\n",fabs(f));

	printf("\nIteration %d :x=%f",i++,x);
	if(x>x0 && x<x1)
	{       x2=x0;
		x0=x;
		x1=x1;
	}
       if(x<x0 && x>x2)
	{
		x2=x2;
		x1=x0;
		x0=x;
	}
	if(x>x1)
	{
		x2=x0;
		x0=x1;
		x1=x;
	}
	if(x<x2)
	{
		x1=x0;
		x0=x2;
		x2=x;
	}
	} while(fabs(f)>ME);

	printf("\n");
}

float funct(int n,float x,float *p)
{
	float f=0.0;
	int i;
	for(i=0;i<=n;i++)
		f=f+pow(x,i)*p[i];

	return(f);
}


