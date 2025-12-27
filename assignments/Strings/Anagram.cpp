#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter string1:";
    getline(cin,s1);
    cout<<"enter string2:";
    getline(cin,s2);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2) cout<<s1<<" and "<<s2<<" are anagrams";
    else cout<<s1<<" and "<<s2<<" are not anagrams";
}