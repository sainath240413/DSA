#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<s<<endl;
    /*concatenate string with its reverse*/
    string str=s;
    reverse(str.begin(),str.end());
    cout<<"string after concatenation:";
    cout<<s+str<<endl;
}