//leetcode..revise

/*You are given an array time where time[i] denotes the time taken 
by the ith bus to complete one trip.
Each bus can make multiple trips successively; that is, the next 
trip can start immediately after completing the current trip. Also,
each bus operates independently; that is, the trips of one bus do 
not influence the trips of any other bus.
You are also given an integer totalTrips, which denotes the number
of trips all buses should make in total. Return the minimum time 
required for all buses to complete at least totalTrips trips.

Example 1:
Input: time = [1,2,3], totalTrips = 5
Output: 3
Explanation:
- At time t = 1, the number of trips completed by each bus are [1,0,0]. 
  The total number of trips completed is 1 + 0 + 0 = 1.
- At time t = 2, the number of trips completed by each bus are [2,1,0]. 
  The total number of trips completed is 2 + 1 + 0 = 3.
- At time t = 3, the number of trips completed by each bus are [3,1,1]. 
  The total number of trips completed is 3 + 1 + 1 = 5.
So the minimum time needed for all buses to complete at least 5 trips is 3.

Example 2:
Input: time = [2], totalTrips = 1
Output: 2
Explanation:
There is only one bus, and it will complete its first trip at t = 2.
So the minimum time needed to complete 1 trip is 2.*/

#include<iostream>
using namespace std;
bool check(long long mid,int time[], int totalTrips,int n){
    long long trips=0;
    for(int i=0;i<n;i++){
        trips+=mid/(long long)time[i];
    }
    if(trips<(long long)totalTrips) return false;
    else return true;
}
int main(){
    int time[10],n,totalTrips;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter elements of the array:";
    for(int i=0;i<n;i++) cin>>time[i];
    cout<<"enter total trips:";
    cin>>totalTrips;
    int mx=-1;
    for(int i=0;i<n;i++){
        mx=max(mx,time[i]);
    }
    long long lo=1;
    long long hi=(long long)mx*(long long)totalTrips;
    long long ans=-1;
    while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        if(check(mid,time,totalTrips,n)){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<ans;
}