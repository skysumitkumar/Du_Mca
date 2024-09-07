void main()
{
	int i, n, m, b, x[25];
	int f1(int, int, int j[25]);
	for(i=0;i<25;i++)
			x[i] = i;
	i=0;
	m = 24;
	b=f1(i, m, x);
	printf("res %d\n",b);
}

int f1( int p, int q, int a[25])
{
	int m1,m2;
	if (q==0)
		return(a[p]);
	else
	{
		m1 = f1 (p, q/2, a);
		m2 = f1(p+q/2+1,q/2,a);
		if(m1<m2)
			return (m2);
		else
			return(m1);
	}
}
