/*revise do it again....*/
#include<bits/stdc++.h>
using namespace std;
//no repetions
void permutations(string str,string ans){
    if(str.size()==0) {
        cout<<ans<<endl;
        return;
    }   
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        string ros=left+right;
        permutations(ros,ans+ch);
    }
    return;
}
//with backtracking
void permutations1(string &str,int idx){
    if(str.size()==idx){
        cout<<str<<endl;
        return;
    }
    for(int i=idx;i<str.size();i++){
        swap(str[i],str[idx]);
        permutations1(str,idx+1);
        swap(str[i],str[idx]);
    }
}
//with repetetions
void permutations2(string &str,int idx){
    if(str.size()==idx){
        cout<<str<<endl;
        return;
    }
    unordered_set<int>m;
    for(int i=idx;i<str.size();i++){
        if(m.find(str[i])!=m.end()) continue;
        m.insert(str[i]); 
        swap(str[i],str[idx]);
        permutations2(str,idx+1);
        swap(str[i],str[idx]);
    }
}
int main(){
    string str="aba";
    permutations(str,"");
    cout<<endl;
    permutations2(str,0);
}