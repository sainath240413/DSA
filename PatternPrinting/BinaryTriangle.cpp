#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    //method--->1   using extra variable

    int a;
    for(int i=1;i<=n;i++){
        if(i%2==0) a=0;  //row number even
        else a=1;   //row number odd 
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            if(a==1) a=0;
            else a=1;
        }
            cout<<endl;
    }

        //method--->2    using mathamatical condition

     for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
            cout<<endl;
    }
    return 0;
}