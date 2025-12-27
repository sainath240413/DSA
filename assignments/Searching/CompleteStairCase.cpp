//leetcode...

/* You have n coins and you want to build a staircase with these coins. The staircase consists of k rows 
where the ith row has exactly i coins. The last row of the staircase may be incomplete.
 Given the integer n, return the number of complete rows of the staircase you will build.

 Example 1:
 Input: n = 5
 Output: 2
 Explanation: Because the 3rd row is incomplete, we return 2.

 Example 2:
 Input: n = 8
 Output: 3
 Explanation: Because the 4th row is incomplete, we return 3.*/
#include<iostream>
using namespace std;
int staircase(int n){
    /*it's a brute force approach it's time complexity is O(n^1/2)*/
    if(n==1) return 1;
    int count=0;
    for(int i=1;i<=n;i++){
        count++;
        n-=i;
    }
    return count;

    /*using binary search it's time complexity will be O(log n)*/
    int lo=0,hi=n;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int total=mid*(mid+1)/2;
        if(total==n) return mid;
        else if(total<n) lo=mid+1;
        else hi=mid-1;
    }
    return hi;
    /*space complexity in both approaches are O(1)*/
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<staircase(n);
}