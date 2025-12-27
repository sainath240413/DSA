#include<iostream>
using namespace std;
int main(){
    
    //without maths using extra variable
    
    int num = 100;
    for(int i=100;num>0;i--){
        cout<<num<<" ";
        num-=3;
    }

    //using while loop

    int n=100;
    while(n>0){
        cout<<n<<" ";
        n-=3;
    }
    
    return 0;
}