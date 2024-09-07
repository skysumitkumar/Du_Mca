#include<stdio.h>
float a=3.14,**z,**y,***x,****v,****w;
float** fun1(float*);
float**** fun2(float***);

 main()
{
/*int a,*b,**c,***d,****e;
a=10,b=&a;
c=&b;
d=&c;
e=&d;
printf("\na=%db=%pc=%pd=%pe=%p\n",a,b,*c,**d,***e);
printf("\n%d %d %d %d\n",a,a+*b,a+*b+**c,**c+***d+****e);*/


int i=4;
int *j;
void *k;




k=(int*)j=&i;
printf("%p %p\n",j,k);
j++;
((int *)k)++;
printf("%p %p \n",j,k);

//printf("%d\n",*k);


/*char c,*cc;
int i;
long l;
float f;
c='Z';
i=15;
l=7777;
f=3.14;
cc=&c;

printf("%u %u %u %u\n",&c,&i,&l,&f);


printf("\nc=%c cc=%u",*cc,cc);
cc=&i;
printf("\ni=%ld cc=%u",*cc,cc);

cc=&l;
printf("\nl=%ld cc=%u",*cc,cc);
cc=&f;
printf("\nf=%f cc=%u",*cc,cc);




3221221751 3221221740 3221221736 3221221732
 
c=Z cc=3221221751
i=15 cc=3221221740
l=97 cc=3221221736
f=-1.996434 cc=134513318*/

/*int c=10,d=20;
printf("\nbefore swap,c=%d d=%d",c,d);
swap(&c,&d);
printf("\nafter swap,c=%d d=%d",c,d);*/

/*int a=5,*aa;
aa=&a;
a=power(&aa);
printf("\na=%daa=%u\n",a,aa);*/

/*int i=3;
float f=3.50,*prod;
float* multiply(int,float);
prod=multiply(i,f);
printf("\nprod=%u value at address=%f\n",prod,*prod);*/


/*int i=10,j=20,k=89,diff;
diff= &k-&i;
printf("\naddress of i=%u address of j=%u\n",&i,&k);
printf("\ndifference=%d\n",diff);*/
/* int*i,*j;
j=i*2;
printf("\nj=%u",j);*/
/*int i=10;
printf("\nvalue of i=%d address of i=%u",i,&i);
&i=7200;*/


//clrscr();
//z=fun1(&a);
//printf("%u %f",z,**z);



/*int a=10,b=20;
printf("addresses in main add of a=%u add of b=%u",&a,&b);
printf("main before swap,a=%d,b=%d",a,b);
swap1(a,b);
printf("main after swap,a=%d,b=%d",a,b);*/








}
swap1(int a,int b)
{printf("addresses in swap1 add of a=%u add of b=%u",&a,&b);
    printf("swap1 before swap,a=%d,b=%d",a,b);
change(a,b);
printf("swap1 after swap,a=%d,b=%d",a,b);
}



change(int a,int b)
{int t;
printf("addresses in chage add of a=%u add of b=%u",&a,&b);
  printf("change before swap,a=%d,b=%d",a,b);


t=a;
a=b;
b=t;
printf("change after  swap,a=%d,b=%d",a,b);
}
float** fun1(float* z)
{y=&z;v=fun2(&y);
return(**v);
}

float**** fun2(float*** x)
{w=&x;
return(w);
}


swap(int*cc,int**dd)
{
exchange(&cc,dd);

}
exchange(int**cc,int*dd)
{
int t;
t=**cc;
**cc=*dd;
*dd=t;






}


power(int** ptr)
{int b;
b=**ptr * **ptr;
return b;
}

float* multiply(int ii,float ff)
{float product;
product=ii*ff;
printf("product=%f address of product=%u\n",product,&product);
return(&product);

}
