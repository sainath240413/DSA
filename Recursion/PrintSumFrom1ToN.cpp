#include<iostream>
using namespace std;
//parameterised function
void printsum(int n,int sum){
    if(n==0){
        cout<<sum;
        return;
    }
    sum+=n;
    printsum(n-1,sum);   
}
//non-parameterised function
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"sum of 1 to "<<n<<" is:";
    printsum(n,0);
    cout<<sum(n);
}