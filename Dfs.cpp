#include <bits/stdc++.h>
using namespace std;


void dfs(int node,vector<vector<int>>adj,vector<bool>visited){
    cout<<node<<" ";
    visited[node]=true;

    for(int neigh:adj[node]){
        if(!visited[neigh]){
            dfs(neigh,adj,visited);
        }
    }
}

int main(){
    int V=5;

    vector<vector<int>>adj(V);
    adj[0]={1,2};
    adj[1]={0,3};
    adj[2]={0,4};
    adj[3]={1};
    adj[4]={2};

    vector<bool>visited(V,false);

    dfs(0,adj,visited);
    return 0;
}