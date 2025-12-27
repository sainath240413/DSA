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
void sortv(vector<int>&a){
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
vector<int> merge(vector<int>&a,vector<int>&b){
    vector<int>res(a.size()+b.size());
    int k=0;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++;
        }
        else{
            res[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k]=b[i];
            i++;
            k++;
        }
    }
    cout<<"elements of the array after merging sorted array are:";
    display(res);
}
int main(){
    vector<int>v1;
    vector<int>v2;
    cout<<"enter the elements of the array1:"<<endl;
    create(v1);
    cout<<"enter the elements of the array2:"<<endl;
    create(v2);
    cout<<"elements of the array1 before sorting are:";
    display(v1);
    cout<<"elements of the array2 before sorting are:";
    display(v2);
    sortv(v1);
    cout<<"elements of the array1 after sorting are:";
    display(v1);
    sortv(v2);
    cout<<"elements of the array2 after sorting are:";
    display(v2);
    merge(v1,v2); 
}

//---->try this function again merging arrays in reverse order

// vector<int> merge(vector<int>&a,vector<int>&b){
//     vector<int>res(a.size()+b.size());
//     int k=a.size()+b.size()-1;
//     int i=a.size()-1,j=b.size()-1;
//     while(i>=0 && j>=0){
//         if(a[i]>b[j]){
//             res[k]=a[i];
//             i--;
//         }
//         else{
//             res[k]=b[j];
//             j--;
//         }
//         k--;
//     }
//     if(i<0){
//         while(j>=0){
//             res[k]=b[j];
//             j--;
//             k--;
//         }
//     }
//     if(j<0){
//         while(i>=0){
//             res[k]=b[i];
//             i--;
//             k--;
//         }
//     }
//     cout<<"elements of the array after merging sorted array are:";
//     display(res);
// }