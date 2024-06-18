compute(int m , int n)
{
 if(m==0)
 return(n+1);
 else
  {
   if(n==0)
   compute(m-1,1);
   else
   compute(m-1,compute(m,n-1));
   }

}
main()
{
   int i;
   i=compute(2,3);
   printf("\n%d",i);
}
