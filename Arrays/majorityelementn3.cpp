#link-https://www.codingninjas.com/codestudio/problems/893027?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int num1=-1,num2=-1,count1=0,count2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(num1==arr[i])
            count1++;
        else if(num2==arr[i])
            count2++;
        else if(count1==0)
        {
            count1=1;
            num1=arr[i];
        }
        else if(count2==0)
        {
            count2=1;
            num2=arr[i];
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1=0,count2=0;
    for(auto x:arr)
    {
        if(x==num1)
            count1++;
        if(x==num2)
            count2++;
    }
    vector<int> ans;
    int n=arr.size();
    if(count1>n/3)
        ans.push_back(num1);
    if(count2>n/3)
        ans.push_back(num2);
    return ans;
    

}

#Time Complexity-O(N)
#Space Complexity-O(1)
