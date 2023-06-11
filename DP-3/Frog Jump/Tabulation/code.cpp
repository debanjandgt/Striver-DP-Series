#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1);
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        int fs=dp[i-1]+abs(heights[i-1]-heights[i]);
        int ss=(i>1)?dp[i-2]+abs(heights[i-2]-heights[i]):INT_MAX;
        
        dp[i]=min(fs,ss);
        
    }
    return dp[n-1];
}


