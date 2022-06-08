#link-https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628?topList=striver-sde-sheet-problems

#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int k=m+n-1;
    m=m-1;
    n=n-1;
    while(m>=0 or n>=0)
    {
        if(arr1[m]>=arr2[n])
        {
            arr1[k--]=arr1[m--];
        }
        else
            arr1[k--]=arr2[n--];
    };
    while(n>=0)
       arr1[k--]=arr2[n--];
    return arr1;
}

#Time Complexity-O(m+n)
#Space Complexty-O(1)



