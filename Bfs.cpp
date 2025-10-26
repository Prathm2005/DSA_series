#include <bits/stdc++.h>
using namespace std;


void bfs(int node,vector<vector<int>>adj,vector<bool>visited){
   queue<int>q;
   q.push(node);
   visited[node]=true;

   while(!q.empty()){
    int val=q.front();
    cout<<val<<" ";
    q.pop();

    for(int neigh:adj[val]){
        if(!visited[neigh]){
            q.push(neigh);
            visited[neigh]=true;
        }
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

    bfs(0,adj,visited);
    return 0;
}