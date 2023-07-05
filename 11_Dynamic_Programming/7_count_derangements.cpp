//Count Derangements (Permutation such that no element appears in its original position)
// Q:
// You are given N balls numbered from 1 to N and there are N baskets numbered from 1 to N in front of you, the ith basket is meant for the ith ball. Calculate the number of ways in which no ball goes into its respective basket.
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int help_top_down(int n, vector<long long int> &dp){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=(((n-1)%MOD) *((help_top_down(n-1,dp)%MOD) + (help_top_down(n-2,dp)%MOD))%MOD);
    return dp[n];
    
}
long long solve_bottom_up(int n){

}
long long int countDerangements(int n) {
    // Write your code here.
    vector<long long int > dp(n+1,-1);
    return help_top_down(n,dp);
}
