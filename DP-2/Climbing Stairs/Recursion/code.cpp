#include <bits/stdc++.h> 
int solve(int nstairs)
{
    if(nstairs == 0)
    return 1;
    else
    {
        int left=0,right=0;
        left=solve(nstairs-1);
        if(nstairs>1)
        right=solve(nstairs-2);
        return left+right;
    }
} 
int countDistinctWays(int nStairs) {
    int ans=solve(nStairs);
    return ans;
}
