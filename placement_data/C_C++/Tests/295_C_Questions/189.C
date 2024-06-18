void main()
{struct s1
	 {
	       char *str;
	       struct s1 *ptr;
	 };
  static struct s1 arr[] = {      {"Hyderabad",arr+1},
				  {"Bangalore",arr+2},
				  {"Delhi",arr}
			   };

  struct s1 *p[3];
  int i;
  for(i=0;i<=2;i++)
    p[i] = arr[i].ptr;
  printf("%s  ",(*p)->str);
  printf("%s ",(++*p)->str);
  printf("%s ",((*p)++)->str);
  }



