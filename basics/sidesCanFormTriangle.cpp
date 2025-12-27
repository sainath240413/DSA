#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first side:";
    cin>>a;
    cout<<"enter second side:";
    cin>>b;
    cout<<"enter third side:";
    cin>>c;
    if(a+b==c && b+c==a && a+c==b){
        cout<<"can form triangle";
    }
    else{
        cout<<"cannot form triangle";
    }
    return 0;
}