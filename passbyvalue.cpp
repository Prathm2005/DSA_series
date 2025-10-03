#include <bits/stdc++.h>
using namespace std;

class Area{
    public:

    int calcarea(int r){
        return 3.14*r*r;
    }
    int calcarea(int l,int b){
        return l*b;
    }
};

int main(){
    Area a1;
    cout<<a1.calcarea(3)<<endl;;
    cout<<a1.calcarea(3,4);
}