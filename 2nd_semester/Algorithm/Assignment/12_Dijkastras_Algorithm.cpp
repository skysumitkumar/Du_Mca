#include<iostream>
using namespace std;
#include<set>
#include<list>
#include<vector>
#include<unordered_map>
#include<limits.h>
class graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjList;
    void makeAdjList(int u,int v,int w,bool dir)
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
    vector<int> findSortestPath(int vertices,int source)
    {
        set<pair<int,int>>s;
        //distance ,node
        vector<int>v(vertices,0);
        for(int i=0;i<vertices;i++)
        {
            v[i]=INT_MAX;
        }
        v[source]=0;
        s.insert(make_pair(0,source));
        while(!s.empty())
        {
            auto top=*(s.begin());
            int nodeDistance=top.first;
            int topNode=top.second;
            //remove the  top node;
            s.erase(s.begin());
            //traverse to neighbours
            for(const auto & neghibour:adjList[topNode])
            {
                int sum=nodeDistance+neghibour.second;
                if(sum<v[neghibour.first])
                {
                    auto record=s.find(make_pair(v[neghibour.first],neghibour.first));
                    if(record!=s.end())
                    {
                        s.erase(record);
                    }
                    v[neghibour.first]=sum;
                    s.insert(make_pair(v[neghibour.first],neghibour.first));
                }
            }
        }
        return v;
    }
    void print(vector<int> v)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
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
    vector<int>vec=g.findSortestPath(vertices,source);
    g.print(vec);
    return 0;
}