/*Leetcode 295... revise...
The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle 
value, and the median is the mean of the two middle values.

For example, for arr = [2,3,4], the median is 3.
For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
Implement the MedianFinder class:

MedianFinder() initializes the MedianFinder object.
void addNum(int num) adds the integer num from the data stream to the data structure.
double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be
accepted.
 
Example 1:
Input:
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
[[], [1], [2], [], [3], []]
Output:
[null, null, null, 1.5, null, 2.0]

Explanation
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);    // arr = [1]
medianFinder.addNum(2);    // arr = [1, 2]
medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)
medianFinder.addNum(3);    // arr[1, 2, 3]
medianFinder.findMedian(); // return 2.0
 
Constraints:
-105 <= num <= 105
There will be at least one element in the data structure before calling findMedian.
At most 5 * 104 calls will be made to addNum and findMedian.
*/
#include<iostream>
#include<queue>
using namespace std;
class MedianFinder {
public:
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    MedianFinder() {
        
    }
    void addNum(int num) {
        //method->1,2,3
        // v.push_back(num);

        //method->4
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();
        if(maxheap.size()<minheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        //method->1  time limit exceeded
        // int lo=0,hi=v.size()-1;
        // if(v.size()%2==0) {
        //     vector<int>temp=v;
        //     sort(temp.begin(),temp.end());
        //     int mid1=hi/2;
        //     int mid2=(hi/2)+1;
        //     double median=(double(temp[mid1])+double(temp[mid2]))/2;
        //     return median;
        // }
        // else{
        //     vector<int>odd=v;
        //     sort(odd.begin(),odd.end());
        //     int mid=hi/2;
        //     double median=odd[mid];
        //     return median;
        // }

        // method->2  time limit Exceeded
        // int n=v.size();
        // sort(v.begin(),v.end());
        // if(n%2==0){
        //     return (v[n/2-1]+v[n/2])/2.0;
        // }
        // else{
        //     return v[n/2];
        // }

        // method->3  Time Limit Exceeded
        // if(v.size()==0) return 0;
        // sort(v.begin(),v.end());
        // priority_queue<int>maxheap;
        // for(int i=0;i<v.size()/2;i++) maxheap.push(v[i]);
        // priority_queue<int,vector<int>,greater<int>>minheap;
        // for(int i=v.size()/2;i<v.size();i++) minheap.push(v[i]);
        // if(v.size()%2==0) {
        //     double median=(double(maxheap.top())+double(minheap.top()))/2;
        //     return median;
        // }
        // else{
        //     double median=double(minheap.top());
        //     return median;
        // }
        
        //method->4
        if(maxheap.size()==minheap.size()){
            return (maxheap.top()+minheap.top())/2.0;
        }
        else{
            return maxheap.top();
        }
    }
};
int main(){
    MedianFinder* obj=new MedianFinder();
    obj->addNum(1);
    obj->addNum(2);
    cout<<"Median after adding 1 and 2:"<<obj->findMedian()<<endl; // Should return 1.5
    obj->addNum(3);
    cout<<"Median after adding 3:"<<obj->findMedian()<<endl; // Should return 2.0
}