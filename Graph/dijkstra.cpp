#include<bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int v, int e, int s) {
    // Write your code here.
	vector<int> dist(v,INT_MAX);
	vector<pair<int,int>> adj[v];
	for(int i=0;i<e;i++)
	{
		adj[vec[i][0]].push_back({vec[i][1],vec[i][2]});
		adj[vec[i][1]].push_back({vec[i][0],vec[i][2]});
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	dist[s]=0;
	pq.push({0,s});
	while(!pq.empty())
	{
		int predis=pq.top().first;
		int src=pq.top().second;
		pq.pop();
		for(auto it: adj[src])
		{
			int nextsrc=it.first;
			int nextdis=it.second;
			if(dist[nextsrc]>dist[src]+nextdis)
			{
				dist[nextsrc]=dist[src]+nextdis;
				pq.push({dist[nextsrc],nextsrc});
			}
		}
	}
	return dist;
}
