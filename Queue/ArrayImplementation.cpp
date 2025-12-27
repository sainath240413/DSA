#include<iostream>
using namespace std;
/*problems of array/vector implementation of queue:
1.Fixed size:The queue has a fixed size,which can lead to overflow if more elements are added than the size of 
the array and it can be solved by vector implementation.
2.Wasted space:If elements are removed from the front of the queue, the space at
the front of the array is wasted, and new elements can only be added at the back.
3.Shifting elements:When elements are removed from the front, the remaining elements need to beshifted to fill 
the gap, which can be inefficient for large queues.
*/
class queue{
    public:
    int f,b,size;
    int arr[100];
    queue(){
        f=0;b=0;size=0;
    }
    void push(int x){
        if(size==100){
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b]=x;
        size++;
        b++;
    }
    void pop(){
        if(size==0){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<"popped element: "<<arr[f]<<endl;
        f++;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(size==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void display(){
        cout<<"elements in queue are: ";
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.display();
    cout<<"front element: "<<q.front()<<endl;
    cout<<"back element: "<<q.back()<<endl;
    q.pop();
    q.display();
    cout<<"size of queue: "<<q.getSize()<<endl;
}