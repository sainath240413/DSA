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
    /*print in waveform
    3 ----<----
    2 ---->----
    1 ----<---- but start from down*/
    for(int i=n-1;i>=0;i--){
        if(i%2!=0){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    //another type of pattern

    /*print in waveform
    3 ---->----
    2 ----<----
    1 ---->---- but start from down*/
    for(int i=n-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    //another type 
    //do it again....
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        cout<<endl;
    }

}