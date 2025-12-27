#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//n to 1 in minimym number of steps if(n%2==0) n=n/2 && if(n%3==0) n=n/3 else n=n-1
//method 1: recursive 
int helper(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1+min(helper(n-1),min((n%2==0) ? helper(n/2) :INT_MAX,(n%3==0) ? helper(n/3): INT_MAX));
}
//method 2: dp
int helper(int n,vector<int>&dp){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans2=INT_MAX, ans3=INT_MAX;
    if(n%2==0) ans2=helper(n/2,dp);
    if(n%3==0) ans3=helper(n/3,dp);
    return dp[n]=1+min(helper(n-1,dp),min(ans2, ans3));
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<helper(n,dp);
}