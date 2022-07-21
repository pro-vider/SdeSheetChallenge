#https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

#tablulation

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.

    vector<vector<int>> dp(n,vector<int>(4,0));
    dp[0][0]=max(points[0][1],points[0][2]);
    dp[0][1]=max(points[0][0],points[0][2]);
    dp[0][2]=max(points[0][1],points[0][0]);
    dp[0][3]=max(points[0][1],max(points[0][2],points[0][0]));
    for(int day=1;day<n;day++)
    {
        for(int last=0;last<4;last++)
        {
           // dp[day][last]=0;
            for(int task=0;task<3;task++)
            {
                if(task!=last)
                    dp[day][last]=max(dp[day][last],points[day][task]+dp[day-1][task]);
            }
            
        }
    }
    return dp[n-1][3];
    
}

#space optimization

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.

    vector<int>dp(4,0);
    dp[0]=max(points[0][1],points[0][2]);
    dp[1]=max(points[0][0],points[0][2]);
    dp[2]=max(points[0][1],points[0][0]);
    dp[3]=max(points[0][1],max(points[0][2],points[0][0]));
    for(int day=1;day<n;day++)
    {
        vector<int> temp(4,0);
        for(int last=0;last<4;last++)
        {
            for(int task=0;task<3;task++)
            {
                if(task!=last)
                   temp[last]=max(temp[last],points[day][task]+dp[task]);
            }
        }
        dp=temp;
       
    }
    return dp[3];
    
}
