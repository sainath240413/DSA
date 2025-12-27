#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter number of students:";
    cin>>n;
    cout<<"enter marks of the students:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"marks of each student:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nroll number of stdents who got below 35 are:";
    for(int i=0;i<n;i++){
        if(a[i]<35){
            cout<<i<<" ";
        }
    }

}