#include<stdio.h>
dcm(char *str1,char *str2)
{
   char *first,*second;
   int index;
   for(index=0;str1[index];index++)
   {
	  first=&str1[1];
	  second=str2;
	  while(*second&& *second  == *first)
	  {
		first++;
		second++;
	  }
	  if(! *second)
		 return(index);
	}
	return(-1);
}
main()
{
  int i;
   clrscr();
   i=dcm("DATASYSTEM","DCM");
   printf("%d",i);
	  printf("%d",dcm("New DELHI","DELHI"));
 }