#include<bits/stdc++.h>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Write your code here.
    vector<pair<pair<int, int>, int>> ans;
    vector<pair<int,int> > adj[n+1]; 
    for(int i=0;i<m;i++)
    {
        adj[g[i].first.first].push_back({g[i].first.second,g[i].second});
        adj[g[i].first.second].push_back({g[i].first.first,g[i].second});
        
    }
    vector<int> key(n+1,INT_MAX);
    vector<int> parent(n+1,-1);
    vector<bool> mst(n+1,false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 1});
    key[1] = 0;
    parent[1] = -1;
    while(!q.empty())
    {
        int u=q.top().second;
        q.pop();
          mst[u] = true; 
        for(auto it:adj[u])
        {
            int v=it.first;
            int w=it.second;
            if(mst[v]==false and w<key[v])
            {
                parent[v]=u;
                key[v]=w;
                q.push({key[v],v});
            }
        }
    }
    for(int i=2;i<=n;i++)
     ans.push_back({{parent[i], i}, key[i]});
    return ans;
    
    
}
