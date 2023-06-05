#include <bits/stdc++.h>
using namespace std;
bool dfscycle(int i,int parent,vector<int> adj[],vector<bool> &visited){
    visited[i]=true;    
    for(auto neigh:adj[i]){
        if(visited[neigh] && neigh==parent){
            continue;
        }
        if(visited[neigh]){
            return true;
        }
        bool temp =dfscycle(neigh,i,adj,visited);
        if(temp==true){
            return true;
        }            
    }
    return false;
}

bool isCycle_dfs(int V, vector<int> adj[]) {
    // Code here
    vector<bool> visited(V+1,false);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            bool ans=dfscycle(i,-1,adj,visited);
            if(ans==true){
                return true;
            }
        }
    }   
    return false;    
}

bool bfs_cycle(int node,vector<int> adj[],vector<bool> &visited){
    unordered_map<int,int> parent;
    queue<int> q;
    q.push(node);
    parent[node]= -1;
    visited[node]=true;
    while(!q.empty()){
        int front =  q.front();
        q.pop();
        for(int i:adj[front]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i]=front;
            }else{
                if(i!= parent[front]){
                    return true;
                }
            }
        }
    }
    return false;
}
bool iscycle_bfs(int V,vector<int> adj[]){
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            if(bfs_cycle(i,adj,visited)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    return 0;
}