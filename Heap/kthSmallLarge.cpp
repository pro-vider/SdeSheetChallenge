#Link-https://www.codingninjas.com/codestudio/problems/kth-smallest-and-largest-element-of-array_1115488?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    //vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> minh;
    priority_queue<int> maxh;
    for(int i=0;i<n;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
            maxh.pop();
    }
    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
            minh.pop();
    }
    return {maxh.top(),minh.top()};
    
}

#Time Complexity-O(Nlogk)
#Space Complexity-O(k)
