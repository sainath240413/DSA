#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    if(b==0) return 1;
    if(a==0 && b==0) return 0;
    if(b%2==0) return pow(a,b/2)*pow(a,b/2);
    if(b%2!=0) return pow(a,(b/2)+1)*pow(a,(b/2));
    //time complexity is O(log b)
}
int main(){
    int a,b;
    cout<<"enter base:";
    cin>>a;
    cout<<"enter power:";
    cin>>b;
    cout<<pow(a,b);
}