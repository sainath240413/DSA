//leet code revise....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void create(vector<int>&a){
    int choice;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        a.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
}
void reverse(vector<int>&a,int i,int j){
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return;
}
/*step-1:find pivot
step-2:swapping or reverseing after pivot
step-3:finding just grater number to idx
step-4:sorting idx and idx+1*/
void permutation(vector<int>&a){
    int n=a.size();
    int idx=-1;
    //step-1:find pivot
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            idx=i;
            break;
        }
    }
    //step-2:sorting or reverseing after pivot
    if(idx==-1){
        reverse(a,0,n-1);
        display(a);
        return;
    }
    sort(a.begin()+idx+1,a.end());
    //step-3:finding just grater number to idx
    int justg=-1;
    for(int i=idx+1;i<n;i++){
        if(a[i]>a[idx]){
            justg=i;
            break;
        }
    }
    //step-4:swapping idx and j
    int temp=a[idx];
    a[idx]=a[justg];
    a[justg]=temp;
    display(a);
}
int main(){
    vector<int>v;
    create(v);
    cout<<"elements of the vector are:";
    display(v);
    cout<<"next permutaions are:";
    permutation(v);
}
