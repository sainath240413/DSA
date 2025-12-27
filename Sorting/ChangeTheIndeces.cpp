//replace elements with indices when they are in sorted order start with 0 to n-1 
#include<iostream>
#include<vector>
/*can be done using hashmap*/
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>visited(n,0); //0 means not visited
    int x=0;

    /*method->1 works for each array in any range
    T.C->O(n^2)
    S.C->O(n)*/
    // for(int i=0;i<n;i++){
    //     int min=INT16_MAX;
    //     int mindx=-1;
    //     for(int j=0;j<n;j++){
    //         if(visited[j]==1) continue;
    //         else{
    //             if(a[j]<min){
    //                 min=a[j];
    //                 mindx=j;
    //             }
    //         }
    //     }
    //     a[mindx]=x;
    //     x++;
    //     visited[mindx]=1;
    // }
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";

    /*method->2 works for only positive elements in array
    T.C->O(n^2)
    S.C->O(1)*/
    for(int i=0;i<n;i++){
        int min=INT16_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(a[j]<=0) continue;
            else{
                if(a[j]<min){
                    min=a[j];
                    mindx=j;
                }
            }
        }
        a[mindx]=-x;
        x++;
    }
    for(int i=0;i<n;i++) {
        a[i]=-a[i];
        cout<<a[i]<<" ";
    }
}