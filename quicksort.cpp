#include<bits/stdc++.h>
using namespace std;

int quick(vector<int>&arr,int start,int end){
    int pivot=arr[start];
    int i=start;
    int j=end;

    while(i<j){
        while(arr[i]<=pivot && i<=end-1){
            i++;
        }
        while(arr[j]>=pivot && j>=start+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);
    return j;
}
void quicksort(vector<int>&arr,int start,int end){
    if(start<end){
        int mid=quick(arr,start,end);
        quicksort(arr,start,mid-1);
        quicksort(arr,mid+1,end);
    
    }
}
int main(){
    vector<int>arr={4,2,1,5,3};
    int n=arr.size();

    quicksort(arr,0,n-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}