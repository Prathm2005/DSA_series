#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:

    void bark(){
        cout<<"Animal Barking"<<endl;
    }
};


class Dog:public Animal{
    public:

    void bark(){
        cout<<"Dog Barking"<<endl;
    }
};


int main(){
    Dog b1;
    b1.Animal::bark();
}