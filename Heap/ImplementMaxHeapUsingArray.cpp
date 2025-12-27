#include<iostream>
#include<vector>
using namespace std;
/*if the node is at index i:
1. left child is at index 2*i+1
2. right child is at index 2*i+2
3.parent is at index i/2 (integer division)
4. height of the tree is log(n)
*/
class maxheap{
    public:
    int a[100];
    int idx;
    maxheap(){
        idx=1;
    }
    int top(){
        if(idx==1) return -1;
        return a[1];
    }
    void push(int val){
        a[idx]=val;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(a[i]>a[parent]){
                swap(a[i],a[parent]);
            }
            else break;
            i=parent;
        }
    }
    int size(){
        if(idx==1) return -1;
        return idx-1; //idx is incremented after push, so size is idx-1
    }
    void pop(){
        if(idx==1) return;
        idx--;
        a[1]=a[idx];
        int i=1;
        while(true){
            int l=2*i;
            int r=2*i+1;
            if(l>idx-1) break;
            if(r>idx-1){
                if(a[i]<a[l]){
                    swap(a[i],a[l]);
                    i=l;
                }
                break;
            }
            if(a[l]>a[r]){
                if(a[i]<a[l]){
                    swap(a[i],a[l]);
                    i=l;
                }
                else break;
            }
            else{
                if(a[i]<a[r]){
                    swap(a[i],a[r]);
                    i=r;
                }
                else break;
            }
        }
    }
    void print(){
        for(int i=1;i<idx;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    maxheap h;
    h.push(10);
    h.push(20);
    cout<<"size of heap:"<<h.size()<<endl;
    h.push(5);
    cout<<"top element of heap:"<<h.top()<<endl;
    h.push(15);
    cout<<"size of heap:"<<h.size()<<endl;
    cout<<"top element of heap:"<<h.top()<<endl;
    h.print();
    h.pop();
    cout<<"size of heap:"<<h.size()<<endl;
    cout<<"top element of heap:"<<h.top()<<endl;
    h.print();
    h.pop();
    h.print();
    cout<<"top element of heap:"<<h.top()<<endl;
}