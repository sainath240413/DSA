#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no.of rows: ";
    cin>>n;
    
    //star rectangle
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl; 
    }

    //number rectangle              //OUTPUT:
    for(int i=1;i<=n;i++){          // ---->1 1 
        for(int j=1;j<=n;j++){      // ---->2 2  
            cout<<i<<" ";
        }
        cout<<endl; 
    }
                                    
    for(int i=1;i<=n;i++){          //OUTPUT:
    for(int j=1;j<=n;j++){          // ---->1 2 
            cout<<j<<" ";           // ---->1 2 
        }
        cout<<endl; 
    }

    // alphabet rectangle            //OUTPUT:
    for(int i=1;i<=n;i++){           // ---->A B 
        for(int j=1;j<=n;j++){       // ---->A B 
            cout<<char(j+64)<<" ";
        }
        cout<<endl; 
    }

    for(int i=1;i<=n;i++){            //OUTPUT:
        for(int j=1;j<=n;j++){        // ---->A A 
            cout<<char(i+64)<<" ";    // ---->B B 
        }
        cout<<endl; 
    }


    return 0;
}