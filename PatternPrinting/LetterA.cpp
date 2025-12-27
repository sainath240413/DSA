#include<iostream>
using namespace std;
int main(){
    int n=5;
 for(int i=1;i<=4;i++){
        //for G
        for(int j=0;j<n;j++){
            if(i==1 ||j==0 || i==n-1 || (j==n-1 && i>n/2) || (i==n/2 && j>=n/2 ))
            cout<<"* ";
            else cout<<"  ";
        }
        //for A
        for(int j=1;j<=4;j++){
            if(i==1 || j==1 || j==4 || i==3)
            cout<<"* ";
            else cout<<"  ";
        }

         //for N
        for(int j=1;j<=4;j++){
            if(j==1 || i==j ||j==4)
            cout<<"* ";
            else cout<<"  ";
        }
         
        // //for A
        for(int j=1;j<=4;j++){
            if(i==1 || j==1 || j==4 || i==3)
            cout<<"* ";
            else cout<<"  ";
        }
        //for spaces
        for(int j=1;j<=2;j++){
            cout<<"  ";
        }

        //FOR P
        for(int j=1;j<=4;j++){
            if(j==1 || i==1 || i==3 || (i+j==6 && i!=4))
            cout<<"* ";
            else cout<<"  ";
        }

        //FOR R 
        for(int j=1;j<=5;j++){
            if(i==1 || j==1 || j==5 ||  (i+j==6 && i==j) || (i+j==7 && i==3))
            cout<<"* ";
            else cout<<"  ";
        }
         //for spaces
        for(int j=1;j<=1;j++){
            cout<<" ";
        }
        //for I
        for(int j=1;j<=5;j++){
            if(i==1 || j==3 || i==4)
            cout<<"* ";
            else cout<<"  ";
        }
        //for spaces
        for(int j=1;j<=1;j++){
            cout<<" ";
        }
         //for y
        for(int j=1;j<=5;j++){
            if((i==j && i<=3) || (i+j==6 && i<=2) || (j==3 && i>=3))
            cout<<"* ";
            else cout<<"  ";
        }
        //for A
        for(int j=1;j<=4;j++){
            if(i==1 || j==1 || j==4 || i==3)
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}


