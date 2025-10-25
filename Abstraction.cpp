#include<bits/stdc++.h>
using namespace std;

class Addition{
    int a,b,c;

    public:
    void add(int x,int y){
       a=x;
       b=y;
       c=a+b;

        cout<<"Sum of x and y are: "<<c<<endl;

    }
};

int main(){
    Addition a1;
    a1.add(3,4);

}
