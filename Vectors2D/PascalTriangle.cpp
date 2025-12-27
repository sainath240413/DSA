//revise leetcode....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//generate pascal triangle
vector<vector<int>> pascal(int n){
    vector<vector<int>>v;
    for(int i=1;i<=n;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    return v;
}
//get row in a pascal triangle 
vector<int> getRow(int n) {
    vector<vector<int>>v;
    int m;
    cout<<"enter the number of rows in pascal triangle:";
    cin>>m;
    for(int i=1;i<m;i++){
        vector<int>a(i+1);
        v.push_back(a);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) v[i][j]=1;
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    return v[n-1];
    //or
    vector<int>ans(n+1,1);
    for(int i=2;i<=n;++i){
        for(int j=1;j<i;++j){
            ans[i-j]+=ans[i-j-1];
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter size of the pascal triangle:";
    cin>>n;
    vector<vector<int>>v=pascal(n);
    vector<int>v=getRow(n);
    //printing
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    } 
    //printing the row
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}