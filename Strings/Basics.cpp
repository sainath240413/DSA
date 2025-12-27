#include<iostream>
#include<string>
using namespace std;
int main(){
    char s[]={'a','b','c'};
    /*the size of the string is 4 because it has special
    charecter /0 at the end of the string which is not 
    printed and which can't be seen it is used as condition
    in the loops*/
    string str;
    cout<<"enter charecter:";
    /*cin is used to get only one word getline is the 
    function to get input which contains spaces*/ 
    getline(cin,str);
    /*we can use loops for printing the string if we 
    want to print the whole string then we use name of 
    the string in cout function*/
    cout<<str;
}