# include "spa.c"
# include "connected.c"
# include "mst.c"
# define INFINITY 20000

main()
{
 int graph[50][50],weight[50][50],precede[50],distance[50],closest[50];
 int node,i,j,s,t,pd,status,path,all,root1;
 char ch;
 printf ("please enter the no of nodes less than 50\n");
 scanf ("%d",&node);
 printf("please enter 1 for conn 2 for finding sp \n");
 scanf ("%d",&status);
/* if (ch=='i')
 {*/
   for (i=0;i<node;i++)
   {
   printf ("please enter the nodes to which % is connected:",i); 
   for (j=0;j<node;j++)
     {
/*        printf ("please enter whether % is connected ",j);*/
    scanf("%d",&graph[i][j]);
     }
   }
 /*}
 else
 {
   printf ("please enter the no of arcs  you want \n");
   scanf ("%d",&arc);
   for (i=0;i<node;i++)
     {
      ratio=(float)arc/node;
      ran=(int)(ratio*5);
      ran1=(float)rand()/2147483648;
*/
switch (status)
{

case 1:
connect (graph,node)?printf ("connected\n"):printf ("notconnected");
break;

case 2:
printf("please enter the nodes b/w which minimum distance is to be found\n");
scanf ("%d %d %d",&s,&t,&all);
shortpath(graph,s,t,distance,precede,node,all);
for (i=0;i<node;i++)
{
if (i==s)continue;
if (all==1)i=t;
printf ("the dist b/w %d and %d is=%d\n",s,i,distance[i]);
printf ("the path b/w %d and %d is:%d ",s,i,i);
path=i;
while (precede[path]!=s)
{
printf("%d ",precede[path]);
path=precede[path];
}
printf("%d \n",s);
if (all==1)break;
}
break;

case 3:
printf("please enter the root of spanning tree\n");
scanf ("%d",&root1);
puts("Hello");
mst(graph,root1,node,closest);
printf("the min wt spanning path is:");
for (i=0;i<node;i++)printf("%d",closest[i]);

}
}
#include "transclose.c"
# define INFINITY 20000
# define MEMBER 1
# define NONMEMBER 0
# define TRUE 1
# define FALSE 0

void shortpath (weight,s,t,distance,precede,node,all)
int weight [][50],precede[],distance[];
int s,t,node,all;
{
int perm[50],adj[50][50],path[50][50];
int current,i,k,dc,smalldist,newdist,flag=1;

for (i=0;i<node;i++)
   for (k=0;k<node;k++)
       if (weight[i][k]==INFINITY)adj[i][k]=FALSE;
       else adj[i][k]=TRUE;

       transclose(adj,path,node);
       if ((all==1)&&(path[s][t]==FALSE))
       {
       printf ("there is no path from %d to %d\n",s,t);
       exit();
       }
       else
       for (i=0;i<node;i++)
       {
       if (i==s)continue;
       if (path[s][i]==FALSE)
       {
       printf ("there is no path from %d to %d\n",s,i);
       flag=0;
       }
       }
       if (flag==0)exit();
for (i=0;i<node;i++)
    {
      perm[i]=NONMEMBER;
      distance[i]=INFINITY;
    }
perm[s]=MEMBER;
distance[s]=0;
current=s;
while((current!=t)&&(all||check(perm,node)==FALSE))
  {
     smalldist=INFINITY;
     dc=distance[current];
     for (i=0;i<node;i++)
     if (perm[i]==NONMEMBER)
       {
	 newdist=dc+weight[current][i];
	 if (newdist < distance[i])
	  {
	    distance[i]=newdist;
	    precede[i]=current;
          }
	 if (distance[i] < smalldist)
	  {
	    smalldist=distance[i];
	    k=i;
          }
        }
     current=k;
     perm[current]=MEMBER;
   }
}
 
 int check(perm,node)
 int perm[50];
 int node;
 {
    int i;
    puts("Hello");
    for (i=0;i<node;i++)
    if (perm[i]==NONMEMBER)return (FALSE);
    return(TRUE);
 }
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
#define TRUE 1
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
