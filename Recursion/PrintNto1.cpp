#include<iostream>
using namespace std;
void printNto1(int n){
    if(n==0) return;
    cout<<n<<" ";
    return printNto1(n-1);
}
//without using extra parameter
void print1toN(int n){
    if(n==0) return;
    print1toN(n-1);
    cout<<n<<" ";
}
//using extra parameter
void print1toN(int n,int i){
    if(i>n) return;
    cout<<i<<" ";
    print1toN(n,i+1);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    printNto1(n);
    cout<<endl<<endl;
    print1toN(n,1);
}