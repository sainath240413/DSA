#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    int n=str.length();
    cout<<str<<endl;
    vector<int>a(26,0);
    
    /*just mapping the indeces with alphabets*/
    // for(int i=0;i<26;i++){
    //     a[i]=i+97;
    //     cout<<i+1<<"->"<<(char)a[i]<<endl;
    // }

    /*finding the most repetetive character in the string by mapping 
    the indics*/
    for(int i=0;i<n;i++){
        char ch=str[i];
        int ascii=int(ch);
        a[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(a[i]>max) max=a[i];
        if(a[i]==max){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<"->"<<max<<endl;
        }
    }
}
