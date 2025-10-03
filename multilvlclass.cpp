#include<bits/stdc++.h>
using namespace std;

class Human{

    protected:
    string name;
    int age;

    public:
    void introduce(){
        cout<<"I am a Human"<<endl;
    }

};

class Employee:public Human{
    protected:
    int salary;
    public:

    void monsal(){
        cout<<"My monthly salary is "<<salary<<endl;
    }

};

class Manager:public Employee{
    public:
    string department;

    void mydept(){
        cout<<"My department is "<<department<<endl;
    }

    Manager(string name,int age,int salary,string department){
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->department=department;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<department<<" "<<endl;;
    }

};


int main(){
    Manager m1("Prathmesh",21,120000,"Engineering");
    m1.display();
    m1.introduce();
    m1.monsal();
    m1.mydept();
}