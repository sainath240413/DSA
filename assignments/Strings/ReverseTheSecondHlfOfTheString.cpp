#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    cout<<s<<endl;
    int n=s.size();
    reverse(s.begin()+n/2,s.end());
    cout<<s<<endl;
}
