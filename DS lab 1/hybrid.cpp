#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define node 10
int adj_mat[10][10] = {0};
void addedge(int u,int v)
{
	adj_mat[u][v] = 1;
	adj_mat[v][u] = 1;
}
void addedge_bus(int u,int v)
{
	adj_mat[u][v] = 1;
}
void graph()
{
	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		{
			cout<<adj_mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	cout<<"Printing hybrid topology...\n";
//	bus topology
	addedge_bus(0,1);
	addedge_bus(1,2);
	addedge_bus(2,3);
// ring topology
	addedge(1,4);
	addedge(4,5);
	addedge(5,6);	
	addedge(6,4);
// star topology
	addedge(2,7);
	addedge(7,8);
	addedge(7,9);
	
	
	
	graph();	
}
