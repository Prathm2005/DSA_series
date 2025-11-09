#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int start,int end){
    int mid=start+(end-start)/2;
    int len1=mid-start+1;
    int len2=end-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int mainarrindex=start;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrindex++];
    }
    mainarrindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrindex++];
    }

    int index1=0;
    int index2=0;
    mainarrindex=start;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrindex++]=first[index1++];
        }
        else{
            arr[mainarrindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrindex++]=second[index2++];
    }

}
void mergesort(vector<int>&arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end);
}
int main(){
    vector<int>arr={4,9,6,2,3,1};
    int n=arr.size();

    mergesort(arr,0,n-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}