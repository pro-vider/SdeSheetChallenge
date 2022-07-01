int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
    int count=0;
    if(s==p)
            return 1;
        
        for(int i=0;i<=n-m;i++)
        {
            int j=0;
            for(;j<m;j++)
            {
                if(s[i+j]!=p[j])
                    break;
            }
            if(j==m)
                count++;
        }
        return count;
}
