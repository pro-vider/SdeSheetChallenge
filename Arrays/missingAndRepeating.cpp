#Link-https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int num=0;
    for(auto x:arr)
    {
        num^=x;
    }
    for(int i=1;i<=n;i++)
    {
        num^=i;
    }
    int set_bit=num & ~(num-1);
    int x=0,y=0;
    for(int i=0;i<arr.size();i++)
    {
        if(set_bit&arr[i])
            x=x^arr[i];
        else
            y=y^arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(set_bit&i)
            x=x^i;
        else
            y=y^i;
    }
    int x_count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==x)
            x_count++;
    }
    if(x_count==0)
        return {x,y};
    else
        return {y,x};
	
}

#Time Complexity-O(N)
#Space Complexity-O(N)
