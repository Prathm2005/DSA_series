#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&arr){
    int n=arr.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=1){
            arr[i]=arr[j];
            i++;
        }
    }
        while(i<n){
             arr[i++] = 1;
        }
    return arr;
}
int main(){
    vector<int>arr={4,1,1,2,1,3,1,7};
    vector<int>ans=solve(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}