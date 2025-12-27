#include<iostream>
using namespace std;
class scooty{
    public:
    int topSpeed;
    float mileage;
    virtual void sound(){
        cout<<"vroom vroom"<<endl;
    }
};
class bike: public scooty{
    public:
    int gear;
    void sound(){
        cout<<"droom droom"<<endl;
    }
};
int main(){
    scooty s;
    bike b1;
    s.sound(); // Calls scooty's sound
    b1.sound(); // Calls bike's sound
    scooty* b2=new bike;
    b2->sound(); //will give me vroom vroom because of runtime polymorphism
    //if we use virtual keyword for function in base class then it will give me droom droom
    //this is called function overriding using virtual functions
}