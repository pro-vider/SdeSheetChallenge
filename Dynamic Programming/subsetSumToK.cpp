#Tablulation

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    
    vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    for(int i=0;i<n;i++)
        dp[i][0]=true;
    dp[0][arr[0]]=true;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            bool nontake=dp[i-1][j];
            bool take=false;
            if(j>=arr[i])
                take=dp[i-1][j-arr[i]];
            dp[i][j]=take or nontake;
        }
    }
    return dp[n-1][k];
}

#Space Optimization

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    
  vector<bool> prev(k+1,false),cur(k+1,false);
    prev[0]=true;
    cur[0]=true;
    prev[arr[0]]=true;
    
   
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            bool nontake=prev[j];
            bool take=false;
            if(j>=arr[i])
                take=prev[j-arr[i]];
            cur[j]=take or nontake;
        }
        prev=cur;
    }
    return prev[k];
}
