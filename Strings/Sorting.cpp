/*this string sorting is done according to the ASCII values*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);
    cout<<str<<endl;
    //using inbuilt function to sort the string
    sort(str.begin(),str.end());
    cout<<str<<endl;
    int n=str.size();
    //without using inbuilt function
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<str<<endl;
}