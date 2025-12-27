#include<iostream>
using namespace std;
/*best case->O(n),worst case and average case->O(n^2) it is a stable sort*/
int main(){
    int a[10],n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(a[j]>=a[j-1]) break;
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
            j--;
        }
    }
    for(int ele:a) cout<<ele<<" ";
}