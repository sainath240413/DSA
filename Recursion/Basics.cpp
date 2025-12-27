#include<iostream>
using namespace std;
void print(int n){ //recursive function
    if(n==0) return; //condition to prevent infinite loop
    cout<<"hello"<<endl;
    print(n-1); //function calling itself
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    print(n);
}