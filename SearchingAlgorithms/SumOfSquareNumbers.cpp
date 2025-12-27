//leetcode...do it again
#include<iostream>
#include<math.h>
using namespace std;
bool isPerfectSquare(int a){
    int root=sqrt(a);
    if(root*root==a) return true;
    else return false;
}
bool sumofsquares(int n){
    int x=0,y=n;
    while(x<=y){
        if(isPerfectSquare(x) && isPerfectSquare(y)){
            return true;
        }
        else if(!isPerfectSquare(y)){
            y=(int)sqrt(y)*(int)sqrt(y);
            x=n-y;
        }
        else{
            x=(int)(sqrt(x)+1)*(int)(sqrt(x)+1);
            y=n-x;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<sumofsquares(n);
}