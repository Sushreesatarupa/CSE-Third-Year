#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define node 5
int adj_mat[5][5] = {0};
void addedge(int u,int v)
{
	adj_mat[u][v] = 1;
	adj_mat[v][u] = 1;
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
	cout<<"Printing star topology...\n";
	addedge(0,1);
	addedge(0,2);
	addedge(0,3);
	addedge(0,4);	
	
	graph();	
}
