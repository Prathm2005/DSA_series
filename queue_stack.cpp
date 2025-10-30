#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>s1;
    stack<int>s2;
    int rearele;

    public:

    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);
        rearele=x;

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return;
        }

        s1.pop();
        if(!s1.empty()){
            stack<int>temp=s1;
            while(temp.size()>1){
                temp.pop();
            }
            rearele=temp.top();
        }
    }
    int front(){
        return s1.top();
    }
    int rear(){
        if(s1.empty()){
            cout<<"Stack is empty"<<endl;
            
        }
        return rearele;
    }
};

int main(){
    Queue q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    
   
    

    cout<<q1.front() <<endl;
    cout<<q1.rear()<<endl;
}