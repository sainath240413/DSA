#include<iostream>
#include<queue>
using namespace std;
int main(){
    int k;
    cout<<"enter k:";
    cin>>k;
    vector<int>v={10,20,-4,6,18,24,105,118};

    priority_queue<int,vector<int>,greater<int>>pq; //min heap
    //if we use min heap it takes T.C=O(n!)~=O(n logn)
    for(int i=0;i<v.size();i++) pq.push(v[i]);
    for(int i=1;i<k;i++){
        pq.pop();
    }
    cout<<k<<"th smallest element in array is:"<<pq.top();

    //so we use max heap T.C=O(n*logK) S.C=O(k) because we are creating the heap for only (1+k) elements
    priority_queue<int>pq;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<k<<"th smallest element in array is:"<<pq.top();
}