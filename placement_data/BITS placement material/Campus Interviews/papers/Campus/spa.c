# define MEMBER 1
# define NONMEMBER 0

void shortpath (weight,s,t,distance,precede,node,all,dest)
int weight [][50],precede[],distance[];
int s,t,node,all,dest;
{
int perm[50],adj[50][50],path[50][50];
int current,i,k,dc,smalldist,newdist,flag=1,temp1,temp2,temp3;


       temp2=dest?t:s;
       temp3=dest?s:t;

for (i=0;i<node;i++)
    {
      perm[i]=NONMEMBER;
      distance[i]=INFINITY;
    }
perm[temp2]=MEMBER;
distance[temp2]=0;
current=temp2;
while((current!=temp3)&&(all||check(perm,node)==FALSE))
  {
     smalldist=INFINITY;
     dc=distance[current];
     for (i=0;i<node;i++)
     if (perm[i]==NONMEMBER)
       {
	temp1=dest?weight[i][current]:weight[current][i];
	 newdist=dc+temp1;
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
    for (i=0;i<node;i++)
    if (perm[i]==NONMEMBER)return (FALSE);
    return(TRUE);
 }
