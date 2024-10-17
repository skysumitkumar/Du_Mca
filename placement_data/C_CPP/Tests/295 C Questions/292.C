main()
{
	struct ist
	{
		int x;
		int y;
	};
	struct list
	{
		int x;
		struct ist next;
	 }head;
	 head.x = 100;
	 head.next.x=10;
	 printf("%d %d", head.x,head.next.x);
}