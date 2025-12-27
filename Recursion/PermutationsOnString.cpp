#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void permutation(string str,string res){
    if(str==""){
        cout<<res<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permutation(left+right,res+ch);
    }
}   
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    permutation(str,"");
}