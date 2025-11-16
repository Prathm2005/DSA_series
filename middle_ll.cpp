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
void printlist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
   
}
int length(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;  
}
int middlelist(Node* head){
    int len=length(head);
    
    int mid=len/2;
 
    while(mid--){
        head=head->next;
    }
    return head->data;
}

int main(){
    Node* node=new Node(10);
    node->next=new Node(20);
    node->next->next=new Node(30);
    node->next->next->next=new Node(40);
    node->next->next->next->next=new Node(50);
    node->next->next->next->next->next=new Node(50);
    node->next->next->next->next->next->next=new Node(50);
    printlist(node);
    cout<<endl;
    cout<<middlelist(node);
    return 0;
}