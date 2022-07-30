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
node* last_to_first(node* &head){
    node* temp=head;
    node*first;
    while(temp->next!=NULL){
        first=temp;
        temp=temp->next;
    }
    first->next=NULL;
    temp->next=head;
    return temp;
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
    //display(head);
    node* newhead=last_to_first(head);
    display(newhead);
    return 0;
}