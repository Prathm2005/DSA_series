#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int age;

    public:

    void setname(string name,int age){
       this->name=name;
       this->age=age;
    }

    void getname(){
        cout<<name<<" "<<age<<endl;
    }
};



int main(){
    Student s1;
    s1.setname("Rohit",45);
    s1.getname();
}