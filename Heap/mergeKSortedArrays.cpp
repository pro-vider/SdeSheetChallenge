#Link-https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
typedef pair<int,pair<int,int>> ppi;
vector<int> mergeKSortedArrays(vector<vector<int>>&arr, int k)
{
    // Write your code here. 
    vector<int> ans;
    priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
    for(int i=0;i<k;i++)
    {
        int j=0;
        pq.push(make_pair(arr[i][j],make_pair(i,j)));
    }
    while(!pq.empty())
    {
        ppi top=pq.top();
        pq.pop();
        ans.push_back(top.first);
        int row=top.second.first;
        int col=top.second.second;
        if(col+1<arr[row].size())
            pq.push(make_pair(arr[row][col+1],make_pair(row,col+1)));
        
    }
    return ans;
}

#Time Complexity-O(N*k logk)
#Space Complexity-O(k)
