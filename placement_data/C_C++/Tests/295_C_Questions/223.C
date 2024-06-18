main()
{
	union
	{
		long l_e;
		float f_e;
	} u;
	long l_v;
	float f_v;
	l_v = u.l_e = 10;
	printf("%f ", (float)l_v);
	printf("%f ", u.f_e);
	f_v = u.f_e = 3.555;
	printf("%d ", (long)f_v);
	printf("%d ", u.l_e);
}