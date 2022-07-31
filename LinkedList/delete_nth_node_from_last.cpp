#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

node* deletenfromlast(node* &head,int k){
    node* dummy=new node(0);
    dummy->next=head;
    node* slow=dummy;
    node* fast=dummy;
    for(int i=1;i<=k;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return dummy->next;

}

node* insert_at_head(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
    return head;
}
void insert_at_tail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}

int main(){
    node* head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    //display(head);
    insert_at_head(head,0);
    display(head);
    deletenfromlast(head,2);
    display(head);
    return 0;
}