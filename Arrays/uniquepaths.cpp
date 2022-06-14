#Link-https://www.codingninjas.com/codestudio/problems/1081470?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    int N=n+m-2;
    int r=min(--n,--m);
    int ans=1;
    for(int i=1;i<=r;i++)
        ans=ans*(N-r+i)/i;
    return ans;
    
}

#Time Complexity-O(min(n-1,m-1))
#Space Complexity-O(1)
