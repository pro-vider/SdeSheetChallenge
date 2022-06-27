#Link-https://www.codingninjas.com/codestudio/problems/799354?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i=n-1;i>=0;i--)
    {
       while(!st.empty() and arr[i]>=st.top())
           st.pop();
        if(!st.empty())
            ans[i]=st.top();
        st.push(arr[i]);
    }
    return ans;

}

#Time Complexity-O(N)
#Space Complexity-O(N)
