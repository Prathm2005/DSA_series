#include<bits/stdc++.h>
using namespace std;

class  Constructor{
    public:
    string name;
    int age;
    int balance;


    Constructor(string name,int age,int balance){
        this->name=name;
        this->age=age;
        this->balance=balance;
    }
    // Constructor(string name,int age){
    //     this->name=name;
    //     this->age=age;
        
    // }
    Constructor(Constructor &B){
        name=B.name;
        age=B.age;
        balance=B.balance;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<balance<<endl;
        
    }
    ~Constructor(){
        cout<<"Destructor called";
    }
};

int main(){
    Constructor a1("Prathmesh",21,1000000);
   
    a1.display();

    Constructor a2(a1);
    a2.display();
    
}