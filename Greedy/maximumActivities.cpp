#Link-https://www.codingninjas.com/codestudio/problems/1062712?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
static bool comp(pair<int,int> a,pair<int,int>b)
{
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> acti;
    for(int i=0;i<start.size();i++)
    {
        acti.push_back(make_pair(start[i],finish[i]));
    }
    sort(acti.begin(),acti.end(),comp);
    int limit=acti[0].second;
    int ans=1;
    for(int i=1;i<acti.size();i++)
    {
        if(limit<=acti[i].first)
        {
            ans++;
            limit=acti[i].second;
        }
    }
    return ans;
    
}

#Time Complexity-O(NlogN)
#Space Complexity-O(N)
