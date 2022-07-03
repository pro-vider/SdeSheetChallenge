#Link-https://www.codingninjas.com/codestudio/problems/893000?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
int kmp(string s)
{
    string r=s;
    reverse(r.begin(),r.end());
    s=s+"$"+r;
    int n=s.size();
    vector<int> lps(n,0);
        for(int i=1,len=0;i<n;)
       {
        if(s[i]==s[len])
            lps[i++]=++len;
        else if(len)
            len=lps[len-1];
        else
            i++;
       }
    return lps.back();
}
int minCharsforPalindrome(string str) {
	// Write your code here.
    int i=0;
    int j=str.size()-1;
    bool x=true;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            x=false;
            break;
        }
            i++;
        j--;
    }
    if(x)
        return 0;
    else
    {
        int l=kmp(str);
        return str.size()-l;
    }
	
}
