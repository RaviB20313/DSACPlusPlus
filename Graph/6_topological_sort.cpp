#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    vector<int> indegree(V,0);
	    for(int i=0;i<V;i++){
	        for(auto j:adj[i]){
	            indegree[j]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty()){
	        int front = q.front();
	        q.pop();
	        ans.push_back(front);
	        for(auto i:adj[front]){
	            indegree[i]--;
	            if(indegree[i]==0){
	                q.push(i);
	            }
	        }
	    }
	    return ans;
	}

int main(){

    return 0;
}