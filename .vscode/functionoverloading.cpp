#include<bits/stdc++.h>
using namespace std;

class Area{
    public:

    float calculatearea(int r){
        return 3.14 * r* r;
    }
    float calculatearea(int l,int b){
        return l*b;
    }



};

int main(){
    Area A1,A2;
    cout<<A1.calculatearea(4);
}