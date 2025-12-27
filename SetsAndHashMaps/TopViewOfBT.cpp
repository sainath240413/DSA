/*revise do it again....*/
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<unordered_map>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void topview(TreeNode* root){
    queue<pair<TreeNode*,int>>q;//  <root,level>
    unordered_map<int,int>m;//  <level,root->val>
    q.push({root,0});//push root with level 0
    while(q.size()>0){
        TreeNode* temp=q.front().first;
        int level=q.front().second;
        q.pop();//poping oy=ut the front element after storing it in temp and level
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }
        if(temp->left!=NULL){//checking for left child
            //if left child is present then push it into the queue with level-1
            q.push({temp->left,level-1});
        }
        if(temp->right!=NULL){//checking for right child
            //if right child is present then push it into the queue with level+1
            q.push({temp->right,level+1});
        }
    }
    //finding the minimum and maximum level in the map
    int minlevel=INT_MAX;
    int maxlevel=INT_MIN;
    for(auto x:m){
        minlevel=min(minlevel,x.first);
        maxlevel=max(maxlevel,x.first);
    }
    for(int i=minlevel;i<=maxlevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(8);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->right = f;
    e->left = g; e->right = h;
    topview(a);
}