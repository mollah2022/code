#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<char>>& graph,unordered_set<char>& vis,
         unordered_set<char>& pvis,char v) {
    vis.insert(v);
    pvis.insert(v);
    for(auto i : graph[v-'A']) {
        if(vis.find(i)==vis.end()) {
            if(dfs(graph,vis,pvis,i)==true)
                return true;
        }
        else if(pvis.find(i)!=pvis.end())
            return true;
    }
    pvis.erase(v);
    return false;

}

bool isCyclic(vector<vector<char>>& graph) {

    unordered_set<char> vis;
    unordered_set<char> pvis;
    for (int i=0;i<graph.size();i++) {
         char node='A'+i;
        if(!graph[i].empty()&&vis.find(node)==vis.end()) {
            if(dfs(graph,vis,pvis,node)==true)
                return true;
        }
    }
    return false;

}
int main() {

    int V, E;
    cout<<"Number of Nodes: ";
    cin>>V;
    cout<<"Number of Edges: ";
    cin>>E;

    vector<vector<char>> graph(26);
    cout<<"Edges:"<<endl;
    for (int i=0;i<E;i++) {
        char u,v;
        cin>>u>>v;
        //cout<<x<<y<<endl;
        graph[u-'A'].push_back(v);
    }

    if(isCyclic(graph)){
    cout<<"Deadlock: Yes"<<endl;
    }
    else{
     cout<<"Deadlock: No"<<endl;
     }
    return 0;
}
