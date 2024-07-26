#include<stdio.H>
main()
{
	enum status{low=10,medium=low+10,high=low+20};
	enum status rain;
	rain=low;
	printf("Rain=%d temp=%d",rain, medium);
}