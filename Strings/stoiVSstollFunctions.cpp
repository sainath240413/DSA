#include<iostream>
#include<string>
using namespace std;
int main(){
    /*converting string to integer*/
    string str="123";
    cout<<"enter string:";
    getline(cin,str);
    int x=stoi(str);
    cout<<x;
    /*converting integer to string*/
    int a=123;
    string s=to_string(a);
    cout<<s<<endl;
    /*convert string to longlong*/
    string st;
    cout<<"enter string:";
    getline(cin,st);
    long long ss=stoll(st);
    cout<<ss<<endl;
}