//revise...
#include<iostream>
using namespace std;
int mazepath(int s1,int s2,int e1,int e2){
    if(s1>e1 || s2>e2) return 0;
    if(s1==e1 && s2==e2) return 1;
    int right=mazepath(s1,s2+1,e1,e2);
    int down=mazepath(s1+1,s2,e1,e2);
    return right+down;
}
void printpath(int s1,int s2,int e1,int e2,string s){
    if(s1>e1 || s2>e2) return;
    if(s1==e1 && s2==e2){
        cout<<s<<endl;
    }
    printpath(s1,s2+1,e1,e2,s+'R');//right
    printpath(s1+1,s2,e1,e2,s+'D');//down
}
int main(){
    int startx,starty,endx,endy;
    cout<<"enter start indeces:";
    cin>>startx>>starty;
    cout<<"enter end indeces:";
    cin>>endx>>endy;
    cout<<"no of ways to reach destination are:";
    cout<<mazepath(startx,starty,endx,endy);
    cout<<endl;
    printpath(startx,starty,endx,endy,"");
}