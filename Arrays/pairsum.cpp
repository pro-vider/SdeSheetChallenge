#Link-https://www.codingninjas.com/codestudio/problems/pair-sum_697295?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int k){
   // Write your code here.
    vector<vector<int>>x;
    map<int,vector<int>>mp;
    for(int i=0;i<arr.size();i++)
    {
        if(mp.find(k-arr[i])!=mp.end())
        {
            int size=mp[k-arr[i]].size();
            for(int j=0;j<size;j++)
            {
                vector<int>temp;
                temp.push_back(min(k-arr[i],arr[i]));
                temp.push_back(max(k-arr[i],arr[i]));
                x.push_back(temp);
            }
        }
        mp[arr[i]].push_back(i);
    }
    sort(x.begin(),x.end());
    return x;
}

#Time Complexity-O(N)
#Space Complexity-O(N)
