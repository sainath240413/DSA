#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no.of rows: ";
    cin>>n;
    cout<<"enter no.of coloums: ";
    cin>>m;

    //star rectangle
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"* ";
        }
        cout<<endl; 
    }

    //number rectangle              //OUTPUT:
    for(int i=1;i<=n;i++){          // ---->1 1 1 1
        for(int j=1;j<=m;j++){      // ---->2 2 2 2 
            cout<<i<<" ";
        }
        cout<<endl; 
    }
                                    
    for(int i=1;i<=n;i++){          //OUTPUT:
    for(int j=1;j<=m;j++){          // ---->1 2 3 4
            cout<<j<<" ";           // ---->1 2 3 4
        }
        cout<<endl; 
    }

    // alphabet rectangle            //OUTPUT:
    for(int i=1;i<=n;i++){           // ---->A B C D
        for(int j=1;j<=m;j++){       // ---->A B C D
            cout<<char(j+64)<<" ";
        }
        cout<<endl; 
    }

    for(int i=1;i<=n;i++){            //OUTPUT:
        for(int j=1;j<=m;j++){        // ---->A A A A
            cout<<char(i+64)<<" ";    // ---->B B B B
        }
        cout<<endl; 
    }


    return 0;
}