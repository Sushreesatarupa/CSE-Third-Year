#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define node 5
int adj_mat[5][5] = {0};
void addedge(int u,int v)
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
	cout<<"Printing bus
	 topology...\n";
	addedge(0,1);
	addedge(1,2);
	addedge(2,3);
	addedge(3,4);	
	
	graph();	
}
