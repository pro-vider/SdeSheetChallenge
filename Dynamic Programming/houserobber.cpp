#https://www.codingninjas.com/codestudio/problems/house-robber_839733?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

long long int solve(vector<int>& v,int i,int limit,long long int prev)
{
   long long int prev2=0;
    for(int j=i+1;j<limit;j++)
    {
       long long int take=v[j];
        if(j-i>0)
            take+=prev2;
       long long int nontake=0+prev;
       long long int curi=max(take,nontake);
        prev2=prev;
        prev=curi;
    }
    return prev;
}
long long int houseRobber(vector<int>& v)
{
    // Write your code here.
    int n=v.size();
    long long int ff=v[0];
    long long int ss=v[1];
    long long int x=solve(v,0,n-1,ff);
    long long int y=solve(v,1,n,ss);
    return max(x,y);
}
