#include<iostream>
using namespace std;
void preinpost(int n){
    if(n==0) return;
    cout<<"pre->"<<n<<endl;
    preinpost(n-1);
    cout<<"in->"<<n<<endl;
    preinpost(n-1);
    cout<<"post->"<<n<<endl;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    preinpost(n);
}