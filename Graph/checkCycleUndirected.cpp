#DFS Traversal

bool checkcycle(int src,int par,vector<bool>& vis,vector<int>adj[])
{
    vis[src]=true;
    for(auto it:adj[src])
    {
        if(!vis[it])
        {
            if(checkcycle(it,src,vis,adj))
                return true;
        }
        else
        {
            if(it!=par)
                return true;
        }
    }
    return false;
    
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<bool> vis(n+1,false);
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(checkcycle(i,-1,vis,adj))
                return "Yes";
        }
    }
    return "No";
}


#BFS Traversal

#include<bits/stdc++.h>
bool checkcycle(int src,vector<bool>& vis,vector<int>adj[])
{
    queue<pair<int,int>>q;
    vis[src]=true;
    q.push({src,-1});
    while(!q.empty())
    {
        int node=q.front().first;
        int par=q.front().second;
        q.pop();
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=true;
                q.push({it,node});
            }
            else
            {
                if(it!=par)
                    return true;
            }
        }
    }
return false;    
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<bool> vis(n+1,false);
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(checkcycle(i,vis,adj))
                return "Yes";
        }
    }
    return "No";
}
