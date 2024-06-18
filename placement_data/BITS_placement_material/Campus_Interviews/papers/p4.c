//Program To Construct A Divided Difference Table for r+1 data points

#include <stdio.h>
#include <math.h>

main()
{
  int i=0,j=0,n=0,r=0,deg=0;
  float sum,newx,x[10]={0},d[10][10]={0},f[10][10]={0},coef[10]={0},gen=0;
  //Taking Input
  printf("\n Input No. of Data Points:");
  scanf("%d",&n);
  printf(" \nEnter the no. of points from which interpolating polynomial is to be constructed :");
  scanf("%d",&r);
  while(r>n)
   {
	printf("Error:the value of r cannnot be greater than n\n");
	printf(" \nEnter the no. of points again :");
	scanf("%d",&r);
  }


  for(i=0;i<n;i++)
   {
      printf("\n Enter the Values of x%d and f(x%d):\n",i,i);
      scanf("%f %f",&d[i][0],&d[i][1]);
   }
  printf("\n Enter The r+1 points:");
  for(i=0;i<r;i++)
   {
     scanf("%f",&x[i]);
   }
  fflush(stdin);
  printf("Enter the point at which interpolation has to be done:");
  scanf("%f",&newx);

  for(i=0;i<r;i++)
   { 
     for(j=0;j<n;j++)
        {
            if(x[i]==d[j][0])
               f[i][0]=d[j][1];
        }
   }

  // Calculating Divided Differences
  for(j=2;j<=n;j++)
   for(i=0;i<(n-j+1);i++)
    {
    d[i][j]=(d[i+1][j-1]-d[i][j-1])/(d[i+j-1][0]-d[i][0]);
    }
  printf("\n The Divided Difference Table Is:");

  for(i=0;i<n;i++)
    {
     printf("\n");
     for(j=0;j<(n-i+1);j++)
     printf("%.3f  ",d[i][j]);
    }
  for(i=1;i<r;i++)
    {
	 for(j=0;j<r-i;j++)
	 {
		f[j][i]=(f[j+1][i-1]-f[j][i-1])/(x[i+j]-x[j]);
	 }
    }

gen=0;
sum=1;
for(i=0;i<r;i++)
  {
	for(j=0;j<i;j++)
		sum*=(newx-x[j]);
	gen+=f[0][i]*sum;
	sum=1;
  } 
printf("\nthe value at the point %f is %f\n",newx,gen);
coef[1]=f[0][r-1];
coef[0]=f[0][r-2]-x[r-2]*coef[1];
for(i=0;i<r-2;i++)
  {
     for(j=i+2;j>=0;j--)
        {
          if(j==i+2)
	    coef[j]=coef[j-1];
	  else if(j!=0)
	    coef[j]=coef[j-1]-x[r-3-i]*coef[j];
       	  else
	    coef[0]=f[0][r-3-i]-x[r-3-i]*coef[0];
        }
  }


for(i=r-1;i>=0;i--)
 {
   if(coef[i]!=0)
     {  
        deg=i; 
        break;
     }
  }
printf("\n The Degree of interpolating polynomial is:%d",deg);

for(i=deg;i>=0;i--)
printf("\nThe Coefficient of x to the power %d is : %f",i,coef[i]);

}
