//revise...
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> FirstNegetiveNumberInWindowOfSizeK(int a[],int n,int k){
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(a[i]<0) q.push(i);
    }
    int i=0;
    while(i+k<=n){
        while(!q.empty() && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(a[q.front()]);
        i++;
    }
    return ans;
}
void display(vector<int>v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int a[10]={0,-1,-2,3,4,-5,6,4,7,-8};
    int k,n;
    // cout<<"Enter the number of elements in the array:";
    // cin>>n;
    // cout<<"Enter the elements of the array:";
    // for(int i=0;i<n;i++) cin>>a[i];
    cout<<"enter size of window:";
    cin>>k;
    vector<int>ans=FirstNegetiveNumberInWindowOfSizeK(a,10,k);
    display(ans);
}