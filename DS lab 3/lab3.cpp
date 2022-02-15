

// 1)star
// 2)ring
// 3)tree
// 4)dijkstra


#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>
#define INF INT_MAX
#define iPair pair<int,int>
using namespace std;


enum name{  r1,r2,r3,r4,r5,
            t1,t2,t3,t4,t5,t6,t7,
            s1,s2,s3,s4,s5
            };//name of nodes

const int V=s5+1; //total no of nodes used
int adjMat[V][V];


void connect(int i, int j, int dist) {
    adjMat[i][j] = dist;
    adjMat[j][i] = dist;
}
void printList(int i) {
    cout << "Node<" << i << "> --> Connected to Nodes:";
    for (int j = 0; j < V; j++)
        if(adjMat[i][j] != INF)
        cout <<j<< " ";
    cout << endl;
}
void printAdjMat(){
    cout<<"\nAdjacency Matrix (x=INF)"<<endl;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++)
            cout<< ((adjMat[i][j] == INF) ? "x" : to_string(adjMat[i][j])) <<" ";
        cout<<endl;
    }
}
void printAdjList(){
    cout<<"\nAdjacency List"<<endl;
    for(int i=0;i<V;i++){
        printList(i);
    }
}

void printSP(int prev[],int des) {
    while (prev[des] != -1) {
        cout << des << " <--> ";
        des = prev[des];
    }
    cout << des << endl;
}
void dijkstraSP(int src,int des) {
    int dist[V];//min dist from src list
    int prev[V];//
    priority_queue< iPair, vector <iPair>, greater<iPair> > pq;
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        prev[i] = -1;
    }
    dist[src] = 0;
    pq.push(make_pair(0, src));
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (int v = 0; v < V; v++) 
            if (adjMat[u][v] != INF&& u!=v)
                if (dist[v] > dist[u] + adjMat[u][v]) {
                    dist[v] = dist[u] + adjMat[u][v];
                    prev[v] = u;
                    pq.push(make_pair(dist[v],v));
                }
    }
    cout << endl;
    if (prev[des] == -1) {
        cout << "No path from node<" << src << "> to node<" << des << ">" << endl;
        return;
    }
    cout << "Path from node<" << src << "> to node<" << des << ">" << endl;
    cout << "minimum distance : " << dist[des] << endl;
    printSP(prev, des);

}
void ringNetwork(){
    //connections
    connect(r1,r2,rand()%9+1);
    connect(r2,r3,rand()%9+1);
    connect(r3,r4,rand()%9+1);
    connect(r4,r5,rand()%9+1);
    connect(r5,r1,rand()%9+1);

    //print
    cout<<"\nRing Network"<<endl;
    printList(r1);
    printList(r2);
    printList(r3);
    printList(r4);
    printList(r5);
}
void starNetwork(){
    //connections
    connect(s1,s2,rand()%9+1);
    connect(s1,s3,rand()%9+1);
    connect(s1,s4,rand()%9+1);
    connect(s1,s5,rand()%9+1);

    //print
    cout<<"\nStar Network"<<endl;
    printList(s1);
    printList(s2);
    printList(s3);
    printList(s4);
    printList(s5);
}
void treeNetwork(){
    //connections
    connect(t1,t2,rand()%9+1);
    connect(t1,t3,rand()%9+1);

    connect(t2,t4,rand()%9+1);
    connect(t2,t5,rand()%9+1);
    connect(t3,t6,rand()%9+1);
    connect(t3,t7,rand()%9+1);

    //print
    cout<<"\nTree Network"<<endl;
    printList(t1);
    printList(t2);
    printList(t3);
    printList(t4);
    printList(t5);
    printList(t6);
    printList(t7);
}
void hybridNetwork(){
    //connect ring bus mesh and star network together
    connect(r1,t1,rand()%9+1);
    connect(t1,s1,rand()%9+1);
    connect(s1,r1,rand()%9+1);
    //print
    cout<<"\nHybrid Network"<<endl;
    cout<<"0,1,2,3,4->Ring Net"<<endl;
    cout<<"5,6,7,8,9,10,11->Tree Net"<<endl;
    cout<<"12,13,14,15,16->Star Net"<<endl;
    cout<<"0,5,12->Interconnected"<<endl;
    for(int i=0;i<16;i++)
        printList(i);
}

int main(){
    // initialize Nodes of network
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            adjMat[i][j] = (i==j)?0:INF;
    ringNetwork();
    treeNetwork();
    starNetwork();
    hybridNetwork();

    printAdjMat();
    printAdjList();

    dijkstraSP(r3, t7);
    dijkstraSP(r4, s5);

    return 0;
}