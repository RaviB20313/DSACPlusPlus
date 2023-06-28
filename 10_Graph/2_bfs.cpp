//Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.

#include<bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    queue<int> q;
    q.push(0);
    vector<bool> visited(V,false);
    visited[0]=true;
    vector<int> ans;
    while(!q.empty()){
        int front=q.front();
        ans.push_back(front);
        q.pop();
        for(int i:adj[front]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }   
    }
    return ans;
}
int main(){
    return 0;
}