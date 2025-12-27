/*don't know do it again....
A board of length M and width N is given the task is to break the board into M*N squares such that the cost of breaking is minimum
the cutting cost for each edge will be given for the board in two arrays x[],y[]. in short you need to choose such a sequence of cutting 
such that cost is minimized.return the minimum cost
example:
M=6,N=4
x[]={2,1,3,1,4}
y[]={4,1,2}
output:42
*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
long long minCostToBreakGrid(int n,int m,vector<long long>&vertical,vector<long long>&horizontal){
    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int hz=1,vr=1;
    int h=0,v=0;
    long long ans=0;
    while(h<horizontal.size() && v<vertical.size()){
        if(vertical[v]>horizontal[h]){
            ans+=vertical[v]*hz;
            vr++;
            v++;
        }
        else{
            ans+=horizontal[h]*vr;
            hz++;
            h++;
        }
    }
    while(h<horizontal.size()){
        ans+=horizontal[h]*vr;
        hz++;
        h++;
    }
    while(v<vertical.size()){
        ans+=vertical[v]*hz;
        vr++;
        v++;
    }
    return ans;
}
int main(){
    int n,m;
    cout<<"enter n and m:";
    cin>>n>>m;
    vector<long long>horizontal,vertical;
    for(int i=0;i<m-1;i++){
        int a;
        cin>>a;
        horizontal.push_back(a);
    }
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        vertical.push_back(a);
    }
    cout<<minCostToBreakGrid(n,m,vertical,horizontal);
}