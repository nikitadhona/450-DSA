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
void postorder(node* node){
    if(node==NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
    
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    postorder(root);
    return 0;
}