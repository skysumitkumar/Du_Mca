#include<stdio.h>
main()
{
	enum tag{low='a',high='b',medium='c'};
	char try=low;
	printf("Size=%d",sizeof(tag));
	switch (try)
	{
		case 'a':printf("aaa");
		case 'b':printf("bbb");
		case 'c':printf("ccc");
	}
}