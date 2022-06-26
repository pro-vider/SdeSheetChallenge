#Link-https://www.codingninjas.com/codestudio/problems/job-sequencing-problem_1169460?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
struct job
{
    int deadl;
    int profit;
};
static bool comp(job a ,job b)
{
    return a.profit>b.profit;
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();
    struct job nums[n];
    for(int i=0;i<n;i++)
    {
        nums[i].deadl=jobs[i][0];
        nums[i].profit=jobs[i][1];
    }
    sort(nums,nums+n,comp);
    int max_d=nums[0].deadl;
    for(int i=1;i<n;i++)
        max_d=max(max_d,nums[i].deadl);
    vector<int> sche(max_d+1,-1);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=nums[i].deadl;j>0;j--)
        {
            if(sche[j]==-1)
            {
                sche[j]=1;
                ans+=nums[i].profit;
                break;
            }
        }
    }
    return ans;
 
    
}

#Time Complexity-O(NlogN)+O(M*N)
#Space Complexity-O(N)
