#include<bits/stdc++.h>
using namespace std;

class Student{
    
    string name;
    int age,Rollno;
    public:
    void setname(string n){
        name=n;

    }
    void getname(){
        cout<<name<<endl;
    }

};

int main(){
    Student s1;
    // s1.name="Prathmesh";
    // cout<<s1.name<<endl;
    // s1.age=21;

    // cout<<s1.name<<" "<<s1.age<<endl;
    s1.setname("Prathmesh");
    s1.getname();
}

