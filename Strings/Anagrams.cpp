#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string str1,str2;
    cout<<"enter string 1:";
    getline(cin,str1);
    cout<<"enter sting 2:";
    getline(cin,str2);
    cout<<str1<<endl<<str2<<endl;
    //using inbuilt functions
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2) cout<<"str1 and str2 are anagrams"<<endl;
    else cout<<"str1 and str2 are not anagrams"<<endl;
    //without using inbuilt function
    int n1=str1.length();
    int n2=str2.length();
    for(int i=0;i<n1;i++){
        for(int j=i+1;j<n1;j++){
            if(str1[i]>str1[j]){
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=i+1;j<n2;j++){
            if(str2[i]>str2[j]){
                char temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    if(str1==str2) cout<<"str1 and str2 are anagrams"<<endl;
    else cout<<"str1 and str2 are not anagrams"<<endl;
}