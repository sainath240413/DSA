#include<iostream>
using namespace std;
int main(){
    int n,a[10][10];
    cout<<"enter size of array1:";
    cin>>n;
    cout<<"enter elements of the array1:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"elements of the array1 are:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    /*time complexity of nested loops is O(n^2)*/

    /***important***/
    int c=0,k;
    for(int i=1;i<=n;i*=k){
        c++;
    }
    cout<<c;
    /*here k is any variable and n is size of the data structure or
    number of iterations that loop is executed here time complexity 
    is calculated using logorithms O(log n with base k)*/
}