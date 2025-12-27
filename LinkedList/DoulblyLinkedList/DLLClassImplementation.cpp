#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int val){  //constructor
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
    
};
class DLL{//user defined data structure
    public:
    ListNode* head;
    ListNode* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        ListNode* temp=new ListNode(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;//extra in dll
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        ListNode* temp=new ListNode(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;//extra in dll
            head=temp;
        }
        size++;
    }
    void insertatidx(int idx,int val){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            ListNode* t=new ListNode(val);
            ListNode* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;//according to 0 index
            }
            // for(int i=1;i<idx-1;i++){
            //     temp=temp->next;//according to 1 index
            // }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;//extra in dll
            t->next->prev=t;//extra in dll
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
            ListNode* temp=head;
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
        ListNode* temp=head;
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
            ListNode* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        ListNode* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    DLL list;
    list.insertattail(10);
    list.insertattail(20);
    list.insertattail(30);
    list.insertattail(40);
    list.insertattail(50);
    // list.display();
    list.insertattail(60);
    // list.display();
    list.insertathead(5);
    // list.display();
    list.insertatidx(2,15);
    list.display();
    list.deleteathead();
    list.display();
    list.deleteattail();
    list.display();
    list.deleteatidx(2);
    list.display();
}