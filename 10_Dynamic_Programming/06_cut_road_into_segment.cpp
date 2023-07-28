#include <bits/stdc++.h>
using namespace std;
int helper_top_down(int n,int x,int y,int z,vector<int> &dp){
    if(n<0){
        return INT_MIN;
    }
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int op1=helper_top_down(n-x,x,y,z,dp) +1;
    int op2=helper_top_down(n-y,x,y,z,dp) +1;
    int op3=helper_top_down(n-z,x,y,z,dp) +1;
    return dp[n]= max(op1,max(op2,op3));
}
int cutSegments_top_down(int n, int x, int y, int z) {
	// Write your code here.
    //top down
    vector<int> dp(n+1,-1);
    int a=helper_top_down(n,x,y,z,dp);
    if(a<0){
        return 0;
    }
    return a;
    //bottom up
}
int cutSegments_bottom_up(int n, int x, int y, int z) {
	// Write your code here.
    //bottom up
    vector<int> dp(n+1,-1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        if(i-x>=0 && dp[i-x] !=-1 ){
            dp[i]=max(dp[i],1+dp[i-x]);
        }
        if(i-y>=0 && dp[i-y]!=-1){
            dp[i]=max(dp[i],1+dp[i-y]);
        }
        if(i-z>=0 && dp[i-z]!=-1){
            dp[i]=max(dp[i],1+dp[i-z]);
        }
    }
    if(dp[n]<0){
        return 0;
    }
    return dp[n];

}
int main(){

    return 0;
}