#include<iostream>
#include<vector>
using namespace std;
void decimaltobinary(int num){
    if(num==0) return;
    decimaltobinary(num/2);
    cout<<num%2;
}
int main(){
    int num;
    cout<<"enter decimal number:";
    cin>>num;
    decimaltobinary(num);
}