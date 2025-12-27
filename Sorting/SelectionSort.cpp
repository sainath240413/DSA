#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        //it takes o(n^2) time complexity least efficienct
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]) minindex=j;
        }
        swap(a[i],a[minindex]);
    }
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";
    for(int ele:a) cout<<ele<<" ";
    /*it is called for each loop it prints each and every element in the array 
    independent of index according to the size you have declared in the array
    it does not consider n no of elements it depends on the size you have given 
    while declaration(int a[10]) it prints 10 elements*/

}