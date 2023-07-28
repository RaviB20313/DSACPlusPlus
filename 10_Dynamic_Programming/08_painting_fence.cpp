//solve(n) = (k-1)*(solve(n-2)+solve(n-1));
// 1. You are given a number n and a number k in separate lines, representing the number of fences and number of colors.
// 2. You are required to calculate and print the number of ways in which the fences could be painted so that not more than two consecutive  fences have same colors.

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int helper_top_down(int n, int k,vector<int> &dp){
    if(n==1){
        return k;
    }
    if(n==2){
        return k+(k*(k-1));
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]= (helper_top_down(n-2,k,dp) *(k-1)) + (helper_top_down(n-1,k,dp) *( k-1));
    return dp[n];
}

int helper_bottom_up(int n,int k){
    vector<int> dp(n+1,0);
    dp[1]=k;
    dp[2]=k+ (k*(k-1));
    for(int i=3;i<=n;i++){
        dp[i]=(dp[i-2]*(k-1))  + (dp[i-1]*(k-1));
    }
    return dp[n];
}
int numberOfWays(int n, int k) {
    // Write your code here.
    if(n==0){
        return 0;
    }
    vector<int> dp(n+1,-1);
    return helper_top_down(n,k,dp);
}
