#include<iostream>
using namespace std;
/* Polymorphism is the ability of a function, object, or operator to take on multiple forms.
In C++, polymorphism can be achieved through function overloading, operator overloading, and virtual functions.
Function overloading allows multiple functions with the same name but different parameters.*/
class Base {
public:
    // Function overloading examples
    // These functions have the same name 'sum' but different parameter types or counts.
    void sum(int a, int b) {
        cout<<a+b<<endl;
    }
    void sum(double a, double b) {
        cout<<a+b<<endl;
    }
    void sum(int a, int b, int c) {
        cout<<a+b+c<<endl;
    }
    /*This function takes two strings and concatenates them.this can be treates as operator overloading because 
    we are using '+' operator to concatenate two strings.but in above functions we are using '+' operator to add
    two integers or two doubles.*/
    void sum(string a, string b) {
        cout<<a+b<<endl;
    }
    
    /*this function creates a problem because it has same name,same type of parameters and same no of parameters
    as above function but different return type*/
    // int sum(int a,int b){
    //     return a+b;
    // }
};
int main(){
    Base a;
    a.sum(5, 10);          // Calls the first sum(int, int)
    a.sum(5.5, 10.5);      // Calls the second sum(double, double)
    a.sum(1, 2, 3);        // Calls the third sum(int, int, int)
    a.sum("Sainath ", "Reddy"); // Calls the fourth sum(string, string)
}