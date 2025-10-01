#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Linklist{
    private:
    Node* head;

    public:
    Linklist(){
        head=NULL;
    }

    void insert(int val){
        Node* newnode= new Node(val);

        if(head==NULL){
            head=newnode;
        }
        else{
            Node* temp=head;

            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }

    }

    void deletenode(int val){
        Node* temp=head;

        if(temp==NULL){
            cout<<"Linklist is empty"<<endl;
            return;
        }

        if(head->data==val){
            Node* todelete=head;
            head=head->next;
            delete todelete;
        }
        while(temp->next!=NULL && temp->next->data!=val){
            temp=temp->next;
        }
        if(temp->next==NULL){
            cout<<"No value found"<<endl;
            return;
        }

        Node* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }
    void  display(){
        if(head==NULL){
            cout<<"Linklist empty"<<endl;
            return;
        }
        Node* temp=head;

       while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
       }
       cout<<"NULL\n";
    }
    
};
int main(){
    Linklist l1;
    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
    l1.display();

    l1.deletenode(30);
    l1.display();
}