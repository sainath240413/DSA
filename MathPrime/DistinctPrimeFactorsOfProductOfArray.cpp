//leetcode... revise & do it again...
/*Given an array of positive integers nums, return the number of distinct prime factors in the product of the
elements of nums.
Note that:
A number greater than 1 is called prime if it is divisible by only 1 and itself.
An integer val1 is a factor of another integer val2 if val2 / val1 is an integer.

Example 1:
Input: nums = [2,4,3,7,10,6]
Output: 4
Explanation:
The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 25 * 32 * 5 * 7.
There are 4 distinct prime factors so we return 4.

Example 2:
Input: nums = [2,4,8,16]
Output: 1
Explanation:
The product of all the elements in nums is: 2 * 4 * 8 * 16 = 1024 = 210.
There is 1 distinct prime factor so we return 1.*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
/*here we create another boolean vector of size n+1 and stores true in it as all numbers are prime and we mark 
non prime numbers as false and count no of 1's in that array that count tell us no of prime numbers between range
of 1 to n*/
void fillsieve(vector<bool>&sieve){
    int n=sieve.size()-1;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*2;j<=n;j+=2){
            sieve[j]=0;
        }
    }
}
int distinctPrimeFactors(vector<int>&v){
    int n=v.size(),mx=-1;
    for(int i=0;i<n;i++){
        mx=max(mx,v[i]);
    }
    vector<bool>sieve(mx+1,1); //1 means prime
    if(mx+1>1) sieve[1]=0;
    if(mx+1>0) sieve[0]=0;
    /*fillsieve function will get you know about the prime factors*/
    fillsieve(sieve);
    /*primes array stores the primefactors of product of array*/
    vector<int>primes;
    for(int i=2;i<=mx;i++){
        if(sieve[i]==1) primes.push_back(i);
    }
    /*here we compare the taken array which is initialized with 0 and if the prime factors are taken or not */
    vector<bool>taken(primes.size(),0);
    for(int i=0;i<v.size();i++){
        int ele=v[i];
        for(int j=0;j<primes.size();j++){
            if(primes[j]>ele) break;
            if(ele%primes[j]==0) taken[j]=1;
        }
    }
    /*counting no of 1's in taken array*/
    int count=0;
    for(int i=0;i<taken.size();i++){
        if(taken[i]==1) count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<distinctPrimeFactors(v);
}