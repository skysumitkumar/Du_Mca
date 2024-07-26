main()
{
   char *str = "DCMDAT\0ASYSTEM";
   printf("\n%d %s ", strlen(str) , str);
   printf("\n%d %s ", strlen(str+7) , str+7);
  return 0;

}
