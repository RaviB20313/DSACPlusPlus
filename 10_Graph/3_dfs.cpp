#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
    map<int,bool> visited;
    map<int,list<int>> adj;

    void addedge(int v,int u);
    void dfs(int v);
};
void Graph::addedge(int u,int v){
    adj[u].push_back(v);
    // adj[v].push_back(u);
}
void Graph::dfs(int v){
    visited[v]=true;
    cout<<v<<" ";
    for(auto i:adj[v]){
        if(!visited[i]){
            dfs(i);
        }
    }
}
int main(){
    Graph g;
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
 
    // Function call
    g.dfs(2);
    return 0;
}