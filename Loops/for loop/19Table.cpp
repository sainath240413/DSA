#include<iostream>
using namespace std;
int main(){

     //method ---1
    for(int i=19;i<=190;i=i+19){
        cout<<i<<" ";
    }

     //method --->2

      for(int i=19;i<=190;i=i+1){
        if(i%19==0) {
        cout<<i<<" ";
        }
      }
    return 0;
}