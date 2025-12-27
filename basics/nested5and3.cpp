#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<n<<" is divisible by both 5 and 3";
        }
        else{
        cout<<n<<" is divisible by 5 but not divisible by 3";
    }
    }
    else{
        cout<<n<<" is not divisible by both 5 and 3";
    }
    return 0;

}