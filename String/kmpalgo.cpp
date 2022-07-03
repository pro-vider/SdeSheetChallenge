#link-https://www.codingninjas.com/codestudio/problems/1112621?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

vector<int> kmp(string pattern)
{
    int n=pattern.size();
    vector<int> lps(n,0);
    for(int i=1,len=0;i<n;)
    {
        if(pattern[i]==pattern[len])
            lps[i++]=++len;
        else if(len)
            len=lps[len-1];
        else
            i++;
   }
    return lps;
}
bool findPattern(string p, string s)
{
    // Write your code here.
    if(p==s)
        return true;
    int m=p.size();
    int n=s.size();
    vector<int> lps=kmp(p);
    for(int i=0,j=0;i<n;)
    {
        if(p[j]==s[i])
            i++,j++;
        if(j==m)
            return true;
        if(i<n and p[j]!=s[i])
        {
            if(j)
                j=lps[j-1];
            else
                i++;
        }
    }
    return false;
    
    
        
}
