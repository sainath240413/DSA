#include<iostream>
#include<string>
using namespace std;
void subsets(string res,string original){
    if(original==""){
        cout<<res<<endl;
        return;
    }
    char ch=original[0];
    subsets(res+ch,original.substr(1));
    subsets(res,original.substr(1));
}
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<"string entered:";
    cout<<str<<endl;
    subsets("",str);
}