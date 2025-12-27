#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enetr string:";
    getline(cin,str);
    int len=str.length();
    cout<<str<<endl;
    //using inbuilt fuctions
    reverse(str.begin(),str.begin()+len/2);
    cout<<str<<endl;
    //using loops 
    int end=(len/2)-1;
    for(int i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[end];
        str[end]=temp;
        end--;
    }
    cout<<str<<endl;
}