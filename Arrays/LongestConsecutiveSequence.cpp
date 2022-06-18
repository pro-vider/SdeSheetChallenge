#Link-https://www.codingninjas.com/codestudio/problems/759408?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int ans=0;
    unordered_set<int> us(arr.begin(),arr.end());
    for(int i:arr)
    {
        if(us.find(i-1)==us.end())
        {
            int x=i+1;
            int k=1;
            while(us.count(x))
            {
                x++;
                k++;
            }
            ans=max(k,ans);
        }
     }
    return ans;
}

#Time Complexity-O(n)+O(n)+O(n)
#Space Complexity-O(n)
