/*Leetcode...Revise...
You are given two integers m and n, which represent the dimensions of a matrix.
You are also given the head of a linked list of integers.
Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.
Return the generated matrix.

Example 1:
Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
Explanation: The diagram above shows how the values are printed in the matrix.
Note that the remaining spaces in the matrix are filled with -1.

Example 2:
Input: m = 1, n = 4, head = [0,1,2]
Output: [[0,1,2,-1]]
Explanation: The diagram above shows how the values are printed from left to right in the matrix.
The last space in the matrix is set to -1.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
    ListNode* temp=head;
    vector<vector<int>>a(m,vector<int>(n,-1));
    int minc=0,minr=0,maxc=n-1,maxr=m-1;
    while(minr<=maxr && minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            if(temp==NULL) return a;
            a[minr][i]=temp->val;
            temp=temp->next;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            if(temp==NULL) return a;
            a[i][maxc]=temp->val;
            temp=temp->next;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            if(temp==NULL) return a;
            a[maxr][i]=temp->val;
            temp=temp->next;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            if(temp==NULL) return a;
            a[i][minc]=temp->val;
            temp=temp->next;
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
    }
    return a;
}
void display(vector<vector<int>>ans){
    int n=ans.size();
    int m=ans[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(10);
    ListNode* c=new ListNode(20);
    ListNode* d=new ListNode(30);
    ListNode* e=new ListNode(40);
    ListNode* f=new ListNode(50);
    ListNode* g=new ListNode(50);
    ListNode* h=new ListNode(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    int n,m;
    cout<<"enter no of rows:";
    cin>>n;
    cout<<"enter no of coloumns:";
    cin>>m;
    cout<<endl;
    vector<vector<int>>ans=spiralMatrix(n,m,a);
    display(ans);
}