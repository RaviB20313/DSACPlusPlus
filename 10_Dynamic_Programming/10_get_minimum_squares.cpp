// Given a number N. Find the minimum number of squares of any number that sums to N. For Example: If N = 100 , N can be expressed as (10*10) and also as (5*5 + 5*5 + 5*5 + 5*5) but the output will be 1 as minimum number of square is 1 , i.e (10*10).

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
    int solve_top_down(int n,vector<int> &dp){
	    if(n==0){
	        return 0;
	    }
	    if(dp[n]!=-1){
	        return dp[n];
	    }
	    int ans=n;
	    for(int i=1;i*i <= n;i++){
	        ans=min(ans,1+solve_top_down(n-(i*i),dp));
	    }
	    return dp[n]=ans;
	}
    int solve_bottom_up(int n){
	    vector<int> dp(n+1,INT_MAX);
	    dp[0]=0;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j*j<=i;j++){
	            dp[i]=min(dp[i],1+dp[i-(j*j)]);
	        }
	    }
	    return dp[n];
	}
	int MinSquares(int n)
	{
	    // Code here
        //top-down
        vector<int> dp(n+1,-1);
	    return solve_top_down(n,dp);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}