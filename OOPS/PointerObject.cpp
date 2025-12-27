//important note:
/*1.if we pass object to function by value then it will create a copy of that object and any changes made to the
copy will not affect the original object.
2.if we pass object to function by reference then it will not create a copy of that object and any changes made 
to the object will affect the original object.
3.if we pass object to function by pointer then it will not create a copy of that object and any changes made to
the object will affect the original object.
4.if we pass object to function by pointer then we can access the object attributes*/
#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    float average;
    int runs;
    Cricketer(string name,float average,int runs){ //parametarized constructor
        this->name=name;
        this->average=average;
        this->runs=runs;
    }

};
void change(Cricketer* c){
    (*c).average=60; //using dereferencing operator to access object attributes
    //or
    c->average=60; //using pointer to access object attributes
}
int main(){
    Cricketer c1("virat",50.5,10000);
    Cricketer c2("rohit",45.7,8000);

    cout<<c1.average<<endl; 
    change(&c1);
    cout<<c1.average<<endl; 

    Cricketer *p1=&c1; //pointer to object c1


    cout<<(*p1).name<<endl; //accessing name using dereferencing operator
    (*p1).average=56; //modifying average using dereferencing operator
    cout<<(*p1).average<<endl; //accessing average using dereferencing operator

    //or we can use pointer operator

    cout<<p1->name<<endl; 
    p1->average=70;
    cout<<p1->average<<endl;    
}