#include<iostream>
#include<set>//for ordered set
#include<map>//for ordered map
using namespace std;
int main(){
    set<int>s;//ordered set
    s.insert(1);
    s.insert(2);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    for(int ele:s){//always be sorted
        cout<<ele<<" ";
    }
    cout<<endl;
    map<string,int>m;//ordered map
    m["siri"]=25;
    m["asha"]=6;
    m["anu"]=24;
    m["sainath"]=24;
    for(auto ele:m){//always be sorted
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}