#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main(){
    Node* node= new Node(1);
    node->left= new Node(2);
    node->right= new Node(3);
    node->left->left= new Node(4);
    node->left->right= new Node(5);
    node->right->left= new Node(6);
    node->right->right= new Node(7);

    
    // cout<<node->data<<endl;
    // cout<<node->left->data<<" ";
    // cout<<node->right->data<<endl;
    // cout<<node->left->left->data<<" ";
    // cout<<node->left->right->data<<" ";
    // cout<<node->right->left->data<<" ";
    // cout<<node->right->right->data<<" ";
    inorder(node);
    cout<<endl;
    preorder(node);
    cout<<endl;
    postorder(node);
}
