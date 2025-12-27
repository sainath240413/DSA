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
void sort01(vector<int>&b){
    int i=0,j=b.size()-1;
    while(i<j){
        if(b[i]==0) i++;
        if(b[j]==1) j--;
        else if(b[i]==1 && b[j]==0){
            int temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            i++;
            j--;
        }

        //or

        if(b[i]==1 && b[j]==0){
            int temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            i++;
            j--;
        }
        if(b[i]==0) i++;
        if(b[j]==1) j--;
        
        //or

        if(b[i]==0) i++;
        if(b[j]==1) j--;
        if(i>j) break;
        if(b[i]==1 && b[j]==0){
            int temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    int choice;
    cout<<"enter choice:";
    cin>>choice;
    while(choice){
        int x;
        cout<<"enter data:";
        cin>>x;
        v.push_back(x);
        cout<<"enter choice:";
        cin>>choice;
    }
    cout<<"elements of the array before sorting:";
    display(v);
    sort01(v);
    cout<<"elements of the array after sorting:";
    display(v);
}