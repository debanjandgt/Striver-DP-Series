class Solution {
public:
    int solve(vector<int>& nums,int n,vector<int>& dp){
      
        if(n == 0)
        return nums[n];
        if(n<0)
        return 0;
        if(dp[n] != -1)
      return dp[n];

        int take=solve(nums,n-2,dp)+nums[n];
        int notTake=solve(nums,n-1,dp)+0;
        dp[n]=max(take,notTake);
        return dp[n];
    }
    int rob(vector<int>& nums) {
      int n=nums.size()-1;
      vector<int> dp(nums.size(),-1);
      int ans=solve(nums,n,dp);
      return ans;  
    }
};
