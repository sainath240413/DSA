/*You are given the customer visit log of a shop represented by a 0-indexed string 
customers consisting only of characters 'N' and 'Y':

if the ith character is 'Y', it means that customers come at the ith hour
whereas 'N' indicates that no customers come at the ith hour.
If the shop closes at the jth hour (0 <= j <= n), the penalty is calculated as follows:

For every hour when the shop is open and no customers come, the penalty increases by 1.
For every hour when the shop is closed and customers come, the penalty increases by 1.
Return the earliest hour at which the shop must be closed to incur a minimum penalty.

Note that if a shop closes at the jth hour, it means the shop is closed at the hour j.

Input: customers = "YYNY"
Output: 2
Explanation: 
- Closing the shop at the 0th hour incurs in 1+1+0+1 = 3 penalty.
- Closing the shop at the 1st hour incurs in 0+1+0+1 = 2 penalty.
- Closing the shop at the 2nd hour incurs in 0+0+0+1 = 1 penalty.
- Closing the shop at the 3rd hour incurs in 0+0+1+1 = 2 penalty.
- Closing the shop at the 4th hour incurs in 0+0+1+0 = 1 penalty.
Closing the shop at 2nd or 4th hour gives a minimum penalty. Since 2 is earlier, 
the optimal closing time is 2.
*/

/*leetcode revise...*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int minpenalty(string str){
    //method->1 raghav sir method
    // int n=str.size();
    // vector<int>pre(n+1);//no of no's before that index 
    // vector<int>suf(n+1);//no of yes's before that index 
    // pre[0]=0;
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     if(str[i]=='N') count++;
    //     pre[i+1]=pre[i]+count;
    // }
    // suf[n]=0;
    // for(int i=n-1;i>=0;i--){
    //     int count=0;
    //     if(str[i]=='Y') count++;
    //     suf[i]=suf[i+1]+count;
    // }
    // int minpen=n;
    // for(int i=0;i<=n;i++){
    //     pre[i]+=suf[i];
    //     int penalty=pre[i];
    //     minpen=min(minpen,penalty);
    // }
    // for(int i=0;i<=n;i++){
    //     int penalty=pre[i];
    //     if(penalty==minpen) return i;
    // }
    // return n;
    //method->2 optimized leetcode ans
    int n = str.size();
    int x = 0;
    int idx = -1;
    int maxi = 0;
    for(int i=0; i<n; i++){
        if(str[i] == 'Y') x++;
        else x--;
        if(x > maxi){
            maxi = x;
            idx = i;
        }
    }
    return idx + 1;
}
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<minpenalty(str);
}