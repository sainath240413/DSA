/*:  Given a matrix having 0-1 only where each row is sorted in increasing order,
find the row with the 
maximum number of 1’s.
 Input matrix :
 0 1 1 1
 0 0 1 1
 1 1 1 1 // this row has maximum 1s
 0 0 0 0*/
//not done....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,int a[10][10];
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter binary elements of array in sorted order:";
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        } 
    }
    
}