#include<stdio.h>
#define merge(front,back) front ## "" ## "" ## "" ## back ## "\0"
main()
{
 	printf("%s",merge("hello\\0","\World")"""world");
}