#include<iostream>
using namespace std;
class indiaA{
    int pos;
    public:
    class india{
    public:
        string name;
        int runs;
        float avg;
    };
    india p1;
    void setter(india p){
        this->p1=p;
    }
    india getter(){
        return p1;
    }
};
int main(){
    indiaA::india p1;
    p1.name="kl rahul";
    p1.runs=6000;
    p1.avg=45.0;
    indiaA karnataka;
    karnataka.setter(p1);
    indiaA::india result=karnataka.getter();
    cout<<"name: "<<result.name<<endl;
    cout<<"runs: "<<result.runs<<endl;
    cout<<"average: "<<result.avg<<endl;
}