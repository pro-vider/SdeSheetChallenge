#https://www.codingninjas.com/codestudio/problems/maze-obstacles_977241?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    long long mod=1000000007;
    long long dp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1)dp[i][j]=0;
            else if(i==0 && j==0)dp[0][0]=1;
            else{
                long long a=0,b=0;
                if(i>0)a=dp[i-1][j];
                if(j>0)b=dp[i][j-1];
                dp[i][j]=(a+b)%mod;
            }
        }
    }
    return (dp[n-1][m-1]%mod);
}
