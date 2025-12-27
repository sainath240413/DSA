#include<iostream>
using namespace std;
class stack{
    public:
    int arr[5];
    int idx=-1;
    void push(int val){
        if(idx==4){
            cout<<"stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1) {
            cout<<"stack is empty"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1) {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.size();
    cout<<endl;
    cout<<s.top()<<endl;
    s.display();
    s.pop();
    cout<<s.top()<<endl;
    s.display();
}