#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;
//top-down approach T.C O(n) SC O(n)
int solve(int n, int i,vector<int> &dp){
    if(i==n){
        return 1;
    }
    if(i>n){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    return dp[i]=(solve(n,i+1,dp)+solve(n,i+2,dp))%MOD;
}
//bottom-up approach T.C O(n) SC O(n)

int solve_bottom_up(int n){
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]+=(dp[i-1])%MOD;
        if(i-2>=0){
            dp[i]+=(dp[i-2])%MOD;
        }
        dp[i]=dp[i]%MOD;
    }
    return dp[n];
}
int countDistinctWays(int n) {

    //for top-down
//     vector<int> dp(nStairs+1,-1);
//     return solve(nStairs,0,dp);
    //bottom-up
    return solve_bottom_up(n);
}
