#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adjlist;

    void addedge(int u,int v){
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    void printadj(){
        for(auto i:adjlist){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g;
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(1,4);
    g.addedge(2,5);
    g.addedge(2,6);

    g.printadj();

    return 0;
}