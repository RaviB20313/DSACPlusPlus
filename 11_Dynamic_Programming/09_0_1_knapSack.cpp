// We are given N items where each item has some weight and profit associated with it. We are also given a bag with capacity W, [i.e., the bag can hold at most W weight in it]. The target is to put the items into the bag such that the sum of profits associated with them is the maximum possible. 

// Note: The constraint here is we can either put an item completely into the bag or cannot put it at all [It is not possible to put a part of an item into the bag].
#include <bits/stdc++.h>
using namespace std;

int solve_top_down(vector<int> &weight, vector<int> &value, int index, int cap,vector<vector<int>> &dp){
    if(index==0){
        if(weight[0]<= cap){
            return value[0];
        }else{
            return 0;
        }
    }
    if(dp[index][cap]!=-1){
        return dp[index][cap];
    }
    int include=0;
    if(weight[index] <= cap){
        include= solve_top_down(weight,value,index-1,cap-weight[index],dp) + value[index];
    }
    int exclude=solve_top_down(weight,value,index-1,cap,dp);
    return dp[index][cap]= max(exclude,include);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
    vector<vector<int>> dp(n,vector<int>(maxWeight+1 , -1));
    return solve_top_down(weight,value,n-1,maxWeight,dp);
}

int knapsack_bottom_up(vector<int> weight, vector<int> value, int n, int maxWeight) 
{   
    //step1:
	vector<vector<int>> dp(n,vector<int> (maxWeight+1,0));

    //step2:analyse Base case
    for(int w=weight[0];w<=maxWeight;w++){
        if(weight[0]<=maxWeight){
            dp[0][w]=value[0];
        }
        else{
            dp[0][w]=0;
        }
    }

    for(int index=1;index<n;index++){
        for(int w=0;w<=maxWeight;w++){
            int include = 0;
            if(weight[index]<=w){
                include = value[index]+ dp[index-1][w-weight[index]];
            }
            int exclude = 0+dp[index-1][w];
            dp[index][w]=max(exclude,include);
        }
    }
    return dp[n-1][maxWeight];
}
