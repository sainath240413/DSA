/*print elements of nth level*/
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void displayLevel(Node* root,int currentLevel,int targetLevel){
    if(root==NULL) return;
    if(currentLevel==targetLevel){
        cout<<root->val<<" ";
        return;
    }
    displayLevel(root->left,currentLevel+1,targetLevel);
    displayLevel(root->right,currentLevel+1,targetLevel);
}
void displayLevelrev(Node* root,int currentLevel,int targetLevel){
    if(root==NULL) return;
    if(currentLevel==targetLevel){
        cout<<root->val<<" ";
        return;
    }
    displayLevelrev(root->right,currentLevel+1,targetLevel);
    displayLevelrev(root->left,currentLevel+1,targetLevel);
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    int levels=level(a);
    //displayLevel(a,1,level);

    //level order traversal
    cout<<endl<<"Level order traversal:"<<endl;
    for(int i=1;i<=levels;i++){//T.C=O(n), S.C=O(n)
        //in worsst case T.C=O(n^2) when tree is skewed
        //in best case T.C=O(nlogn) when tree is balanced
        displayLevel(a,1,i);
        cout<<endl;
    }
    //level order reverse traversal
    cout<<endl<<"Level order reverse traversal:"<<endl;
    for(int i=1;i<=levels;i++){//T.C=O(n), S.C=O(n)
        //in worsst case T.C=O(n^2) when tree is skewed
        //in best case T.C=O(nlogn) when tree is balanced
        displayLevelrev(a,1,i);
        cout<<endl;
    }
}