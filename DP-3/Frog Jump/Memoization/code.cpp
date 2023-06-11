#include <bits/stdc++.h> 
int solve(int n,vector<int>& heights,vector<int> &dp)
{
    if(dp[n] != INT_MAX)
    return dp[n];
    if(n==0)
    return 0;
    else
    {
        int left=solve(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
        int right=(n>1)?solve(n-2,heights,dp)+abs(heights[n]-heights[n-2]):INT_MAX;
        dp[n]=min(left,right);
        return dp[n];
    }
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1,INT_MAX);
    int ans=solve(n-1,heights,dp);
    return ans;
}
