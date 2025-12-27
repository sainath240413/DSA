#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cout<<"enter no of pieces:";
    cin>>n;
    hanoi(n,'a','b','c');
    /*a-> is source , b-> is helper , c->is destination*/
}