#include<iostream>
using namespace std;
class node{//user defined datatype
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class linkedlist{//user defined data structure
    public:
    node* head;
    node* tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        node* temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertatidx(int idx,int val){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            node* t=new node(val);
            node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;//according to 0 index
            }
            // for(int i=1;i<idx-1;i++){
            //     temp=temp->next;//according to 1 index
            // }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    int getatidx(int idx){
        if(idx<0 || idx>=size) {
            cout<<"invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteathead(){
        if(size==0){
            cout<<"list is empty!";
            return;
        }
        if(size==1) {
            head=tail=NULL;
            size--;
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteattail(){
        if(size==0){
            cout<<"list is empty!";
            return;
        }
        if(size==1) {
            head=tail=NULL;
            size--;
        }
        node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteatidx(int idx){
        if(idx<0 || idx>=size) return;
        else if(idx==0) deleteathead();
        else if(idx==size-1) deleteattail();
        else{
            node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    linkedlist ll;
    ll.insertattail(10);
    ll.insertattail(20);
    ll.insertattail(40);
    ll.insertattail(50);
    ll.insertattail(30);
    //ll.display();
    ll.insertathead(100);
    //ll.display();
    ll.insertatidx(2,169);
    ll.display();//display after inserting at index
    cout<<endl;
    cout<<ll.getatidx(2)<<endl;
    ll.deleteathead();
    ll.display();//deleting at head
    cout<<endl;
    ll.deleteattail();
    ll.display();//deleting at tail
    ll.deleteatidx(3);
    cout<<endl;
    ll.display();//deleting at idx
}