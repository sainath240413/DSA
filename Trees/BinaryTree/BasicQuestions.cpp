#include<iostream>
#include<climits>
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
int minvalue(Node* root){
    if(root==NULL) return INT_MAX;
    int lmin=minvalue(root->left);
    int rmin=minvalue(root->right);
    return min(root->val,min(lmin,rmin));
    // Alternative approacin
    //return min(root->val,min(minvalue(root->left), minvalue(root->right)));
}
int maxvalue(Node* root){
    if(root==NULL) return INT_MIN;
    int lmax=maxvalue(root->left);
    int rmax=maxvalue(root->right);
    return max(root->val,max(lmax,rmax));
    // Alternative approach:
    //return max(root->val,max(maxvalue(root->left), maxvalue(root->right))); 
}
int level(Node* root){
    if(root==NULL) return 0;
    int leftlev=level(root->left);
    int rightlev=level(root->right);
    return 1+max(leftlev,rightlev);
    // Alternative approach:
    //return 1+max(level(root->left), level(root->right));
}
int product(Node* root){
    if(root==NULL) return 1;
    int lp=product(root->left);
    int rp=product(root->right);
    return root->val*lp*rp;
}
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
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
    cout<<"elemnets of tree are:";
    display(a);
    cout<<endl;
    cout<<"maximum value in tree:"<<maxvalue(a)<<endl;
    cout<<"product of node values in tree:"<<product(a)<<endl;
    cout<<"minimum value in tree:"<<minvalue(a)<<endl;
    cout<<"No of levels in tree:"<<level(a)<<endl;
    cout<<"height of tree is:"<<level(a)-1<<endl;
}