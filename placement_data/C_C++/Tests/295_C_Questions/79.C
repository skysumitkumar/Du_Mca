#include<stdio.h>
struct bitfield
{
    unsigned f1:1;
	unsigned f2:2;
	unsigned   :3;
	unsigned f4:4;
	unsigned f5:5;
	unsigned f6:6;
	unsigned f7:0;
	unsigned f8:8;
}bf;
main()
{
	bf.f1=1;
	bf.f2=0x3;
	bf.f4=0xff;
	bf.f5=-4;
 	bf.f6=0377;
	printf("%d %d %d %d %d %d",bf.f1,bf.f2,bf.f4,bf.f5,bf.f6,bf.f8);
}


