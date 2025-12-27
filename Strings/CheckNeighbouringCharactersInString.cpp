#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<str<<endl;
    int count=0;
    /*if the neighbouring characters are different then increase the count*/
    for(int i=0;i<str.size();i++){
        if (i==str.size()-1) break;
        if(str[i]!=str[i+1]) count++;
    }
    cout<<count;
}