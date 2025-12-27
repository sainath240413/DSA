#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int a;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        a=1;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1;k<=i;k++){
            cout<<a;
            a++;
        }
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
        
        cout<<endl;
    }

    
    return 0;
}