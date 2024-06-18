#include<stdio.h>
#define BOOMA
main()
{
	int a=10;
	#ifdef BOOMA
	#if sizeof(a)
		printf("bye");
	#elif
		printf("tata");
	#endif
	#endif
	printf(" happy Working");

}
