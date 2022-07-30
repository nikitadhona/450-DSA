#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    struct Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insert_at_tail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}

Node* reversek(Node* &head,int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr=currptr->next;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    
    return prevptr;
}

int main(){
    Node* head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    display(head);
    Node* newhead=reversek(head,3);
    display(newhead);

    return 0;
}