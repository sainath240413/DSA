#include<iostream>
#include<unordered_set>//for unordered set
#include<set> //for set
//sets stores only unique elements 
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2); //removes element 2 from the set
    cout<<s.size()<<endl;
    //for printing unoerdered set we use for each loop because the elements are not in order
    for(int ele:s){
        cout<<ele<<" ";
    }
    //to search element in map
    if(s.find(6)==s.end()){
        //if this is true then the ele is not present in the map then it return last element of that iteration
        cout<<"element 6 not found\n";
    }
    if(s.find(1)!=s.end()){//element exists in set
        cout<<"element 1 found\n";
    }
}