//leetcode... revise
#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums){
    //method->1
    // int n=nums.size();
    // vector<int>pre(n);
    // vector<int>suf(n);
    // vector<int>res(n);
    // int p=nums[0];
    // pre[0]=1;
    // for(int i=1;i<n;i++){
    //     pre[i]=p;
    //     p*=nums[i];
    // }
    // p=nums[n-1];
    // suf[n-1]=1;
    // for(int i=n-2;i>=0;i--){
    //     suf[i]=p;
    //     p*=nums[i];
    // }
    // for(int i=0;i<n;i++){
    //     res[i]=pre[i]*suf[i];
    // }
    // return res;

    //method->2
    // int n=nums.size();
    // vector<int>pre(n);
    // vector<int>suf(n);
    // int p=nums[0];
    // pre[0]=1;
    // for(int i=1;i<n;i++){
    //     pre[i]=p;
    //     p*=nums[i];
    // }
    // p=nums[n-1];
    // suf[n-1]=1;
    // for(int i=n-2;i>=0;i--){
    //     suf[i]=p;
    //     p*=nums[i];
    // }
    // for(int i=0;i<n;i++){
    //     pre[i]=pre[i]*suf[i];
    // }
    // return pre;

    //method->3
    int n=nums.size();
    vector<int>pre(n);
    int p=nums[0];
    pre[0]=1;
    for(int i=1;i<n;i++){
        pre[i]=p;
        p*=nums[i];
    }
    p=nums[n-1];
    for(int i=n-2;i>=0;i--){
        pre[i]*=p;
        p*=nums[i];
    }
    return pre;
    /*in all 3 methods we are just removing one vector from the code and making 
    changes accordingly*/
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>a(n);
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>res=productExceptSelf(a);
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
}