#include<bits/stdc++.h>
using namespace std;


class Customer{
    string name;
    int balance;
    int age;

    public:
    Customer(string a,int b,int c){
        name=a;
        balance=b;
        age=c;

    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Invalid amount"<<endl;
        }
    }

    void display(){
        cout<<name<<" "<<balance<<" "<<age<<endl;
    }
};

int main(){
    Customer c1("Prathmesh",0,21);
    c1.deposit(100);
    c1.display();
}