//leetcode...
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int diagonalPrime(vector<vector<int>>& nums) {
    int n=nums.size();
    int res=0;
    for(int i=0;i<n;i++){
        if(isprime(nums[i][i])){
            res=max(res,nums[i][i]);
        } 
        if(isprime(nums[i][n-i-1])){
            res=max(res,nums[i][n-i-1]);
        } 
    }
    return res;
}
int main(){
    int n;
    cout<<"enter size of 2d array:";
    cin>>n;
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<diagonalPrime(v);
}