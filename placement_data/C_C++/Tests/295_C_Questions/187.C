void main()
{
   typedef union
   {
     struct
     {
       char c1,c2;
     } s;
   long j;
   float x;
   } U;

U example;
example.s.c1 = 'a';
example.s.c2 = 'b';
example.j = 5;
printf("%c %c %d", example.s.c1, example.s.c2, example.j);
}


