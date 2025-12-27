#include<iostream>
#include<string>
using namespace std;
void binarystrings(int n,string ans){
    if(n==0) {
        cout<<ans<<endl;
        return;
    }
    binarystrings(n-1,ans+'0');
    if(ans=="" || ans[ans.length()-1]!='1') binarystrings(n-1,ans+'1');
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    binarystrings(n,"");
}