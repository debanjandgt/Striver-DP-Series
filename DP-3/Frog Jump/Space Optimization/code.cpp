#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    int curr,prev1=0,prev2=0;
    for(int i=1;i<n;i++)
    {
        int fs=prev1+abs(heights[i-1]-heights[i]);
        int ss=(i>1)?prev2+abs(heights[i-2]-heights[i]):INT_MAX;
        
        curr=min(fs,ss);
        prev2=prev1;
        prev1=curr;
        
    }
    return prev1;
}
