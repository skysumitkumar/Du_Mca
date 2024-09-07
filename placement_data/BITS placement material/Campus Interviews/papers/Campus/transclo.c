void transclose (adj,path,node)
int adj[][50],path[][50];
int node;
{
  int i,j,k;
  for (i=0;i<node;i++)
    for (j=0;j<node;j++)
      path[i][j]=adj[i][j];
  for (k=0;k<node;k++)
     for (i=0;i<node;i++)
       if (path[i][k]==TRUE)
	 for (j=0;j<node;j++)
	   path[i][j]=path[i][j]||path[k][j];
}
