Link-https://www.codingninjas.com/codestudio/problems/running-median_625409?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
priority_queue<int> maxh;
priority_queue<int,vector<int>,greater<int>> minh;
 void addNum(int num) {
        if(maxh.empty() or num<maxh.top())
            maxh.push(num);
        else
            minh.push(num);
        if(maxh.size()>minh.size()+1)
        {
            minh.push(maxh.top());
            maxh.pop();
        }
        else if(minh.size()>maxh.size()+1)
        {
            maxh.push(minh.top());
            minh.pop();
        }
        
    }
int findM() {
        if(maxh.size()==minh.size())
            return  (minh.top()+maxh.top())/2;
        else if(maxh.size()>minh.size())
            return maxh.top();
        else
            return minh.top();
    }
void findMedian(int *arr, int n)
{
    // Write your code here
   // priority_queue<int> maxh;
  //  priority_queue<int,vector<int>,greater<int>> minh;
    for(int i=0;i<n;i++)
    {
        addNum(arr[i]);
        int ans=findM();
        cout<<ans<<" ";
        
    }
}
