#DFS Algo

#include<bits/stdc++.h>
bool checkcycle(int node,int vis[],int dfs[],vector<int> adj[])
{
	vis[node]=1;
	dfs[node]=1;
	for(auto it:adj[node])
	{
		if(!vis[it])
		{
			if(checkcycle(it,vis,dfs,adj))
				return true;
        }
		else if(dfs[it])
			return true;
	}
	dfs[node]=0;
	return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
	int size=edges.size();
	vector<int> adj[n+1];
	 for(auto x:edges){
        int u=x.first;
        int v=x.second;
        adj[u].push_back(v);
     }
	int vis[n+1],dfs[n+1];
	memset(vis,0,sizeof vis);
	memset(dfs,0,sizeof dfs);
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			if(checkcycle(i,vis,dfs,adj))
				return 1;
		}
	}

	return 0;
}
