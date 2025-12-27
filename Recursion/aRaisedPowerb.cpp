#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0 || a==1) return 1;
    return a*power(a,b-1);
    //time complexity O(b)
}
int main(){
    int a,b;
    cout<<"enter base(a):";
    cin>>a;
    cout<<"enter power(b):";
    cin>>b;
    cout<<power(a,b);
}