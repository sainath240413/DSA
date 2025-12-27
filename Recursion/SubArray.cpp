#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int>v,int a[],int n,int i){
    if(i==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subarray(v,a,n,i+1);
    if(v.size()==0 || v[v.size()-1]==a[i-1]){
        v.push_back(a[i]);
        subarray(v,a,n,i+1);
    }
}
int main(){
    int n,a[10];
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    //using loops
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k];
            } 
            cout<<endl;
        }
    }
    //using recursion
    vector<int>v;
    subarray(v,a,n,0);
}