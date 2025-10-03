#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:

    virtual void speak(){
        cout<<"Animal is barking"<<endl;
    }
};

class Dog:public Animal{
    public:

    void speak(){
        cout<<"Dog is barking"<<endl;
    }
};


int main(){
    Animal *p;
    p=new Dog();

    p->speak();
}