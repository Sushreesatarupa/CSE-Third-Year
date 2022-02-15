

// 1)star
// 2)ring
// 3)tree


#include <iostream>
#include <vector>
using namespace std;

struct Node{
    vector<Node*> adjNodes;
    int data;
    Node(int i){
        data=i;
    }
    void connect(Node* n){
        n->adjNodes.push_back(this);
        adjNodes.push_back(n);
    }
    void print(){
        cout<<"Node<"<<data<<"> --> Connected to Nodes:";
        for(Node * n:adjNodes)
            cout<<n->data<<",";
        cout<<endl;
    }
};

enum name{r1,r2,r3,r4,r5,
            t1,t2,t3,t4,t5,t6,t7,
            s1,s2,s3,s4,s5};//name of nodes
const int V=s5+1; //total no of nodes used

Node* nodes[V];
bool adjMat[V][V];

void convAdjMat(){
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            adjMat[i][j]=false;
    for(int i=0;i<V;i++)
        for(Node *j:nodes[i]->adjNodes)
            adjMat[i][j->data]=true;
}
void printAdjMat(){
    cout<<"\nAdjacency Matrix"<<endl;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++)
            cout<<adjMat[i][j]<<" ";
        cout<<endl;
    }
}
void printAdjList(){
    cout<<"\nAdjacency List"<<endl;
    for(int i=0;i<V;i++){
        cout<<"Node<"<<i<<"> deg<"<<nodes[i]->adjNodes.size() <<"> --> Connected to Nodes:";
        for(Node *j:nodes[i]->adjNodes)
            cout<<j->data<<",";
        cout<<endl;
    }
}

void ringNetwork(){
    //connections
    nodes[r1]->connect(nodes[r2]);
    nodes[r2]->connect(nodes[r3]);
    nodes[r3]->connect(nodes[r4]);
    nodes[r4]->connect(nodes[r5]);
    nodes[r5]->connect(nodes[r1]);

    //print
    cout<<"\nRing Network"<<endl;
    nodes[r1]->print();
    nodes[r2]->print();
    nodes[r3]->print();
    nodes[r4]->print();
    nodes[r5]->print();
}

void starNetwork(){
    //connections
    nodes[s1]->connect(nodes[s2]);
    nodes[s1]->connect(nodes[s3]);
    nodes[s1]->connect(nodes[s4]);
    nodes[s1]->connect(nodes[s5]);

    //print
    cout<<"\nStar Network"<<endl;
    nodes[s1]->print();
    nodes[s2]->print();
    nodes[s3]->print();
    nodes[s4]->print();
    nodes[s5]->print();
}

void treeNetwork(){
    //connections
    nodes[t1]->connect(nodes[t2]);
    nodes[t1]->connect(nodes[t3]);

    nodes[t2]->connect(nodes[t4]);
    nodes[t2]->connect(nodes[t5]);
    nodes[t3]->connect(nodes[t6]);
    nodes[t3]->connect(nodes[t7]);

    //print
    cout<<"\nTree Network"<<endl;
    nodes[t1]->print();
    nodes[t2]->print();
    nodes[t3]->print();
    nodes[t4]->print();
    nodes[t5]->print();
    nodes[t6]->print();
    nodes[t7]->print();
}

int main(){
    // create Nodes of network
    for(int i=0;i<V;i++)
        nodes[i]=new Node(i);
    ringNetwork();
    treeNetwork();
    starNetwork();

    convAdjMat();
    printAdjMat();
    printAdjList();

    return 0;
}
