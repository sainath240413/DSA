/*Leetcode 518...revise...
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount
of money.
Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the 
coins, return 0.
You may assume that you have an infinite number of each kind of coin.
The answer is guaranteed to fit into a signed 32-bit integer.

Example 1:
Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1

Example 2:
Input: amount = 3, coins = [2]
Output: 0
Explanation: the amount of 3 cannot be made up just with coins of 2.

Example 3:
Input: amount = 10, coins = [10]
Output: 1
 
Constraints:
1 <= coins.length <= 300
1 <= coins[i] <= 5000
All the values of coins are unique.
0 <= amount <= 5000*/
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>dp;
int helper(int amount,vector<int>&a,int i,int count){
    if(i==a.size()){
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    if(amount-a[i]<0) return dp[i][amount]=helper(amount,a,i+1,count);
    int take=helper(amount-a[i],a,i,count+1);
    int skip=helper(amount,a,i+1,count);
    return dp[i][amount]=(take+skip);
}
int change(int amount, vector<int>& coins) {
    int n=coins.size();
    dp.resize(n,vector<int>(amount+1,-1));
    return helper(amount,coins,0,0);
}
int main(){
    int amount=5;
    vector<int>coins={1,2,5};
    cout<<change(amount,coins);
}   