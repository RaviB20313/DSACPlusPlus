#include <bits/stdc++.h>
using namespace std;
int helper_top_down(int n, vector<int> &nums,vector<int> &dp){
    if(n<0){
        return 0;
    }
    if(n==0){
        return nums[0];
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int op1=nums[n]+helper_top_down(n-2,nums,dp);
    int op2=helper_top_down(n-1,nums,dp);
    
    return dp[n]=max(op1,op2);
}
int bottom_up_approach(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,0);
    dp[0]=nums[0];
    for(int i=1;i<n;i++){
        int include = nums[i];
        if(i-2>=0){
            include+=dp[i-2];
        }
        int exclude = dp[i-1];
        dp[i]=max(include,exclude);
    }
    return dp[n-1];

}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.

    //using topdown approach
    // int n=nums.size();
    // vector<int> dp(n,-1);
    // return helper_top_down(n-1,nums,dp);

    //using bottomup approach
    return bottom_up_approach(nums);
}
int main(){

    return 0;
}