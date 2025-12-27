//revise leetcode
#include<iostream>
using namespace std;
int main(){
    int a[10][10],n;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"array before rotating is:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //reversing
    for(int k=0;k<n;k++){
        int i=0,j=n-1;
        while(i<j){
            int temp=a[k][i];
            a[k][i]=a[k][j];
            a[k][j]=temp;
            i++;
            j--;
        }
    }
    cout<<"array after rotating is:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }  
}