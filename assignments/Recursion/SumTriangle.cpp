/* Given an array of integers, print a sum triangle using recursion from it such that the
first level has all array elements. After that, at each level the number of elements is 
one less than the previous level and elements at the level will be the sum of consecutive
two elements in the previous level. 
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1] 
[9, 7, 5, 3] 
[16, 12, 8] 
[28, 20] 
[48]*/

//revise..
#include<iostream>
#include<vector>
using namespace std;
void sumtriangle(vector<int>&a){
    int n=a.size();
    if(n<1) return;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    vector<int>b;
    for(int i=0;i<n-1;i++){
        b.push_back(a[i]+a[i+1]);
    }
    sumtriangle(b);
}
int main(){
    int n;
    cout<<"enter size of the array:";
    cin>>n;
    vector<int>a(n);
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    sumtriangle(a);
}