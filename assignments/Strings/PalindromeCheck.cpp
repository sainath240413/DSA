#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<s<<endl;
    string str=s;
    reverse(str.begin(),str.end());
    if(str==s){
        cout<<s<<" is palindrome";
    }
    else{
        cout<<s<<" is not a palindrome";
    }
}