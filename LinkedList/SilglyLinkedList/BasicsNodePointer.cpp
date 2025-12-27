#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node* head){//space complexity=O(1) and time complexity=O(n)
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//displaying linked list using recursion
void displayrec(node* head){//space complexity=O(n) and time complexity=O(n)
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
int size(node* head){
    int count=0;
    node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    cout<<endl;
    displayrec(a);
    cout<<size(a);
}