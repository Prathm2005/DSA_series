#include<bits/stdc++.h>
using namespace std;


class Human{
    protected:
    string name;
    int age;
    public:
    void work(){
        cout<<"Human can do work"<<endl;
    }
};

class Student:public Human{
    public:

    int roll_no;

    void stud(){
        cout<<"I am a student"<<endl;
    }

    Student(string name,int age,int roll_no){
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<endl;
    }

};

class Teacher:public Human{

    public:
    int salary;

    Teacher(string name,int age,int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }


};
int main(){
    Student s1("Prathmesh",21,24);
    Teacher t1("Rohit",34,60000);
    s1.display();
    t1.display();
    s1.work();
    t1.work();
    s1.stud();

    



}