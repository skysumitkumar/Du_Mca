void main()
{
     int x;
     printf("enter a number ");
     scanf("%d",&x);
     printf(" the square root is %d",squareroot(x));
     getchar();
     getchar();
}
     

int squareroot(int n)
{
   double old = 0 ;
   double newval = n ;
 
   while(old != newval)  
   {
 
    old = newval ;
    newval =  (old + n/old) / 2 ;
    printf("%lf %lf \n",old,newval);
   }
 
   return newval;
}
