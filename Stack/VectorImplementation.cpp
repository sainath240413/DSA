#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        if(v.size()==0) {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
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