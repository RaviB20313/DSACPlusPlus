#include <bits/stdc++.h>
using namespace std;
//bfs_directed_graph

bool iscyclic_bfs(int V,vector<int> adj[]){
    int indegree[V]={0};
    for(int i=0;i<V;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int count =0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        count ++;
        for(auto i:adj[node]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    if(count == V){
        return false;
    }
    return true;
}

//dfs_directed_graph

bool checkCycle_dfs(int node, vector < int > adj[], int vis[], int dfsVis[]) {
    vis[node] = 1;
    dfsVis[node] = 1;
    for (auto it: adj[node]) {
        if (!vis[it]) {
            if (checkCycle_dfs(it, adj, vis, dfsVis)) return true;
        } else if (dfsVis[it]) {
          return true;
        }
    }
    dfsVis[node] = 0;
    return false;
}
bool isCyclicdfs(int N, vector < int > adj[]) {
      int vis[N], dfsVis[N];
     
      for(int i = 0; i < N; i++){
        vis[i] = 0;
        dfsVis[i] = 0;
      }

      for (int i = 0; i < N; i++) {
        if (!vis[i]) {
          if (checkCycle_dfs(i, adj, vis, dfsVis)) {
            return true;
          }
        }
      }
      return false;
    }

int main(){
	
    return 0;
}