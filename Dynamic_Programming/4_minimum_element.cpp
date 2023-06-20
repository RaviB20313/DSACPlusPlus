#include <bits/stdc++.h>
using namespace std;
int solve_top_down(vector<int> &num,vector<int> &dp,int x){
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int mini=INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans = solve_top_down(num,dp,x-num[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }

    return dp[x]=mini;


}
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    // int n=num.size();
    // vector<int> dp(x+1,INT_MAX);
    // dp[0]=0;
    // for(int i=1;i<=x;i++){
    //     for(int j=0;j<n;j++){
    //         if(i-num[j] >=0 && dp[i-num[j]] != INT_MAX ){
    //             dp[i]=min(dp[i],dp[i-num[j]]+1);    
    //         }
    //     }
    // }
    // if(dp[x]==INT_MAX){
    //     return -1;
    // }
    // return dp[x];
    
}