#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<str<<endl;
    int count=1;
    int max=0;
    int n=str.size();
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]) count++;
        }
        if(count>max) max=count;
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]) count++;
        }
        if(count==max) cout<<str[i]<<" "<<max<<endl;
    }
}