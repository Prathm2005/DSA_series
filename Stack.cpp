#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class Stack{
    private:

    int arr[MAX];
    int top;

    
    public:
    Stack(){
       top=-1;
    }   

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top==MAX-1;
    }

    void push(int val){
        if(isFull()){
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
    }

    int peek(){
        return arr[top];
    }

    void display(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }

        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
   Stack s1;
   s1.push(10);
   s1.push(20);
   s1.push(30);
   s1.push(40);
   s1.display();
}