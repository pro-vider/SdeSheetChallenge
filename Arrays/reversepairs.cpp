#Link-https://www.codingninjas.com/codestudio/problems/1112652?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 

int checkinv(vector<int> &nums, int low, int mid,int high)
{
    int l=low;
    int r=mid+1;
    int count=0;
    while(l<=mid and r<=high)
    {
        if(nums[l]>2*nums[r])
        {
            count+=(mid-l+1);
            r++;
        }
        else
            l++;
    }
    l=low;
    r=mid+1;
  
   vector<int> temp;
    while(l<=mid and r<=high)
    {
        if(nums[l]<=nums[r])
        {
            temp.push_back(nums[l]);
            l++;
        }
        else
        {
            temp.push_back(nums[r]);
            r++;
        }
            
    }
    while(l<=mid)
    {
       temp.push_back(nums[l]);
            l++;
    }
    while(r<=high)
    {
         temp.push_back(nums[r]);
            r++;
    }
    for(int &i:temp) nums[low++]=i;
    return count;
    
}
int merge(vector<int> &nums,int low,int high)
{
      if(low>=high)
          return 0;
    int mid=(low+high)/2;
    int count=0;
    count+= merge(nums,low,mid);
    count+=merge(nums,mid+1,high);
    count+=checkinv(nums,low,mid,high);
    return count;
}
int reversePairs(vector<int> &nums, int n){
	// Write your code here.
    if(!nums.size())
        return 0;
    return merge(nums,0,n-1);
   
}

#Time Complexity-O(nlogn)+O(n)+o(n)
#Space Complexity-o(n);
