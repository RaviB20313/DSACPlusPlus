#include <bits/stdc++.h>
using namespace std;
//top-down approach T.C O(n) SC O(n)
int solve_top_down(vector<int>&cost,int i,vector<int> &dp){
    if(i==0 || i==1){
        return cost[i];
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int op1=cost[i]+solve_top_down(cost,i-1,dp);
    int op2=cost[i]+solve_top_down(cost,i-2,dp);

    return dp[i] = min(op1,op2);
}
//bottom-up approach T.C O(n) SC O(n)
int solve_bottom_up(vector<int>&cost){
    int n=cost.size();
    vector<int> dp(n,-1);
    dp[0]=cost[0];
    dp[1]=cost[1];
    for(int i=2;i<n;i++){
        dp[i]=cost[i];
        dp[i]+=min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}
int minCostClimbingStairs(vector<int>& cost) {
    //top-down
        // int n=cost.size();
        // vector<int> dp(n,-1);
        // return min(solve_top_down(cost,n-1,dp),solve_top_down(cost,n-2,dp));  
    //bottom-up
        return solve_bottom_up(cost);

}

int main(){

    return 0;
}