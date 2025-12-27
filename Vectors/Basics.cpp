#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // cout<<arr[1];
    // arr.pop_back();
    /*pop_back is the fuction to delete the element in the vector and 
    decrease the size of the vector but it cannot decrease the capacity
    of the vector*/

    //taking input using loops

    int choice=1,x;
    for(choice=1;choice!=0;){
        if(choice!=0){
        cout<<"enter data:";
        cin>>x;
        }
        cout<<"enter choice:";
        cin>>choice;
        arr.push_back(x);
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.at(2)=10;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    sort(arr.begin(),arr.end());
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}