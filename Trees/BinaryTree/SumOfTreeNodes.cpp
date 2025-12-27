#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
int SumOfTreeNodes(Node* root){
    if(root==NULL) return 0;
    int leftsum=SumOfTreeNodes(root->left);
    int rightsum=SumOfTreeNodes(root->right);
    return root->val+leftsum+rightsum;
}
int SizeOfTree(Node* root){
    if(root==NULL) return 0;
    int leftsize=SizeOfTree(root->left);
    int rightsize=SizeOfTree(root->right);
    return 1+leftsize+rightsize;
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
    cout<<"sum of nodes in tree is:"<<SumOfTreeNodes(a)<<endl;
    cout<<SizeOfTree(a)<<endl;
}