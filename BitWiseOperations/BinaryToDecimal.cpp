#include<iostream>
#include<string>
using namespace std;
int binarytodecimal(string str){
    int n=str.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch=str[i];
        int num=ch-'0';
        result=result+num*(1<<(n-i-1));
    }
    return result;
}
string decimaltobinary(int num){
    string result="";
    while(num>0){
        if(num%2==0){
            result="0"+result;
        }
        else result="1"+result;
        num/=2;
    }
    return result;
}
int main(){
    string str="001101";
    cout<<binarytodecimal(str)<<endl;
    cout<<decimaltobinary(10);
}

/*
left shift
(x<<1)-->x*2
(x<<2)-->x*2^2
(x<<3)-->x*2^3
eg:(1<<3)-->1*2^3

right shift
(x>>1)-->x/2
(x>>2)-->x/2^2
(x>>3)-->x/2^3
eg:(1>>3)-->1/2^3
*/