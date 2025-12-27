#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    int len=str.length();
    cout<<str<<endl;
    cout<<"2nd half of string as substring:";
    cout<<str.substr(len/2)<<endl;
}