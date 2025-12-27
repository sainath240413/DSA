#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[10];
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*brute force method*/
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" has its duplicte at "<<j;
            }
        }
    }
    /*better method*/
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cout<<"duplicates present";
        }
    }
    /*optimal method*/
    int sum=0;
    int s=0;
    int m=n-1;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    s=m*(m+1)/2;
    if(sum-s!=0) cout<<"duplicates prestent of "<<sum-s<<endl;
}