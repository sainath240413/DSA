/*using singly linked list:
insertAtHead: O(1)
insertAtTail: O(1)
removeAtHead: O(1)
removeAtTail: O(n)

using doubly linked list:
insertAtHead: O(1)
insertAtTail: O(1)
removeAtHead: O(1)
removeAtTail: O(1)
*/

/*with STL deque:
in #include<deque>
Deque (double-ended queue) is a sequence container that allows fast insertion and deletion at both ends

Iterators:
begin->	      Return iterator to beginning (public member function)
end->	      Return iterator to end (public member function)
rbegin->      Return reverse iterator to reverse beginning (public member function)
rend->	      Return reverse iterator to reverse end (public member function)
cbegin->      Return const_iterator to beginning (public member function)
cend->	      Return const_iterator to end (public member function)
crbegin->     Return const_reverse_iterator to reverse beginning (public member function)
crend->	      Return const_reverse_iterator to reverse end (public member function)

Capacity:
size->	            Return size (public member function)
max_size->	        Return maximum size (public member function)
resize->	        Change size (public member function)
empty->	            Test whether container is empty (public member function)
shrink_to_fit->	    Shrink to fit (public member function)

Element access:
operator[]->  Access element (public member function)
at->	      Access element (public member function)
front->	      Access first element (public member function)
back->	      Access last element (public member function)

Modifiers:
assign->	      Assign container content (public member function)
push_back->	      Add element at the end (public member function)
push_front->	  Insert element at beginning (public member function)
pop_back->	      Delete last element (public member function)
pop_front->	      Delete first element (public member function)
insert->	      Insert elements (public member function)
erase->	          Erase elements (public member function)
swap->	          Swap content (public member function)
clear->	          Clear content (public member function)
emplace->	      Construct and insert element (public member function)
emplace_front->	  Construct and insert element at beginning (public member function)
emplace_back->	  Construct and insert element at the end (public member function)
*/
#include<iostream>
using namespace std;
//without STL
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
    
};
class queue{
    public:
    ListNode* head;
    ListNode* tail;
    int size;
    queue(){
        head=tail=NULL;
        size=0;
    }
    void pushback(int val){
        ListNode* temp=new ListNode(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;//extra in dll
            tail=temp;
        }
        size++;
    }
    void pushfront(int val){
        ListNode* temp=new ListNode(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;//extra in dll
            head=temp;
        }
        size++;
    }
    void popfront(){
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
    void popback(){
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
    int front(){
        if(size==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return head->val;  
    }
    int back(){
        if(size==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return tail->val;
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
    queue dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushfront(40);
    cout<<"front element: "<<dq.front()<<endl; 
    cout<<"back element: "<<dq.back()<<endl; 
    dq.display();  
    dq.popback(); 
    cout<<"front element after pop: "<<dq.front()<<endl; 
    cout<<"back element after pop: "<<dq.back()<<endl;   
    dq.display();
}