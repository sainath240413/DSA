#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no.of rows: ";
    cin>>n;
    
    //star triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl; 
    }

    //number triangle              
    for(int i=1;i<=n;i++){          
        for(int j=1;j<=i;j++){       
            cout<<i<<" ";
        }
        cout<<endl; 
    }
                                    
    for(int i=1;i<=n;i++){          
    for(int j=1;j<=i;j++){           
            cout<<j<<" ";           
        }
        cout<<endl; 
    }

    // alphabet triangle            
    for(int i=1;i<=n;i++){            
        for(int j=1;j<=i;j++){       
            cout<<char(j+64)<<" ";
        }
        cout<<endl; 
    }

    for(int i=1;i<=n;i++){            
        for(int j=1;j<=i;j++){        
            cout<<char(i+64)<<" ";    
        }
        cout<<endl; 
    }


    return 0;
}