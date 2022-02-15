

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

enum name{  r1,r2,r3,r4,r5,
            t1,t2,t3,t4,t5,t6,t7,
            s1,s2,s3,s4,s5,
            hc1,hc2,hc3,hc4,
            hc5,hc6,hc7,hc8,
            hc9,hc10,hc11,hc12,
            hc13,hc14,hc15,hc16};//name of nodes
const int V=hc16+1; //total no of nodes used

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
void hypercubeNetwork(){
    //connections
    //cube 1
    nodes[hc1]->connect(nodes[hc2]);//upper square
    nodes[hc2]->connect(nodes[hc3]);
    nodes[hc3]->connect(nodes[hc4]);
    nodes[hc4]->connect(nodes[hc1]);

    nodes[hc5]->connect(nodes[hc6]);//lower square
    nodes[hc6]->connect(nodes[hc7]);
    nodes[hc7]->connect(nodes[hc8]);
    nodes[hc8]->connect(nodes[hc5]);

    nodes[hc1]->connect(nodes[hc5]);//connect to form cube 1
    nodes[hc2]->connect(nodes[hc6]);
    nodes[hc3]->connect(nodes[hc7]);
    nodes[hc4]->connect(nodes[hc8]);
    //cube 2
    nodes[hc9]->connect(nodes[hc10]);//upper square
    nodes[hc10]->connect(nodes[hc11]);
    nodes[hc11]->connect(nodes[hc12]);
    nodes[hc12]->connect(nodes[hc9]);

    nodes[hc13]->connect(nodes[hc14]);//lower square
    nodes[hc14]->connect(nodes[hc15]);
    nodes[hc15]->connect(nodes[hc16]);
    nodes[hc16]->connect(nodes[hc13]);

    nodes[hc9]->connect(nodes[hc13]);//connect to form cube 2
    nodes[hc10]->connect(nodes[hc14]);
    nodes[hc11]->connect(nodes[hc15]);
    nodes[hc12]->connect(nodes[hc16]);
    //interconnection
    nodes[hc1]->connect(nodes[hc9]);
    nodes[hc2]->connect(nodes[hc10]);
    nodes[hc3]->connect(nodes[hc11]);
    nodes[hc4]->connect(nodes[hc12]);

    nodes[hc5]->connect(nodes[hc13]);
    nodes[hc6]->connect(nodes[hc14]);
    nodes[hc7]->connect(nodes[hc15]);
    nodes[hc8]->connect(nodes[hc16]);

    //print
    cout<<"\nHypercube Network"<<endl;
    nodes[hc1]->print();
    nodes[hc2]->print();
    nodes[hc3]->print();
    nodes[hc4]->print();
    nodes[hc5]->print();
    nodes[hc6]->print();
    nodes[hc7]->print();
    nodes[hc8]->print();
    nodes[hc9]->print();
    nodes[hc10]->print();
    nodes[hc11]->print();
    nodes[hc12]->print();
    nodes[hc13]->print();
    nodes[hc14]->print();
    nodes[hc15]->print();
    nodes[hc16]->print();
}
void hybridNetwork(){
    //connect ring bus mesh and star network together
    nodes[r1]->connect(nodes[t1]);
    nodes[t1]->connect(nodes[s1]);
    nodes[s1]->connect(nodes[r1]);
    //print
    cout<<"\nHybrid Network"<<endl;
    cout<<"0,1,2,3,4->Ring Net"<<endl;
    cout<<"5,6,7,8,9,10,11->Tree Net"<<endl;
    cout<<"12,13,14,15,16->Star Net"<<endl;
    cout<<"0,5,12->Interconnected"<<endl;
    for(int i=0;i<16;i++)
        nodes[i]->print();
}

int main(){
    // create Nodes of network
    for(int i=0;i<V;i++)
        nodes[i]=new Node(i);
    ringNetwork();
    treeNetwork();
    starNetwork();
    hybridNetwork();
    hypercubeNetwork();

    convAdjMat();
    printAdjMat();
    printAdjList();

    return 0;
}