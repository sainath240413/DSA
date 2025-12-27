#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    int i,j,e;
    cout<<"enter index of the substring:";
    cin>>i>>j;
    cout<<s<<endl;
    //using inbuilt function
    reverse(s.begin()+i,s.begin()+j);
    cout<<s<<endl;
    //using loop
    for(int k=i;k<=e;k++){
        char temp=s[k];
        s[k]=s[j];
        s[j]=temp;
        j--;
    }
    cout<<s<<endl;
}