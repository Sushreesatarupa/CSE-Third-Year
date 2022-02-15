
 
#include <bits/stdc++.h>
using namespace std;
 
// A utility function to add an edge in an
// undirected graph.
void connect(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex "<< v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout<<endl;
    }
}
 
int main()
{
    // Graph 1
    int V = 16;
    vector<int> adj1[V + 1];
     connect(adj1,1,2);
    connect(adj1,2,3);
    connect(adj1,3,4);
    connect(adj1,4,1);

    connect(adj1,5,6);
    connect(adj1,6,7);
    connect(adj1,7,8);
    connect(adj1,8,5);

    connect(adj1,1,5);
    connect(adj1,2,6);
    connect(adj1,3,7);
    connect(adj1,4,8);

    connect(adj1,9,10);
    connect(adj1,10,11);
    connect(adj1,11,12);
    connect(adj1,12,9);

    connect(adj1,13,14);
    connect(adj1,14,15);
    connect(adj1,15,16);
    connect(adj1,16,13);

    connect(adj1,9,13);
    connect(adj1,10,14);
    connect(adj1,11,15);
    connect(adj1,12,16);
  
    connect(adj1,1,9);
    connect(adj1,2,10);
    connect(adj1,3,11);
    connect(adj1,4,12);

    connect(adj1,5,13);
    connect(adj1,6,14);
    connect(adj1,7,15);
    connect(adj1,8,16);
    printGraph(adj1,V);
 
    return 0;
}
