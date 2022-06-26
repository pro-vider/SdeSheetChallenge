#Link-https://www.codingninjas.com/codestudio/problems/975286?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
static bool comp(pair<int,int> a,pair<int,int>b)
{
    double r1=(double)(a.second/(double)a.first);
    double r2=(double)(b.second/(double)b.first);
    return r1>r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comp);
  //  cout<<items[0].first<<items[0].second<<endl;
    double finalprofit=0.0;
    int curweight=0;
    for(int i=0;i<n;i++)
    {
        if(curweight+items[i].first<=w)
        {
            curweight+=items[i].first;
            finalprofit+=items[i].second;
        }
        else
        {
           
            double remain=w-curweight;
            finalprofit+=(items[i].second/(double)items[i].first)*remain;
            break;
        }
    }
    return finalprofit;
}

#Time Complexity-O(nlogn)+o(n)
#Space Complexity-O(1)
