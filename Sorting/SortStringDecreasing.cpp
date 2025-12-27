#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    string ans;
    cout<<"enter string:";
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]>='x'){
            ans.push_back(str[i]);
        }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    cout<<ans;
}