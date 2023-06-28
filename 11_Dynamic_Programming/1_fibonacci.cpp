#include <bits/stdc++.h>
using namespace std;
//top-down approach T.C O(n) SC O(n)
int fib(int n,vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]= fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}
//bottom up - tabulation T.C O(n) SC O(n)
int tabulation_fib(int n){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
//space optimization T.C O(n) SC O(1)
int fib_space_optimization(int n){
    int prev2=0;
    int prev1=1;
    for(int i=2;i<=n;i++){
        int temp=prev1+prev2;
        prev2=prev1;
        prev1=temp;
    }
    return prev1;
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n,-1);
    cout<<fib(n,dp);
    return 0;
}