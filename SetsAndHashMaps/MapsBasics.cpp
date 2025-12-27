#include<iostream>
#include<map>//ordered map
#include<unordered_map>//unordered map
using namespace std;
int main(){
    //in pair pair<key,val>p

    
    // pair<int,int>p;//it is a data structure that can hold two related values
    // p.first=1;
    // p.second=2;
    // cout<<p.first<<" "<<p.second<<endl;
    unordered_map<string,int>m;
    pair<string,int>p1;
    p1.first="sainath";
    p1.second=24;
    m.insert(p1);//insert pair into unordered map
    //m["sainath"]=24; insert pair into unordered map
    m["anu"]=24;
    m["asha"]=6;
    m["siri"]=25;
    for(auto ele:m){
        //in for each loop data type should be mentiond to avoid that we can use auto
        cout<<ele.first<<" "<<ele.second<<endl; 
    }
    m.erase("sainath");//erase element from unordered map
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl; 
    }
    if(m.find("siri")!=m.end()){//searching is always done with the key element
        cout<<"siri is present in the map\n";
    }
    else cout<<"siri is not present in the map\n";
}