#include<bits/stdc++.h>
int findlessthan(vector<int>& a,int x)
{
    int lo=0;
    int hi=a.size()-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(a[mid]>x)
            hi=mid-1;
        else
            lo=mid+1;
    }
    return lo;
}
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int m=matrix.size();
    int n=matrix[0].size();
    int low=INT_MAX,high=INT_MIN;
    for(int i=0;i<m;i++)
       low=min(low,matrix[i][0]);
    for(int i=0;i<m;i++)
       high=max(high,matrix[i][n-1]);
   // cout<<high;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int count=0;
        for(int i=0;i<m;i++)
        {
            count+=findlessthan(matrix[i],mid);
        }
        if(count<=(n*m)/2)
            low=mid+1;
        else
            high=mid-1;
    }
    return low;
    
}
