#include<bits/stdc++.h>
void topo(int node,int vis[],stack<int>& st,vector<int> adj[])
{
	vis[node]=1;
	for(auto it:adj[node])
	{
		if(!vis[it])
			topo(it,vis,st,adj);
	}
	st.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
	stack<int> st;
	vector<int> adj[v];
	for(int i=0;i<e;i++)
	{
		int u=edges[i][0];
		int v=edges[i][1];
		adj[u].push_back(v);
	}
	int vis[v]={0};
	for(int i=0;i<v;i++)
	{
		if(!vis[i])
		{
			topo(i,vis,st,adj);
		}
	}
	vector<int> ans;
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	return ans;
}
