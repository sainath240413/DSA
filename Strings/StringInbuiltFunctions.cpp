#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string:";
    getline(cin,str);//to get input string
    cout<<str<<endl;
    cout<<str.size()<<endl;//to get the size of the string
    cout<<str.length()<<endl;//to get the length of the string
    str.push_back('k');//adds the character to the string
    cout<<str<<endl;
    str.pop_back();//it will remove last character in the string
    cout<<str<<endl;
    str=str+" kummetha";//'+' operator is used to append the string at last
    cout<<str<<endl;
    str="kummetha "+str;//we can add the string or character in the beginning and at the end
    cout<<str<<endl;
    reverse(str.begin(),str.end());//used to reverse the entire string
    cout<<str<<endl;
    reverse(str.begin()+1,str.end()-7);//reversing from specific index to index
    cout<<str<<endl;
    /*str.substr(idx,size) idx=index ,size=size of substring
    this function will give substring from the index to the
    size of the charecters if the function is like this 
    str.substring(idx) then the substring will be the string 
    from that index to the end of the string*/
    cout<<str.substr(3)<<endl;
    cout<<str.substr(1,3)<<endl;
    /*to_string(n) n is the integer value and this function 
    converts integer to string*/
    int x=12345;
    string s=to_string(x);
    cout<<str+s<<endl;
    cout<<s.length();
    
}