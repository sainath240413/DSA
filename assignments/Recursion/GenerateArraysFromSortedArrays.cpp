/*Given two sorted arrays A and B, generate all possible arrays such that the first element 
is taken from A then from B then from A, and so on in increasing order till the arrays are 
exhausted.The generated arrays should end with an element from B.
A = {10, 15, 25} 
B = {1, 5, 20, 30} 
{25 30}
Output: {10 20}, {10 20 25 30}, {10 30}, {15 20}, {15 20 25 30}, {15 30},*/
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void generatearrays(int a[],int b[],vector<int>v,int i,int j,int n,int m,bool pickfromA){
    if(pickfromA==true){
        if(i==n) return;
        if(v.empty() || a[i]>v.back()){
            v.push_back(a[i]);
            generatearrays(a,b,v,i+1,j,n,m,false);
            v.pop_back();
        }
        generatearrays(a,b,v,i+1,j,n,m,true);
    }
    else{
        if(j==m) return;
        if(b[j]>v.back()){
            v.push_back(b[j]);
            print(v);
            generatearrays(a,b,v,i,j+1,n,m,true);
            v.pop_back();
        }
        generatearrays(a,b,v,i,j+1,n,m,false);
    }
}
int main(){
    int a[3]={10,15,25};
    int b[4]={1,5,20,30};
    vector<int>v;
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    generatearrays(a,b,v,0,0,n,m,true);
}