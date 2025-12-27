#include<iostream>
#include<string>
using namespace std;
void skipcharacterinstring(string str,int n){
    if(n<0) return;
    skipcharacterinstring(str,n-1); 
    if(str[n]!='a') cout<<str[n];
}
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    int n=str.size();
    skipcharacterinstring(str,n);
}