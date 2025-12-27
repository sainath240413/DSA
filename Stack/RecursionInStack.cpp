#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>s){
    if(s.empty()) return;
    int x=s.top();
    //cout<<x<<" ";//normal printing
    s.pop();
    display(s);
    cout<<x<<" ";//reverse printing
    s.push(x);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    display(s);
}