#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int k){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        while(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    vector<int>arr={6,5,2,3,4,1};
    int k=2;
    cout<<solve(arr,k);
}