#Link-https://www.codingninjas.com/codestudio/problems/699917?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n=intervals.size();
        sort(intervals.begin(),intervals.end());
      
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++)
        {
            if(ans.empty() or ans.back()[1]<intervals[i][0])
            {
                vector<int>v={intervals[i][0],intervals[i][1]};
                            ans.push_back(v);
            }
    
            else
            {
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
         
        }
        return ans;
}

#Time Complexity- O(NlogN)+O(N)
#Space Complexity- nearly O(N)
