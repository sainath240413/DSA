#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void deletemiddlenode(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    int mid=count/2;
    for(int i=1;i<=mid;i++){
        if(i==mid-1){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    cout<<endl;
    display(head);
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    node* f=new node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    display(a);
    deletemiddlenode(a);
}