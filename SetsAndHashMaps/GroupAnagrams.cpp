/*Leetcode49...revise...
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Explanation:
There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

Example 2:
Input: strs = [""]
Output: [[""]]

Example 3:
Input: strs = ["a"]
Output: [["a"]]

Constraints:
1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& str) {
    int n=str.size();
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>m;
    for(int i=0;i<n;i++){
        string lexo=str[i];
        sort(lexo.begin(),lexo.end());
        if(m.find(lexo)==m.end()){
            m[lexo].push_back(str[i]);
        }
        else{
            m[lexo].push_back(str[i]);
        }
    }
    for(auto ele:m){
        ans.push_back(ele.second);
    }
    return ans;
}
int main() {
    vector<string>strs={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>result=groupAnagrams(strs);
    for(int g=0;g<result.size();g++){   // loop over groups
        cout<<"[";
        for(int i=0;i<result[g].size();i++){  // loop over elements in group
            cout<<result[g][i];
            if(i!=result[g].size()-1) cout<<", ";
        }
        cout << "]\n";
    }
}