#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class stack{
    public:
    Node* head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty";
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty";
            return -1;
        }
        return head->val;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        temp=head;
        cout<<endl;
        displayrev(temp);
        cout<<endl;
    }
    void displayrev(Node* temp){
        if(!temp) return;
        displayrev(temp->next);
        cout<<temp->val<<" ";
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<endl;
    cout<<s.top()<<endl;
    s.display();
    s.pop();
    cout<<s.top()<<endl;
    s.display();
}