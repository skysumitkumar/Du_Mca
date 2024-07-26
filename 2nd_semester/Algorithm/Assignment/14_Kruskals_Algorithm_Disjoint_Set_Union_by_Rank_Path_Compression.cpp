#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <algorithm>
#define V 9

using namespace std;

class Graph {
    public:
    unordered_map<int, vector<pair<int, int>>> adj;
    void insert(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    void print() {
        for(auto i : adj) {
            cout << i.first << " --> ";
            for(auto j : i.second) {
                cout << "[" << j.first << ", " << j.second << "] ";
            }
            cout << endl;
        }
    }
};

class DisjointSet {
    vector<int> size, parent;
    public:
    DisjointSet(int n) {
        size.resize(n+1, 1);
        parent.resize(n+1);

        for(int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUltParent(int node) {
        if(parent[node] == node) {
            return node;
        }
        return parent[node] = findUltParent(parent[node]);
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUltParent(u);
        int ulp_v = findUltParent(v);

        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Kruskal {
    vector<pair<int, pair<int, int>>> edges;
    public:
    int spanningTree(unordered_map<int, vector<pair<int, int>>> &adj) {
        for(auto i : adj) {
            int node = i.first;
            for(auto j : i.second) {
                int adjNode = j.first;
                int weight = j.second;

                edges.push_back({weight, {node, adjNode}});
            }
        }

        DisjointSet ds(V);
        sort(edges.begin(), edges.end());
        int mstWt = 0;

        for(auto i : edges) {
            int wt = i.first;
            int u = i.second.first;
            int v = i.second.second;

            if(ds.findUltParent(u) != ds.findUltParent(v)) {
                mstWt += wt;
                ds.unionBySize(u, v);
            }
        }

        return mstWt;
    }
};

int main() {
    Graph G;
    G.insert(0, 1, 4);
    G.insert(0, 7, 8);
    G.insert(1, 2, 8);
    G.insert(1, 7, 11);
    G.insert(2, 3, 7);
    G.insert(2, 8, 2);
    G.insert(2, 5, 4);
    G.insert(3, 4, 9);
    G.insert(3, 5, 14);
    G.insert(4, 5, 10);
    G.insert(5, 6, 2);
    G.insert(6, 7, 1);
    G.insert(6, 8, 6);
    G.insert(7, 8, 7);
    G.print();
    Kruskal K;
    int minWt = K.spanningTree(G.adj);
    cout << "The minimum spanning tree weight is: " << minWt << endl;
    return 0;
}