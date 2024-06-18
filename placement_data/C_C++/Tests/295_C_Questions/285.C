#include<stdio.h>
#include<string.h>
main()
{
struct emp1
{
	char *name;
	int age;
};
struct emp2
{
	char *cp;
	struct emp1 e1;
}e2 = {"ghi",{"jkl",123}};
struct emp1 e3 = {"rwer",2341};
printf("\n%s %d\n",e3.name,e3.age);
printf("\n%s %s %d\n",e2.cp,e2.e1.name,e2.e1.age);
}

