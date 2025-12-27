#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<str;
    str[0]='q';
    cout<<str;

    /*input string of size n and update all even positions to a and 
    strt indexing from 0*/
    int n;
    cout<<"enter the size of the string:";
    cin>>n;
    char str[n];
    cout<<"enter string:";
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0) str[i]='a';
    }
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
}