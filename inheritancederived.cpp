#include<bits/stdc++.h>
using namespace std;


class   Human{
    public:
   string name;
   int age;
   int weight;
};

   class Student:protected Human{
    private:
    string name;
    int age;
    public:

    void run(string a,int b,int c){
        name=a;
        age=b;
        weight=c;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
   };

int main(){
    Student s1;
    s1.run("Prathmesh",21,63);
    s1.display();

    
}