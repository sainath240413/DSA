//leetcode...
/*You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false*/
#include<iostream>
#include<vector>
using namespace std;
void create(vector<vector<int>>&v,int n,int m){
    for(int i=0;i<n;i++){
        vector<int>s(m);
        v.push_back(s);
    }
    cout<<"enter elements of matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
}
bool search(vector<vector<int>>&v,int n,int m,int target){
    //brute force takes O(n^2) time complexity
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==target) return true;
        }
    }
    return false;
    //binary search takes O(log n) time complexity
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(v[i][j]==target) return true;
        else if(v[i][j]>target) j--;
        else i++;
    }
    return false;
}
int main(){
    int n,m,target;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of columns:";
    cin>>m;
    vector<vector<int>>v;
    create(v,n,m);
    cout<<"enter target:";
    cin>>target;
    cout<<search(v,n,m,target);
}