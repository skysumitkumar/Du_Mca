#include<stdio.h>
struct{
		int sal;
		int id;
		}emp[10], *empptr;
main()
{
  int index;
  clrscr();
  for(index=0;index<10;index++)
  {
  emp[index].sal = (index+1)*1000;
  emp[index].id=index;
  }
  empptr=emp;
  empptr++;
  printf("%d",empptr->sal);
  return 0;
}
