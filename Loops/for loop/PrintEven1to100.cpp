#include<iostream>
using namespace std;
int main(){

        //method --->1

    for(int i=2;i<=100;i=i+2){
        cout<<i<<" ";
    }

        //method --->2

      for(int i=1;i<=100;i=i+1){
        if(i%2==0) {
        cout<<i<<" ";
        }
    }

    return 0;
}