#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter n: ";
    cin>>n;

   //method-1 --->using logical operators

    if(n%5==0 && n%3==0){
        cout<<n<<" is divisible by 5 and 3";
    }
    else{
        cout<<n<<" is not divisible by 5 and 3";;
    }


    //method-2  ---->normal

    if(n%15==0){
         cout<<n<<" is divisible by 5 and 3";
    }
    else{
        cout<<n<<" is not divisible by 5 and 3";;
    }
    
    return 0;
    
}