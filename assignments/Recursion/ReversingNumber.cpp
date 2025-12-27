#include<iostream>
#include<string>
using namespace std;
int reversenum(string str,string ans,int i,int n){
    if(i==str.size()){
        return stoi(ans);  
    }
    ans+=str[n-1-i];
    return reversenum(str,ans,i+1,n);
}
int main(){
    int n,ans;
    cout<<"enter number:";
    cin>>n;
    string str=to_string(n);
    cout<<reversenum(str,"",0,str.size());
}