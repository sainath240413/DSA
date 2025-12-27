//do it again...
#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],n1,m1,n2,m2;
    cout<<"enter no of rows in array1:";
    cin>>n1;
    cout<<"enter no of coloumns in array1:";
    cin>>m1;
    cout<<"enter no of rows in array2:";
    cin>>n2;
    cout<<"enter no of coloumns of array2:";
    cin>>m2;
    int res[n1][m2];
    if(m1!=n2) cout<<"can not multiply these arrays";
    else{
        cout<<"enter elements of array1:";
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                cin>>a[i][j];
            }
        }
        cout<<"enter elements of array2:";
        for(int i=0;i<n2;i++){
            for(int j=0;j<m2;j++){
                cin>>b[i][j];
            }
        }
        //multiply loop
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                res[i][j]=0;
                for(int k=0;k<n2;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    }
    cout<<"a*b matrix is:";
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}