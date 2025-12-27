/*leetcode 199...revise...try left side view....
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the 
nodes you can see ordered from top to bottom.

Example 1:
Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]

Example 2:
Input: root = [1,2,3,4,null,null,null,5]
Output: [1,3,4,5]

Example 3:
Input: root = [1,null,3]
Output: [1,3]

Example 4:
Input: root = []
Output: []

Constraints:
The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
*/
#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
    
};
TreeNode* construct(vector<int>&a, int n){
    if(n==0) return NULL;
    TreeNode* root=new TreeNode(a[0]);
    queue<TreeNode*>q;
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        TreeNode* temp=q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(a[i]!=INT_MIN) l=new TreeNode(a[i]);
        else l=NULL; 
        if(j!=n && a[j]!=INT_MIN) r=new TreeNode(a[j]);
        else r=NULL; 
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    } 
    return root;
}
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
//method->1:
// void displayLevel(TreeNode* root,int currentLevel,int Level,vector<int>&ans){
//     if(root==NULL) return;
//     if(currentLevel==Level){
//         ans[currentLevel]=root->val;
//         return;
//     }
//     displayLevel(root->left,currentLevel+1,Level,ans);
//     displayLevel(root->right,currentLevel+1,Level,ans);
// }
// void levelorder(TreeNode* root,vector<int>&ans){
//     int n=ans.size();
//     for(int i=0;i<n;i++){
//         displayLevel(root,0,i,ans);
//     }
// }
//method->2 using preorder
void preorder(TreeNode* root,vector<int>&ans,int level){
    if(root==NULL) return;
    ans[level]=root->val;
    preorder(root->left,ans,level+1);
    preorder(root->right,ans,level+1);
}
vector<int> rightSideView(TreeNode* root) {
    vector<int>ans(level(root),0);
    //levelorder(root,ans);
    preorder(root,ans,0);
    return ans;
}
void display(vector<int>ans){
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int>v={1,2,3,INT_MIN,5,INT_MIN,4};
    int n=v.size();
    TreeNode* root=construct(v,n);
    vector<int>ans=rightSideView(root);
    display(ans);
}