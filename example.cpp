#include <bits/stdc++.h>
using namespace std;

class Human{
    public:

    string name;
};

class Teacher:public Human{
    public:
   int age;
   int salary;
};
class Student:public Teacher{
    public:

    int marks;

    Student(string name,int age,int salary,int marks){
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->marks=marks;
        

    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<marks<<endl;
    }
};
 
int main(){
    Student s1("Prathmesh",25,56000,92);
    s1.display();
  
}



