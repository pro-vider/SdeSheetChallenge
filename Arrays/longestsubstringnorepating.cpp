#Link-https://www.codingninjas.com/codestudio/problems/630418?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    int ans=0;
        vector<int> freq(256,-1);
        int i=0,j=0;
        int n=s.size();
        while(j<n)
        {
            if(freq[s[j]]!=-1)
                i=max(freq[s[j]]+1,i);
            freq[s[j]]=j;
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;        
    
}

#Time Complexity-O(N)
#Space Complexity-O(N)
