#include<iostream>
using namespace std;
int kthsymbol(int n,int k){
    if(n==1) return 0;
    if(k%2==0){ //flip the result when k is even
        int ans=kthsymbol(n-1,k/2);
        if(ans==1) return 0; 
        else return 1;
    }
    else{ //return same value of previous row when k is odd 
        return kthsymbol(n-1,k/2+1);
    }
}
/*         0   
    0      1      0        1
  0   1  1   0  0  1    1   0
  */
// 1 is repalced with 1 0 and 0 is replaced with 0 1 in each row
int main(){
    int n,k;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter k:";
    cin>>k;
    cout<<kthsymbol(n,k);
}