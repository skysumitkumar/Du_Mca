#define DESHAWCURRENTDEBUGLEVEL 1
void main(void)
{
	int i = 10 ;
	int j = 15 ;
	#ifdef DESHAWCURRENTDEBUGLEVEL
			printf("%d\n",i);
	#else
			printf("%d\n",j);
	#endif
}