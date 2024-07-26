swap(int a,int b)
{
  a=a+b;
  b=a-b;
  a=a-b;
  return 0;
}

void main()
{
  int x=3;
  int y=4;
  swap(x,y);
  printf("\n%d %d ",x , y);
}
