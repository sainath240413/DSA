#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int sum=0;
    int diff=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            diff-=i;
        }
        else{
            sum+=i;
        }
    }
    cout<<sum+diff;
    return 0;

}