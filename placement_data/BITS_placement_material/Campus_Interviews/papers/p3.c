//Program To Solve AX=b using Gauss-Seidel Method

#include<stdio.h>
#include<math.h>



main( )

{
        
 int i=0,j=0,n=0,k=0,it=0,c=0,t=0;
 float s=0,lr[10]={0};
 float a[10][10]={0},ar[10][10]={0},b[10]={0},l[10]={0},x[10]={0},br[10]={0};
// clrscr();
 printf("\n Enter The Number Of Equations:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
   {
     printf("\nEnter the Coefficients in Eqn. %d:",i+1);
     for(j=0;j<n;j++)
	 scanf("%f",&a[i][j]);    //Input the A Matrix
     printf("\nEnter the RHS of Eqn. %d:",i+1);
     scanf("%f",&b[i]);      // Input the b Matrix
  //   printf("%f",b[i]);
   }
 printf("\n Enter The Number Of Iterations:");
 scanf("%d",&it);
 for(i=0;i<n;i++)
   {
     printf("\n Enter the initial approximation for x%d:",i+1);
     scanf("%f",&x[i]);
   }
 //Finding The Largest No. In Each Row
 for(i=0;i<n;i++)
  {
    lr[i]=fabs(a[i][i]);
    for(j=0;j<n;j++)
      {if(i==j)
       continue;
       if(fabs(a[i][j])>lr[i])
	 {
	   lr[i]=fabs(a[i][j]);
	 }
      }
   }
   for(i=0;i<n;i++)
     if(lr[i]==fabs(a[i][i]))
       c+=1;


 //Rearrangement is done if the matrix A is not SRDD
 if (c!=n)
   {
     for(i=0;i<n;i++)
       {
	 l[i]=fabs(a[i][i]);
	 for(j=0;j<n;j++)
	   {
	     if(fabs(a[i][j])>=l[i])
	       {
		 l[i]=fabs(a[i][j]);
		 if(l[i]==lr[i])
		    {
		       t=1;
		       for(k=0;k<n;k++)
			 {
			   ar[j][k]=a[i][k];
			   br[j]=b[i];
			 }
		    }
	      }

	  }
      }
  }
 if(t)
  {
    printf("\n Rearranged Coefficients along with respective b's(To Make In SRDD Form) are:");
    for(i=0;i<n;i++)
     {
       b[i]=br[i];
       printf("\n\n");
       for(j=0;j<n;j++)
	 {
	   a[i][j]=ar[i][j];
	   printf("%f\t",a[i][j]);
	 }
       printf("%f",b[i]);
     }
  }
 c=1;
 //calculate x[i] until iterations are complete
 while(it--)
  {
    for(i=0;i<n;i++)
     { s=b[i];
       for(j=0;j<n;j++)
	{
	  if(i==j)
	   continue;
	  s=s-a[i][j]*x[j];
    //	  printf("\n%f",s);
	}
      x[i]=s/a[i][i];
     }
   // c=1;
    printf("\n\n Solution After Iteration %d:\n",c);
    for(i=0;i<n;i++)
      printf("x%d = %f\t",i+1,x[i]);
    c++;
  }

}
