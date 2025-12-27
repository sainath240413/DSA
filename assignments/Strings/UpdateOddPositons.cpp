#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(i%2!=0){
            str[i]='#';
        }
    }
    cout<<str<<endl;
}