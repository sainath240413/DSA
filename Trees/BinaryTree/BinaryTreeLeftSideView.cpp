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
void postorder(TreeNode* root,vector<int>&ans,int level){
    if(root==NULL) return;
    if(level==ans.size()) ans.push_back(root->val);
    postorder(root->left,ans,level+1);
    postorder(root->right,ans,level+1);
}
vector<int> LeftSideView(TreeNode* root) {
    vector<int>ans;
    postorder(root,ans,0);
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
    vector<int>ans=LeftSideView(root);
    display(ans);
}