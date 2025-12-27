//leetcode...revise...
/*Given an integer n,return the number of prime numbers that are strictly less than n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:
Input: n = 0
Output: 0

Example 3:
Input: n = 1
Output: 0*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
//method->1 it's correct but takes O(n*root(n)) time limit exceeded
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int countprimes(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(isprime(i)) count++;
    }
    return count;
}
//method->2 sieve method time complexity is almost O(n)
/*here we create another boolean vector of size n+1 and stores true in it as all numbers are prime and we mark 
non prime numbers as false and count no of 1's in that array that count tell us no of prime numbers between range
of 1 to n*/
void fillsieve(vector<bool>&v){
    int n=v.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i){
                v[j]=0;
            }
        }
    }
}
int countPrimes(int n){
    if(n<=2) return 0;
    n=n-1;
    int count=0;
    vector<bool>v(n+1,1); //1 means prime
    fillsieve(v);
    v[0]=0,v[1]=0;
    for(int i=2;i<=n;i++){
        if(v[i]==1) count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<countprimes(n);
}