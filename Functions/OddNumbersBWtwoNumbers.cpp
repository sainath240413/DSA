#include<iostream>
using namespace std;
void oddnum(int a,int b){
    for(int i=min(a,b)+1;i<=max(a,b)-1;i++){
        if(i%2!=0) cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    oddnum(a,b);

}