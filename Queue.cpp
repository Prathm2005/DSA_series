#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class Queue{
    private:

    int arr[MAX];
    int front;
    int rear;

    
    public:
    Queue(){
       front=-1;
       rear=-1;
    }   

    bool isEmpty(){
        return front==rear;
    }

    bool isFull(){
        return rear==MAX;
    }

    void push(int val){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[rear++]=val;
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        return arr[front];
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }

        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
   Queue q1;
   q1.push(10);
   q1.push(20);
   q1.push(30);
   q1.push(40);
   q1.display();
}