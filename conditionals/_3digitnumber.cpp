#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter n: ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<n<<" is a 3 digit number";
    }
    else{
        cout<<n<<" is not a 3 digit number";
    }
    return 0;
    
}