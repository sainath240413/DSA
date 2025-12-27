#include<iostream>
using namespace std;
int main(){
    int a[10][10],n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"elements of array in waveform are:\n";
    //print in waveform
    for(int i=0;i<n;i++){
        if(i%2==0){ //rows 0,2,4...
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{ //rows 1,3,5...
            for(int j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}