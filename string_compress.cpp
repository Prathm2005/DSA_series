#include<bits/stdc++.h>
using namespace std;

string solve(string str){
    int n=str.size();
    string result="";

    for(int i=0;i<n;){
        char ch=str[i];
        int cnt=0;

        while(i<n && str[i]==ch){
            cnt++;
            i++;
        }
    result+=ch +to_string(cnt);
    }
    return result;
}
int main(){
    string str="aaaabbbcc";
    cout<<solve(str)<<endl;
}