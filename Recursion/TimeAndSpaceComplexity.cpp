#include<iostream>
using namespace std;
/*here we are taking fatorial and power functions as example*/
int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
/*for recursive factorial function
time complexity = O(2n) ~= O(n)
because the function iterates as many times as fucntion call 
happens it takes O(n) to run the function and it takes O(n) 
to return from the function so tatally O(2n) but we consider
it as O(n) where n is input or number of iterations.

space complexity = O(n)
because in every function call it creates local variables which 
are parameters from the function call so space complexity 
increases to O(n).
*/
int factorial(int n){
    int fact=1;
    if(n==1 || n==0){
        cout<<1;
    }
    else{
        for(int i=1;i<=n;i++){
            fact*=i;
        }
    }
}
/*for iterative or non recursive factorial function
time complexity = O(n)
because the loop iterates n times
space complexity = O(1)
because here the local variables are created only once throught
the function*/


int power(int a,int b){
    if(b==0 || a==1) return 1;
    return a*power(a,b-1);
}
/*for recursive power function
time complexity = O(2n) ~= O(n)
because the function iterates as many times as fucntion call 
happens it takes O(n) to run the function and it takes O(n) 
to return from the function so tatally O(2n) but we consider
it as O(n) where n is input or number of iterations.

space complexity = O(2n) ~=O(n)
because in every function call it creates 2 local variables 
in this powerfunction which are parameters from the function
call so space complexity increases to O(2n) ~=O(n).*/
int pow(int a,int b){
    float power=1;
    for(int i=1;i<=b;i++){
        power*=a;
    }
}
/*for iterative or non recursive factorial function
time complexity = O(n)
because the loop iterates n times
space complexity = O(1)
because here the local variables are created only once throught
the function*/