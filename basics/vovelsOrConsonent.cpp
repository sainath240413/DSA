#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"enter charecter: ";
    cin>>ch;

        //method-1          ----> using inbuilt functions

    if(isalpha(ch!=0)){
        if(ch=='a'||ch=='e' ||ch=='i' || ch=='o' || ch=='u'){
            cout<<ch<<" is vovel";
        }
    }
    else{
        cout<<ch<<" is composite";
    }

        //method-2          ----> using if statements

    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<ch<<" is vovel";
        }
        else{
        cout<<ch<<" is consonent";
    }
    }
    else{
        cout<<ch<<" is not a charecter";
    }

    return 0;
}