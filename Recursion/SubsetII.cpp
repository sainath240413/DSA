//leetcode revise....important
/*print subsets of the array having duplicate characters*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string original,int i,int n,string res);\
/*my method using another function for removing duplicates*/
string removeDuplicates(string str) {
    string result = "";
    for (int i=0;i<str.length();i++) {
        bool found=false;
        for (int j=0;j<result.length();j++) {
            if (str[i]==result[j]){
                found=true;
                break;
            }
        }
        if (!found) {
            result += str[i];
        }
    }
    return result;
}
void subset(string original,int i,int n,string res){
    if(original==""){
        cout<<res<<endl;
        return;
    }
    char ch=original[0];
    subset(original.substr(1),i+1,n,res+ch);
    subset(original.substr(1),i+1,n,res);

}
/*Raghav sir method changing in subset function*/
void subset2(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
        if(flag==true) subset2(ans+ch,original.substr(1),v,true);
        subset2(ans,original.substr(1),v,true);
        return;
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true) subset2(ans+ch,original.substr(1),v,true);
        subset2(ans,original.substr(1),v,false);
    }
    else{
        if(flag==true) subset2(ans+ch,original.substr(1),v,true);
        subset2(ans,original.substr(1),v,true);
    }
}
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<"entered string:";
    cout<<str<<endl;
    vector<string>v;
    // string unique=removeDuplicates(str);
    // subset(unique,0,unique.size(),"");
    subset2("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}