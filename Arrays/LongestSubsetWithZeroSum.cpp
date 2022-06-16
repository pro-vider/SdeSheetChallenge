#Link-https://www.codingninjas.com/codestudio/problems/983605?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++)
    {
        int t3=target-arr[i];
        for(int j=i+1;j<n-2;j++)
        {
            int t2=t3-arr[j];
            int l=j+1;
            int r=n-1;
            while(l<r)
            {
               if(arr[l]+arr[r]>t2)
                   r--;
                else if(arr[l]+arr[r]<t2)
                    l++;
                else
                {
                    return "Yes";
                }
            }
            while(j+1<n and arr[j]==arr[j+1])
                j++;
        }
         while(i+1<n and arr[i]==arr[i+1])
                i++;
    }
    return "No";
}


#Time Complexity-O(n)
#Space Complexity-O(n)
