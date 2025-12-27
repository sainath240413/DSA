#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;

    //using inbuilt functions with header file math.h

    int ans=pow(a,b);
    cout<<ans;

    //using loops

    bool flag=true;      // true means ----> power is positive
    if(b<0){
        flag=false;
        b=-b;
    }
    float power=1;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }

    if(a==0 && b==0){
        cout<<"not defined";
    }
    else{
    cout<<a<<" raised to the power "<<b<<" is "<<power;
    }

    return 0;
}