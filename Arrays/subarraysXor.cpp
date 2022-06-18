#Link-https://www.codingninjas.com/codestudio/problems/1115652?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
     unordered_map<int,int> mp;
    int ans=0;
    int cpx=0;
    for(int i:arr)
    {
        cpx^=i;
        if(cpx==x)
            ans++;
        int h=cpx^x;
        if(mp.find(h)!=mp.end())
            ans+=mp[h];
        mp[cpx]++;
    }
    return ans;
}

#Time Complexity-O(N)
#Space Complexity-O(N)
