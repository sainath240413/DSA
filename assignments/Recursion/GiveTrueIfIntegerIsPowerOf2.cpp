#include<iostream>
using namespace std;
bool powerof2(int n){
    if(n<0) return false;
    if(n==1) return true;
    if(n%2!=0) return false;
    return  powerof2(n/2);
}
int main(){
    int n;
    cout<<"enter positive integer:";
    cin>>n;
    if(n<0) cout<<"incorrect input.";
    int a=powerof2(n);
    if(a==1) cout<<"true";
    else cout<<"false";
}