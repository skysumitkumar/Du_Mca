#define PRINTIFLESS(x,y) if((x) < (y)) printf("First is smaller"); else
 main()
{
  int i = 2, k =1;
  if(i>0 && k>0)
	PRINTIFLESS(i,k);
  else  printf("Numbers not greater than 0\n");
}