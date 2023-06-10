class Solution {
public:
    int solve(int n,vector<long long int>& dp)
{
    if(dp[n] != -1)
    return dp[n];
    if(n == 0)
    return 1;
    else
    {
        long long int left=0,right=0;
        left=solve(n-1,dp);
        if(n>1)
        right=solve(n-2,dp);
        return dp[n]=left+right;
    }
}
    int climbStairs(int n) {
        vector<long long int> dp(n+2,-1);
        int ans=solve(n,dp);
        return ans;
    }
};
