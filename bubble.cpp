#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int>&arr){
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    vector<int>arr={5,9,1,4,6,3};

    bubble(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}