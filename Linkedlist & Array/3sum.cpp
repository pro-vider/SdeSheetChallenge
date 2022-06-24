#Link-https://www.codingninjas.com/codestudio/problems/893028?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {
	// Write your code here.
     vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    int left,right;
    for(int i=0;i<n-2;i++)
    {
        left=i+1;
        right=n-1;
        int tar=k-arr[i];
        while(left<right)
        {
            if(arr[left]+arr[right]==tar)
            {
                ans.push_back({arr[i],arr[left],arr[right]});
                int x=arr[left];
                int y=arr[right];
                while(left<right && arr[left]==x)
                    left++;
                while(left<right && arr[right]==y)
                    right--;
            }
            else if(arr[left]+arr[right]<tar)
                left++;
            else
                right--;
        }
        while(i+1<n && arr[i]==arr[i+1])
            i++;
    }
    return ans;
}

#Time Complexity-O(N^2)
#Space Complexity-O(M)
