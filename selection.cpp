#include <bits/stdc++.h>
using namespace std;

void selection(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini ]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
    vector<int>arr={5,2,8,4,1,6};

    selection(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}