/*A function countAndSay is defined as:
countAndSay(1) = “1” 
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1),
which is then converted into a different digit string. 
So, if sample input is n = 4, 
countAndSay(1) = 1 
countAndSay(2) = “one 1” => 11 
countAndSay(3) = “two 1” => 21 
countAndSay(4) = “one 2 one 1” => 1211*/

// leetcode...38,revise...
#include<iostream>
#include<string>
using namespace std;
string countandsay(int n){
    if(n==1) return "1";
    string str=countandsay(n-1);
    string ztr="";
    int freq=1;
    char ch=str[0];
    for(int i=1;i<str.size();i++){
        char dh=str[i];
        if(ch==dh){
            freq++;
        }
        else{
            ztr+=(to_string(freq)+ch);
            freq=1;
            ch=dh;
        }
    }
    ztr+=(to_string(freq)+ch);
    return ztr;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<countandsay(n);
}