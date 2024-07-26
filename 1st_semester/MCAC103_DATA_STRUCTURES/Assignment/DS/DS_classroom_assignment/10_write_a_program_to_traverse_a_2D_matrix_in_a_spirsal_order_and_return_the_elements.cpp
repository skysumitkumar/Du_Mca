#include <iostream>
using namespace std;
int main(void)
{
	int i,j,k,m,n,rStart,cStart,rEnd,cEnd;

	cout<<"Enter value of m (rows): ";
	cin>>m;
	cout<<"Enter value of n (columns): ";
	cin>>n;
    int a[m][n];

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			cin>>a[i][j];
		cout<<endl;
	}

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			cout<<a[i][j];
		cout<<endl;
	}
	cout<<endl;
    cout<<"Traverse of 2d matrix in spiral order is "<<endl;
	for(rStart=0,cStart=0,rEnd=m-1,cEnd=n-1; rStart<=rEnd && cStart<=cEnd; rStart++,cStart++,rEnd--,cEnd--)
	{
      	for(k=cStart; k<=cEnd; k++) 
			cout<<a[rStart][k];
		for(k=rStart+1; k<=rEnd; k++) 
			cout<<a[k][cEnd];
		if(rStart<rEnd)
			for(k=cEnd-1; k>=cStart; k--)
				cout<<a[rEnd][k];
		if(cStart<cEnd)
			for(k=rEnd-1; k>=rStart+1; k--)
				cout<<a[k][cStart];
	}
	return 0;
}
// #include<iostream>
// using namespace std;
// #define MAX 20
// int main(void)
// {
// 	int a[MAX][MAX],i,j,n,start,end;
// 	cout<<"Enter value of n : ";
// 	cin>>n;

// 	j=1;
// 	for(start=0,end=n-1; start<=end; start++,end--)
// 	{
// 		for(i=start; i<=end; i++)
// 			a[start][i]=j++;
// 		for(i=start+1; i<=end; i++)
// 			a[i][end]=j++;
// 		for(i=end-1; i>=start; i--)
// 			a[end][i]=j++;
// 		for(i=end-1; i>=start+1; i--)
// 			a[i][start]=j++;
// 	}

// 	for(i=0; i<n; i++)
// 	{
// 		for(j=0; j<n; j++)
// 			cout<<a[i][j];;
// 		cout<<endl;
// 	}
// 	cout<<endl;
// 	return 0;
// }