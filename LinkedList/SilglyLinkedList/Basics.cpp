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
int main(){
    node n1(10);
    node n2(20);
    node n3(30);
    n1.next=&n2;
    n2.next=&n3;
    // cout<<n1.data<<endl;
    // cout<<n2.data<<endl;
    // cout<<n3.data<<endl;
    //accessing data using dereferencing operator of pointer and it can be done using arrow operator
    // cout<<(*(n1.next)).data<<endl;
    // cout<<n2.next->data<<endl;
    //printing all nodes using loops
    node temp=n1;
    while(1){
        cout<<temp.data<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}