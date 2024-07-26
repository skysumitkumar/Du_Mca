#define PRINT(int) printf( "int = %d ", int)
main()
{
	int x=03,y=02,z=01;
	PRINT (x | y & ~z);
	PRINT (x & y && z);
	PRINT (x ^ y & ~z);
}