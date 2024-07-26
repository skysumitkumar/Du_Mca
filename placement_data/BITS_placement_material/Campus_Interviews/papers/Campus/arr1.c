#include<stdio.h>
#include<string.h>
main()
{
struct marks 
{
     int sub[3];
     char name[10];
     int total;
     float avg;
 } student[20];
 int i,j,n;
 printf("enter the no of students\n");
 scanf("%d",&n);
 printf("enter the names of students also");
 printf("enter the marks of students\n");
 printf("              name   subject 1  subject 2  subject 3\n");
 for(i=0;i<n;i++)
 { 
    printf("student[%d]\t",i+1);
   scanf("%s",student[i].name);
 for(j=0;j<3;j++)
     scanf("%d",&student[i].sub[j]);
 printf("\n");
 }
 for(i=0;i<n;i++)
 {    student[i].total=0; 
      for(j=0;j<3;j++)
      student[i].total+=student[i].sub[j];
      student[i].avg=student[i].total/3;
 }
     printf("     name     total    average\n");
     for(i=0;i<n;i++)
{
     printf("student[%d]=",i+1);
 printf("%s",student[i].name);
 printf("\t%4d\t%f\n",student[i].total,student[i].avg);
 }
 }
/* program to handle strings */
main()
{
   int i,j,k;
   char c[10][10];
   printf(" how many names do u want to enter \n");
   scanf("%d",&k);
   for(i=1;i<=k;i++){
      printf("give the %d name: \n",i);
      scanf("%s",c[i]);
      }
    for(i=1;i<=k;i++){
         printf("%s",c[i]);
	 printf("\n");
     }
 }
