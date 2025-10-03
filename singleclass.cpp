#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"Human is working"<<endl;
    }
};

class Student :public Human{
    public:
    int fees;
    int roll_no;

    public:
    Student(string name, int age, int roll_no,int fees){
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->fees=fees;

    }
    

    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
      
    }
};

int main(){
    Student s1("Prathmesh",21,24,50000);
    s1.work();
    s1.display();
}