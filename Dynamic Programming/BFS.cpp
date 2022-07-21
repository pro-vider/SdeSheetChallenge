#include<bits/stdc++.h>
vector<int> BFS(int v, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<bool>vis(v,false);
    vector<int>ans;
    vector<int> ajd[v];
    for(auto x:edges)
    {
        ajd[x.first].push_back(x.second);
        ajd[x.second].push_back(x.first);
    }
    for(int i=0;i<v;i++)
         sort(ajd[i].begin(),ajd[i].end());


    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i]=true;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                ans.push_back(node);
                for(auto it:ajd[node])
                {
                    if(!vis[it])
                    {    
                        q.push(it);
                        vis[it]=true;
                    }
                }
            }
        }
    }
    return ans;
}
