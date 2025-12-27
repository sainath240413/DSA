#include<iostream>
#include<string>
using namespace std;
//my way
void palindrome(string str,string ans,int n,int i){
    if(i<0){
        if(ans==str){
            cout<<str<<" is a palindrome";
            return;
        }
        else{
            cout<<str<<" is not a palindrome";
            return;
        }
    }
    ans+=str[i];
    palindrome(str,ans,n,i-1);  
}
//raghav sir way
bool pal(string str,int i,int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else pal(str,i+1,j-1);
}
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<"entered string:";
    cout<<str<<endl;
    int n=str.size();
    palindrome(str,"",n,n-1);
    //cout<<pal(str,0,n-1);
}