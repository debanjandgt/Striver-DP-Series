#include<bits/stdc++.h>
using namespace std;
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
  dp[0]=0;
  for(int i=1;i<n;i++)
  {
    int mmsteps=INT_MAX;
    for(int j=1;j<=k;j++)
    {
      int val=0;
      if(i-j >= 0)
      {
        val=dp[i-j]+abs(arr[i]-arr[i-j]);
        mmsteps=min(mmsteps,val);
      }
      dp[i]=mmsteps;
    }
  }
  cout << dp[n-1] << endl;
}
