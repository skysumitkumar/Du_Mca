# define CONNECTED 1
# define NOTCONNECTED 0

int connect(graph,node)
int graph[50][50];
int node;
{
    int i,k,list=0,no_vert=1,adj=1,root=0,count=1;
    int conn[50],rootlist[50];
    rootlist[0]=0;
    for (i=0;i<node;i++) conn[i]=-1;
    conn[0]=root;
    while (no_vert<node)
     {
	while (adj !=0)
          {
	     adj=0;
	     for (i=0;i<node;i++)
	       {
		 if ((graph[root][i]==1) && (conn[i]==-1))
		 {
		   adj++;
		   no_vert++;
		   conn[i]=root;
		   for (k=0;k<node;k++)
		      graph[root][k]=graph[i][k]||graph[root][k];
                 }
               }
          }
      if (no_vert <node)
	 {
	    for (i=0;i<node;i++)
	      if (conn[i]==-1)
		{
		   rootlist[++list]=root=i;
		   adj=1;
		   count++;
		   no_vert++;
		   conn[i]=root;
		   break;
               }
        }
 }
   for (i=0;i<count;i++)
   {
       printf ("nodes in %d connected component:",i); 
       for (k=0;k<node;k++)
       {
          if (conn[k]==rootlist[i])printf("%d ",k);
	  }
       printf("\n");
   }
   if (count==1)return(CONNECTED);
   else return(NOTCONNECTED);
}
