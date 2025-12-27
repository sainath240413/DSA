/*gfg...revise...
Given n items, each with a specific weight and value, and a knapsack with a capacity of W, the task is to put the items in the 
knapsack such that the sum of weights of the items <= W and the sum of values associated with them is maximized. 
Note: You can either place an item entirely in the bag or leave it out entirely. Also, each item is available in single quantity.
Examples :
Input: W = 4, val[] = [1, 2, 3], wt[] = [4, 5, 1] 
Output: 3
Explanation: Choose the last item, which weighs 1 unit and has a value of 3.

Input: W = 3, val[] = [1, 2, 3], wt[] = [4, 5, 6] 
Output: 0
Explanation: Every item has a weight exceeding the knapsack's capacity (3).

Input: W = 5, val[] = [10, 40, 30, 50], wt[] = [5, 4, 2, 3] 
Output: 80
Explanation: Choose the third item (value 30, weight 2) and the last item (value 50, weight 3) for a total value of 80.

Constraints:
2 ≤ val.size() = wt.size() ≤ 103
1 ≤ W ≤ 103
1 ≤ val[i] ≤ 103
1 ≤ wt[i] ≤ 103*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int helper(int c,vector<int>&val,vector<int>&wt,int i,int w){
    if(i==val.size()) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    if(w+wt[i]>c) return dp[i][w]=helper(c,val,wt,i+1,w);
    int take=val[i]+helper(c,val,wt,i+1,w+wt[i]);
    int skip=helper(c,val,wt,i+1,w);
    return dp[i][w]=max(take,skip);
}
int knapsack(int c,vector<int>&val,vector<int>&wt){
    dp.resize(val.size(),vector<int>(c+1,-1));
    return helper(c,val,wt,0,0);
}
int main(){
    int c;
    cout<<"Enter the capacity of the knapsack: ";
    cin>>c;
    vector<int>val={1, 2, 3};
    vector<int>wt={4, 5, 1};
    cout<<knapsack(c,val,wt);
}
