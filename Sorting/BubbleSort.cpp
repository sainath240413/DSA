#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>a[i];
    /*bubble sort takes O(n^2) time complexity and more space for temp variable*/
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}