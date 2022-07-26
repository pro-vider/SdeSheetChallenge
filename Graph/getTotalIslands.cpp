void dfs(int x,int y,int n,int m, int** arr)
{
    arr[x][y]=0;
     int dirs[8][2] = {{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0}};
    for(int i=0;i<8;i++)
    {
        int newx=x+dirs[i][0];
        int newy=y+dirs[i][1];
        if(newx>=0 and newy>=0 and newx<n and newy<m and arr[newx][newy]==1)
            dfs(newx,newy,n,m,arr);
    }
}
int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
    int ans=0;
   // cout<<n<<m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                ans++;
                dfs(i,j,n,m,arr);
            }
        }
    }
    return ans;
}
