#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
#include<vector>
#include<limits.h>
class graph
{
    public:
    unordered_map<int,list<pair<int,int>>>adjList;
    void makeAdjList(int u,int v,int w,int dir)
    {
        if(dir==0)
        {
            adjList[u].push_back(make_pair(v,w));
            adjList[v].push_back(make_pair(u,w));
        }
        else
        {
            adjList[u].push_back(make_pair(v,w));
        }
    }
    vector<pair<pair<int,int>,int>> find(int vertices,int source)
    {
        vector<int>key(vertices,0);
        vector<bool>mst(vertices,0);
        vector<int>parent(vertices,0);
        for(int i=0;i<vertices;i++)
        {
            key[i]=INT_MAX;
            mst[i]=false;
            parent[i]=-1;
        }
        key[source]=0;
        parent[source]=-1;
        for(int i=0;i<vertices;i++)
        {
            int mini=INT_MAX;
            int u;
            //find min node
            for(int j=0;j<vertices;j++)
            {
                if(mst[j]==false&&key[j]<mini)
                {
                    u=j;
                    mini=key[j];
                }
            }
            //mark min node as true;
            mst[u]=true;
            //find all adjacent nodes
            for(const auto &pair:adjList[u])
            {
                if(mst[pair.first]==false&&pair.second<key[pair.first])
                {
                    key[pair.first]=pair.second;
                    parent[pair.first]=u;
                }
            }
        }
        vector<pair<pair<int,int>,int>>result;
        for(int i=source+1;i<vertices;i++)
        {
            result.push_back({{parent[i],i},key[i]});
        }
        return result;
    }
    void print(vector<pair<pair<int,int>,int>>&v)
    {
        for(const auto &pair:v)
        {
            cout<<pair.first.first<<" "<<pair.first.second<<" "<<pair.second<<endl;
        }
    }
};
int main()
{
    cout<<"Enter the no of vertices "<<endl;
    int vertices;
    cin>>vertices;
    cout<<endl<<"Enter the no of edges "<<endl;
    int edges;
    cin>>edges;
    graph g;
    int u;
    int v;
    int w;
    cout<<endl<<"Enter the source distination weight "<<endl;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>w;
        g.makeAdjList(u,v,w,0);
    }
    int source;
    cout<<endl<<"Enter the source node "<<endl;
    cin>>source;
    vector<pair<pair<int,int>,int>> vec=g.find(vertices,source);
    g.print(vec);
    return 0;
}