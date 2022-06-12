#Link-https://www.codingninjas.com/codestudio/problems/1082146?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long long xx=x;
    long long ans=1;
    while(n)
    {
        if(n%2==0)
        {
            xx=((xx%m)*(xx%m))%m;
            n=n/2;
        }
        else
        {
            ans=((ans%m)*(xx%m))%m;
            n=n-1;
        }
    }
    return (int)ans%m;
}

#Time Complexity-O(logn)
#Space Complexity-O(1)
