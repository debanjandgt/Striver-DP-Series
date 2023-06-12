#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& arr,int n,int k,vector<int> & dp)
{
  if(dp[n] != -1)
    return dp[n];
  if(n==0)
    return 0;
  int mmsteps=INT_MAX;
  for(int j=1;j<=k;j++)
  {
    if(n-j >=0)
    {
      int val=solve(arr,n-j,k,dp)+abs(arr[n]-arr[n-j]);
      mmsteps=min(mmsteps,val);
     
    }
  }
   dp[n]=mmsteps;
   return dp[n];
}
int main()
{
  vector<int> arr;
  int n,k;
  cin >> n >> k;
  for(int i=0;i<n;i++)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  vector<int> dp(n+1,-1);
  int ans=solve(arr,n-1,k,dp);
  cout << ans << endl;;
}

