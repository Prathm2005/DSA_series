#include<bits/stdc++.h>
using namespace std;

class   Human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void run(){
        a=10;
        b=20;
        c=30;

    }
    void display(){
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }

};

int main(){
    Human pm;
    pm.c=10;
    cout<<pm.c<<endl;

    pm.run();
    pm.display();
}