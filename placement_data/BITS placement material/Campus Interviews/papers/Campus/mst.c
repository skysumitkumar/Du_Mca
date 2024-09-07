#define INFINITY1 30000

mst (weight,root1,node,close)
int weight[][50],close[50];
int root1,node;
{
 int i,j,root,current,mindist,count=0;
 int adj[50][50],distance[50],closest[50];

 root=root1;
 for(i=0;i<node;i++)
    for (j=0;j<node;j++)
      if (weight[i][j]==INFINITY)adj[i][j]=0;
      else adj[i][j]=1;

if (!connect(adj,node))
{
  printf("graph is not connected \n");
  exit();
}

 for (i=0;i<node;i++)
    distance[i]=weight[root][i];
  
  distance[root]=INFINITY1;
  close[count++]=current=root;
  for (i=0;i<node;i++)
   {
    mindist=INFINITY;
     for (j=0;j<node;j++)
      if (distance[j]<mindist)
	{
	  current=j;
	  mindist=distance[j];
        }
	close[count++]=current;
   distance[current]=INFINITY1;
   for (j=0;j<node;j++)
     {
      if (adj[current][j]==FALSE)continue;
      if ((distance[j]<INFINITY1)&&(weight[current][j]<distance[j]))
	   distance[j]=weight[current][j];
    }
  }
}
