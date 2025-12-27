/*Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to produce
a sum of money x using the available coins in such a way that the number of coins is minimal.
For eg,if the coins are {1,5,7} and the desired sum is 11,an optimal solution is 5+5+1 which requires 3 coins.
Input
The first input line has two integers n and x: the number of coins and the desired sum of money.
The second line has n distinct integers c_1,c_2,\dots,c_n: the value of each coin.
Output
Print one integer: the minimum number of coins. If it is not possible to produce the desired sum, print -1.
Constraints

1 < n < 100
1 < x < 10^6
1 < c_i < 10^6

Example
Input:
3 11
1 5 7

Output:
3*/
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;
vector<int>coins;
int mincoins(int x,vector<int>&dp){
    if(x==0) return 0;
    if(dp[x]!=-1) return dp[x];
    int ans=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(x-coins[i]<0) continue; 
        ans=min(ans,mincoins(x-coins[i],dp));
    }
    return dp[x]=1+ans;
}
int main(){
    int n,x;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter x:";
    cin>>x;
    coins.resize(n);
    cout<<"enter coins:";   
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<int>dp(x+1,-1);
    int ans=mincoins(x,dp);
    if(ans==INT_MAX) cout<<-1;
    else cout<<ans;
}