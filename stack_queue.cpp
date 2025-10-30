#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int>q1;
    queue<int>q2;

    public:
    void push(int x){
        q2.push(x);

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q2,q1);
    }
    void pop(){
        if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        q1.pop();
    }

    int top(){
        return q1.front();
    }
};
int main(){
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.pop();
    cout<<s1.top();
}