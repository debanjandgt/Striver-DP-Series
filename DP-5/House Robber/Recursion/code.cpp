class Solution {
public:
    int solve(vector<int>& nums,int n){
        if(n == 0)
        return nums[n];
        if(n<0)
        return 0;

        int take=solve(nums,n-2)+nums[n];
        int notTake=solve(nums,n-1)+0;
        return max(take,notTake);
    }
    int rob(vector<int>& nums) {
      int n=nums.size()-1;
      int ans=solve(nums,n);
      return ans;  
    }
};
