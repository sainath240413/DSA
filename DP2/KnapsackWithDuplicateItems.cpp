/*GFG...
Given a set of items, each with a weight and a value, represented by the array wt and val respectively. Also, a knapsack with a 
weight limit capacity.The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.
Note: Each item can be taken any number of times.

Examples:
Input: val = [1, 1], wt = [2, 1], capacity = 3
Output: 3
Explanation: The optimal choice is to pick the 2nd element 3 times.

Input: val[] = [6, 1, 7, 7], wt[] = [1, 3, 4, 5], capacity = 8
Output: 48
Explanation: The optimal choice is to pick the 1st element 8 times.

Input: val[] = [6, 8, 7, 100], wt[] = [2, 3, 4, 5], capacity = 1
Output: 0
Explanation: We can't pick any element .hence, total profit is 0.

Constraints:
1 <= val.size() = wt.size() <= 1000
1 <= capacity <= 1000
1 <= val[i], wt[i] <= 100
*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(int c,vector<int>& val, vector<int>& wt,int i,int w){
    if(i==val.size()) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    if(w+wt[i]>c) return dp[i][w]=helper(c,val,wt,i+1,w);
    int take=val[i]+helper(c,val,wt,i,w+wt[i]);
    int skip=helper(c,val,wt,i+1,w);
    return dp[i][w]=max(take,skip);
}
int knapSack(vector<int>& val, vector<int>& wt, int c) {
    dp.resize(val.size(),vector<int>(c+1,-1));
    return helper(c,val,wt,0,0);
}
int main(){
    vector<int>val={1,1};
    vector<int>wt={2,1};
    int capacity=3;
    cout<<knapSack(val,wt,capacity);
}
