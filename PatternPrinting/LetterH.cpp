#include<iostream>
using namespace std;
int main(){
int n=5;
 for(int i=1;i<=5;i++){
        //for H
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==3)
            cout<<"* ";
            else cout<<"  ";
        }
        //for spaces
        for(int j=1;j<=1;j++){
            cout<<"  ";
        }
        //for A
        for(int j=1;j<=4;j++){
            if(i==1 || j==1 || j==4 || i==3)
            cout<<"* ";
            else cout<<"  ";
        }
        //for spaces
        for(int j=1;j<=1;j++){
            cout<<"  ";
        }
         //for S
        for(int j=1;j<=5;j++){
            if(i==1 || i==n || i==3 || (i==2 & j==1) ||(i==4 & j==5))
            cout<<"* ";
            else cout<<"  ";
        }
         
       
        //for spaces
        for(int j=1;j<=1;j++){
            cout<<"  ";
        }
        
         //for I
        for(int j=1;j<=5;j++){
            if(i==1 || j==3 || i==5)
            cout<<"* ";
            else cout<<"  ";
        }

        //for spaces
        for(int j=1;j<=1;j++){
            cout<<"  ";
        }
        
         //for N
        for(int j=1;j<=5;j++){
            if(j==1 || i==j ||j==5)
            cout<<"* ";
            else cout<<"  ";
        }
         //for spaces
        for(int j=1;j<=1;j++){
            cout<<"  ";
        }
        //for I
        for(int j=1;j<=5;j++){
            if(i==1 || j==3 || i==5)
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}