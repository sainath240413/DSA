/*Leetcode 322... revise...
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, 
return -1.
You may assume that you have an infinite number of each kind of coin.

Example 1:
Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1

Example 2:
Input: coins = [2], amount = 3
Output: -1

Example 3:
Input: coins = [1], amount = 0
Output: 0
 
Constraints:
1 <= coins.length <= 12
1 <= coins[i] <= 231 - 1
0 <= amount <= 104*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<vector<int>>dp;
int helper(vector<int>& coins, int amount,int i){
    if(i==coins.size()) {
        if(amount==0) return 0;
        else return INT_MAX;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    if(amount-coins[i]<0) return dp[i][amount]=helper(coins,amount,i+1);
    long long take=1LL+helper(coins,amount-coins[i],i);
    long long skip=helper(coins,amount,i+1);
    return dp[i][amount]=min(take,skip);
}
int coinChange(vector<int>& coins, int amount) {
    dp.resize(coins.size(),vector<int>(amount+1,-1));
    int ans=helper(coins,amount,0);
    if(ans!=INT_MAX) return ans;
    else return -1;
}
int main(){
    vector<int>coins={1,2,5};
    int amount=11;
    cout<<coinChange(coins,amount)<<endl;
}