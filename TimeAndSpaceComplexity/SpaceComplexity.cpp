/*space complexity is the extra space used to execute the code 
for the desired output the variables initialized in the loop
does not need extra space bcz it can be accessed only in the 
loop the extra space is that the variables which can be used 
through out the program*/

/*for any variable except a data structre space complexity is 
O(K)~O(1) but when we are using any data structure then the 
space complexity will be in the order of n based on the loops
and recursion we are using*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>a;
    int n,m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v.push_back(10);
            a.push_back(5);
        }
    }
    /*here space complexity is O(m*n) bcz vector is a dynamic array
    whose size is not declared but in arrays the same code space 
    complexity is O(m+n) bcz the size of the array is previously 
    initialized and it can be possible for vectors whose size is 
    previously initialized then space complexity will be O(m+n)
    if m=n then order will be O(n+n)=O(2n)~=O(n)*/

    int a[n][n/2];
    for(int i=0;i<n;i*=2){
        for(int j=0;j<n/2;j++){
            a[i][j]++;
        }
    }
    /*here time complexity will be (log n with base 2) for the outer
    loop and (n/2) for inner loop.total time complexity will be 
    (n/2)*log n ~= n*log n */
    /*space complexity will be n*(n/2)=(n^2)/2 ~=O(n^2)*/
}