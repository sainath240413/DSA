/*leetcode...revise...
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
Example 1:
Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

Example 2:
Input: n = 1
Output: [[1]]*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of 2d array:";
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n,0));
    int minc=0,minr=0,maxc=n-1,maxr=n-1;
    int count=1;
    while(minr<=maxr && minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            a[minr][i]=count;
            count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            a[i][maxc]=count;
            count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            a[maxr][i]=count;
            count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            a[i][minc]=count;
            count++;
        }
        minc++;
    }
    cout<<"elements of matrix are:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}