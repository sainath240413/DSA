#include<bits/stdc++.h>
using namespace std;
int minimumProductSubset(vector<int>&a){
    int n=a.size();
    if(n==1) return a[0];

    //for no negative numbers
    sort(a.begin(),a.end());
    //return a[0];

    //for all type of inputs
    int neg=0,pos=0,zero=0;
    int prod_neg=1,prod_pos=1;
    int largest_negetive=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<0) {
            neg++;
            prod_neg*=a[i];
            largest_negetive=max(largest_negetive,a[i]);
        }
        else if(a[i]>0) {
            pos++;
            prod_pos*=a[i];
        }
        else zero++;
    }
    if(zero==0 && neg==0) return a[0];
    if(zero>0 && neg==0) return 0;
    if(neg%2!=0){
        return prod_neg*prod_pos;
    }
    else return (prod_neg/largest_negetive)*prod_pos;
}
int main(){
    vector<int>a={-2,-3,1,4,-2};
    cout<<minimumProductSubset(a);
}
