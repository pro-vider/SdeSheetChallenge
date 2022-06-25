#Link-https://www.codingninjas.com/codestudio/problems/799400?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int j=0;
    int i=0;
    int ans=INT_MIN;
    int plat=0;
    while(i<n)
    {
        if(at[i]<=dt[j])
        {
            plat++;
            i++;
        }
        else
        {
            plat--;
            j++;
        }
        ans=max(plat,ans);
    }  
    return ans;
}

#Time Complexity-O(NlogN)
#Space Complexity-O(1)
