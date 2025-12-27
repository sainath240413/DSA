#include<iostream>
using namespace std;
int main(){
    /*expression1?expression2:expression3;
    it is an alternative of if else statement 

    condition ? true : false ; */ 

    int n;
    cout<<"enter n: ";
    cin>>n;
    (n%2==0)?cout<<"even":cout<<"odd";


    /*printing pass and fail using ternary operater*/

    int marks;
    cout<<"enter marks: ";
    cin>>marks;
    (marks>33)? cout<<"pass":cout<<"fail";


    // PRIDICT THE OUTPUT 

    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    cout<<"value of x: "<<x;

    return 0;
}