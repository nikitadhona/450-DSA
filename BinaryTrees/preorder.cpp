#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
void preorder(node* node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    preorder(root);
    return 0;
}