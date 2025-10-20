#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr){
    int n=arr.size();

    int onecnt=0;
    int minusonecnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            onecnt++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            minusonecnt++;
        }
    }
    if(onecnt==minusonecnt){
        cout<<"Zero can be formed"<<endl;
    }
    else{
         cout<<"Zero cannot be formed"<<endl;
    }
}
int main(){
    vector<int>arr={1,1,1,-1,1,-1,-1,-1};
    solve(arr);
    return 0;
}