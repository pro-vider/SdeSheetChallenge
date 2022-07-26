void dfs(int x,int y,int color,int newcolor,vector<vector<int>> &image)
{
    image[x][y]=newcolor;
    int dxy[]={-1,0,1,0,-1};
    for(int i=0;i<4;i++)
    {
        int newx=x+dxy[i];
        int newy=y+dxy[i+1];
        if(newx>=0 and newy>=0 and newx<image.size() and newy<image[0].size() and image[newx][newy]==color)
            dfs(newx,newy,color,newcolor,image);
    }
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    int color = image[x][y];
    if(color==newColor) return image;
    dfs(x,y,color,newColor,image);
    return image;
}
