//leetcode 22
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void generateparanthesis(string str,int opening,int close,int n){
    if(close>opening) return;
    if(opening<n) generateparanthesis(str+'(',opening+1,close,n);
    if(close<opening) generateparanthesis(str+')',opening,close+1,n);
    if(str.size()==2*n) cout<<str<<endl;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    generateparanthesis("",0,0,n);
}