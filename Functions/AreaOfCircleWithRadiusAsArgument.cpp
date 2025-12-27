#include<iostream>
using namespace std;
void area(float radius){
    float area,pi=3.1413;
    area=pi*radius*radius;
    cout<<area;
}
int main(){
    float radius;
    cout<<"enter radius:";
    cin>>radius;
    area(radius);
}
