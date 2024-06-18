#include <stdio.h>
main()
{
	enum _tag { left=10, right, front=100, back};
	printf("left is %d, right is %d, front is %d, back is %d",left,right,front,back);
}