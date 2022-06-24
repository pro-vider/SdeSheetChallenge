#Link-https://www.codingninjas.com/codestudio/problems/630519?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
long getTrappedWater(long *height, int n){
    // Write your code here.
        long ans=0;
        long l=0;
        long r=n-1;
        long lmax=0;
        long rmax=0;
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>lmax)
                    lmax=height[l];
                else
                    ans+=lmax-height[l];
                l++;
            }
            else
            {
                if(height[r]>rmax)
                    rmax=height[r];
                else
                    ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    
}

#Time Complexity-O(N)
#Space Complexity-O(1)
