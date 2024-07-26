void wra (weight,short2,node)
int weight[][50],short2[][50];
int node;
{
  int i,j,k;
  int short1[50][50];
  for (i=0;i<node;i++)
  {
    printf("\n");
    for (j=0;j<node;j++)
      printf("%d to %d=%d ",i,j,short1[i][j]=short2[i][j]=weight[i][j]);
      printf("\n");
      }
  for (k=0;k<node;k++)
   {
     for (i=0;i<node;i++)
	 for (j=0;j<node;j++)
	 {
	   if (i==j)continue;
	   short1[i][j]=short2[i][j]<=short2[i][k]+short2[k][j]?short2[i][j]:short2[i][k]+short2[k][j];
	 }
     for (i=0;i<node;i++)
	 for (j=0;j<node;j++)
	   short2[i][j]=short1[i][j];
}
}
