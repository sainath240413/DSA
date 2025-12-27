/*Leetcode 242
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
*/
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool isAnagram(string s,string t){
    if(s.length()!=t.length()) return false;
    unordered_map<char,int>m1;
    unordered_map<char,int>m2;
    for(int i=0;i<s.length();i++){
        m1[s[i]]++;
        m2[t[i]]++;
    }
    for(auto ele:m1){
        char ch1=ele.first;
        int freq1=ele.second;
        if(m2.find(ch1)!=m2.end()){
            int freq2=m2[ch1];
            if(freq1!=freq2) return false;
        }
        else return false;
    }
    return true;

    //Alternative solution using ionly one unordered_map
    if(s.length()!=t.length()) return false;
    unordered_map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    for(int i=0;i<t.length();i++){
        char ch=t[i];
        if(m.find(ch)!=m.end()){
            m[ch]--;
            if(m[ch]==0) m.erase(ch);
        }
        else return false;
    }
    if(m.size()!=0) return false;
    else return true;
}
int main(){
    string s1="anagram";
    string s2="nagaram";
    cout<<boolalpha<<isAnagram(s1,s2)<<endl;
}