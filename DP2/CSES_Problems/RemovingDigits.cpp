/*You are given an integer n. On each step, you may subtract one of the digits from the number.
How many steps are required to make the number equal to 0?
Input
The only input line has an integer n.
Output
Print one integer: the minimum number of steps.
Constraints
1 < n < 10^6
Example
Input:27
Output:5
Explanation: An optimal solution is 27 -> 20 -> 18 -> 10 -> 9 -> 0.*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> getDigits(int n){
    vector<int>digits;
    while(n>0){
        if(n%10!=0) digits.push_back(n%10);
        n/=10;
    }
    return digits;
}
// int rm(int n,vector<int>&dp){
//     if(n==0) return 0;
//     if(dp[n]!=-1) return dp[n];
//     vector<int>digits=getDigits(n);
//     int ans=INT_MAX;
//     for(int i=0;i<digits.size();i++){
//         ans=min(ans,rm(n-digits[i],dp));
//     }
//     return dp[n]=ans+1;
// }
int topDownRemovingDigits(int n,vector<int>&dp) {
    dp[0]=0;
    for(int i=1;i<=9;i++) dp[i]=1;
    for(int i=10;i<=n;i++){
        vector<int>d=getDigits(i);
        dp[n]=INT_MAX;
        for(int j=0;j<d.size();j++){
            dp[n]=min(dp[n],dp[n-d[j]]+1);
        }
        dp[n]=1+dp[n];
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<topDownRemovingDigits(n,dp);
}