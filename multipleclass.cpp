#include<bits/stdc++.h>
using namespace std;

class Engineer{
    protected:
    string specialization;
    public:
    void work(){
        cout<<"I am Engineer, My specialization is in "<<specialization<<endl;
    }
};

class Youtuber{
    public:
    int subscribers;

    void count(){
        cout<<"My subscribers count are "<<subscribers<<endl;
    }
};

class Youteacher:public Engineer,public Youtuber{

    public:
    string name;
    int age;

    Youteacher(string specialization, int subscribers,string name,int age ){
        this->specialization=specialization;
        this->subscribers=subscribers;
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<specialization<<" "<<subscribers<<" "<<name<<" "<<age<<endl;
    }

};
int main(){
    Youteacher y1("SWE",100000,"Prathmesh",21);
    y1.display();

    y1.work();
    y1.count();
}
