#Link-https://www.codingninjas.com/codestudio/problems/842495?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int ind=0;int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[ind]==arr[i])
            count++;
        else
            count--;
        if(count==0)
        {
            count=1;
            ind=i;
        } 
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[ind])
            count++;
    }
    if(count>n/2)
        return arr[ind];
    return -1;
}

#Time Complexity-O(N)
#Space Complexity-O(1)
