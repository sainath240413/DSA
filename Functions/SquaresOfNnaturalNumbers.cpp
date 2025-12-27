#include<iostream>
using namespace std;
void square(int n){
    int a;
    for(int i=1;i<=n;i++){
        a=i*i;
        cout<<a<<" ";
    }
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    square(n);
}