#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    /*split every word in a sentence and print in a next line*/
    // string str;
    // cout<<"enter string:";
    // getline(cin,str);
    // stringstream s(str);
    // string temp;
    // while(s>>temp){
    //     cout<<temp<<endl;
    // }

    /*in a sentence return a word occuring the most*/
    string str;
    vector<string>v;
    cout<<"enter string:";
    getline(cin,str);
    stringstream s(str);
    string temp;
    while(s>>temp){
        v.push_back(temp);
    }
    int maxcount=1;
    int count=1;
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxcount=max(count,maxcount);
    }
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count==maxcount){
            cout<<v[i]<<"->"<<maxcount<<endl;
        }
    }    
}