#include<stdio.h>
#define print(exp) printf(#exp /* # */ "=%7.0f\n",exp)
main()
{
	float x=22,y=7;
	print(x/y);
}