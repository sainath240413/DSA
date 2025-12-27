#include<iostream>
using namespace std;
int main(){
    int n,a[100],marks;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the marks of the students:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"marks of each student are:";
    for(int i=0;i<n;i++){
        cout<<i<<"-->"<<a[i]<<endl;
    }
    cout<<"rollno of the student who scored lessthan 35 are:";
    for(int i=0;i<n;i++){
        if(a[i]<35){
            cout<<i<<" ";
        }
    }
}