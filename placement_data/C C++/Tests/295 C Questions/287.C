#include<stdio.h>
struct s
{
	char *st;
	struct s *sptr;
};
main()
{
	int i;
	struct s *p[3];
	static struct s a[]={{ "abcd",a+1 },
						{"pqrs",a+2},
						{"stuv",a } };
	for( i=0;i<3;i++ )
			p[i] = a[i].sptr;
	swap(*p,a);
    printf("%s %s %s \n",p[0]->st,(*p)->st, (*p)->sptr->st);
}
swap(p1,p2)
struct s *p1,*p2;
{
	char  *temp;
	temp = p1->st;
	p1->st = p2->st;
	p2->st = temp;
}