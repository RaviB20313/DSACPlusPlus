//Dijkstra's Algorithm
//Shortest paths
#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec,int vertices,int edges,int source){
    //ctreate adjacency list
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int> dist(vertices);
    for(int i=0;i<vertices;i++){
        dist[i]=INT_MAX;
    }

    set<pair<int,int>> st;
    dist[source]=0;
    st.insert({0,source});

    while(!st.empty()){
        auto top= *(st.begin());
        int nodeDistance = top.first;
        int topNode= top.second;
        //remove top node
        st.erase(st.begin());
        for(auto neigh:adj[topNode]){
            if(dist[neigh.first]> nodeDistance+ neigh.second ){
                auto record = st.find({dist[neigh.first], neigh.first});
                if(record != st.end()){
                    st.erase(record);
                }

                dist[neigh.first]=nodeDistance+ neigh.second ;
                st.insert({dist[neigh.first],neigh.first});
            }
        }
    }
    return dist;
}

int main(){

    return 0;
}