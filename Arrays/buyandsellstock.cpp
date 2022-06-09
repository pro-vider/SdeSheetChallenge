#link-https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans=0;
    int mini=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        mini=min(mini,prices[i]);
        ans=max(ans,prices[i]-mini);
    }
    return ans;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
