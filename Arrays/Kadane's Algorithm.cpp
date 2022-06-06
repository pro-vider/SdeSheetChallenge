#Link-https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    int ans=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans+=arr[i];
        maxi=max(ans,maxi);
        if(ans<0)
            ans=0;
    }
    return maxi;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
