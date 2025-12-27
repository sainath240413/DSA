#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int icj(int i, int j){
    return fact(i)/(fact(j)*fact(i-j));
}
int main(){
    int n,i,j;
    cout<<"enter n:";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<icj(i,j);
        }
        cout<<endl;
    }
}