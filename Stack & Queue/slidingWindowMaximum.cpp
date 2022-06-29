#link-https://www.codingninjas.com/codestudio/problems/980226?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.   
    vector<int> ans;
    deque<int> dq;
    for(int i=0;i<nums.size();i++)
    {
        if(!dq.empty() and dq.front()<i-k+1)
            dq.pop_front();
        while(!dq.empty() and nums[dq.back()]<=nums[i])
            dq.pop_back();
        dq.push_back(i);
        if(i>=k-1)
              ans.push_back(nums[dq.front()]);
    }
    return ans;
    
}

#Time Complexity-O(N)+O(N)
#Space Complexity-O(K)
