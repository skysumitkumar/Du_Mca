//program for gauss elimination

#include <stdio.h>
#include <math.h>
int count=0;

int elim(int, float [][10], float [],int []);
int pivot(int n,float a[10][10],float b[10],int k,int p[10]);
int backsub(int ,float [][10],float [], float [], int []);
float deter(int, float [][10], int [], float[]);

main()

{

                               
int i,j,n,p[10]={0,1,2,3,4,5,6,7,8,9};
float a[10][10], b[10], x[10],max[10],det=0;

printf("\n Enter the number of Equations : ");
scanf("%d", &n);
 for(i=0;i<n;i++)
   {
     printf("\nEnter the Coefficients in Eqn. %d:",i+1);
     for(j=0;j<n;j++)
	 scanf("%f",&a[i][j]);    //Input the A Matrix
     printf("\nEnter the RHS of Eqn. %d:",i+1);
     scanf("%f",&b[i]);      // Input the b Matrix
  //   printf("%f",b[i]);
   }

for(i=0;i<n;i++)				//scaling of the matrix
{
   max[i]=fabs(a[i][0]);
   for(j=1;j<n;j++)
      {
	if(fabs(a[i][j]) > max[i])
	  max[i]=fabs(a[i][j]);
      }

   for(j=0;j<n;j++)
	{	
	a[i][j]/=max[i];
	}
   b[i]/=max[i];
}	

elim(n,a,b,p);
backsub(n,a,b,x,p);
det=deter(n,a,p,max);

printf("\n");

printf("\n");
printf(" The solution is:\n");
for(i=0;i<n;i++)
	printf("x%d=%f\t",i+1, x[i]);
printf("\n\n The Determinant of the coefficient matrix is:\t"); 
printf("%f",det);

}
elim(int n, float a[10][10], float b[10],int p[10])
{
  int i,j,k;
  for(k=0;k<n-1;k++)
     {
	pivot(n,a,b,k,p);
	for(i=k+1;i<n;i++)
	{
	    a[p[i]][k]/=a[p[k]][k];
	    for(j=k+1;j<n;j++)
		a[p[i]][j]=a[p[i]][j]-(a[p[i]][k]*a[p[k]][j]);
	    b[p[i]]-=a[p[i]][k]*b[p[k]];
	}
     }
return;
}
pivot(int n,float a[10][10],float b[10],int k,int p[10])
{
  int pi,i,j,l=0;
  float large,temp;
  pi=k;
  large=fabs(a[p[k]][k]);
  for(i=k+1;i<n;i++)
   {
    if(fabs(a[p[i]][k])>large)
      {
	large = fabs(a[p[i]][k]);
	pi=p[i];
	l=i;
      }

   }
  if(pi!=k)
   {
    count++;
    temp=p[k];
    p[k]=pi;
    p[l]=temp;
   }
   for(i=0;i<n;i++)
   return;
}
backsub(int n,float a[10][10],float b[10], float x[10], int p[10])
{

  int i,j,k;
  float sum;
  x[n-1]=b[p[n-1]]/a[p[n-1]][n-1];

  for(k=n-2;k>=0;k--)
   {
    sum=0.0;
      for(j=k+1;j<n;j++)
	sum=sum+a[p[k]][j]*x[j];
      x[k]=(b[p[k]]-sum)/a[p[k]][k];
   }
  return;
}
float deter(int n, float a[10][10], int p[10],float max[10])
{
  int i;
  float det=1;

  for(i=0;i<n;i++)
   det=det*a[p[i]][i]*max[i];

  det=det*pow(-1,count);
  return det;
}
	


		


	










 
