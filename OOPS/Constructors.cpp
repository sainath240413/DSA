#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    float gpa;
    string branch;

    /*constructors are funtions and it is called while initialization of the objects for a class.there will be a
    default constructor which is created by compiler if we don't create any constructor in the class.constructors 
    do not have return type.name of the constructor is same as class name*/

    /*default constructor will look like this*/
    Student(){
        /*we need this when we create another constructor and we need to declare the data in another way like
        s1.name="vijay";
        s1.age=19;
        etc.,*/
    }

    /*we can create as many constructors as we want*/

    
    /*constructors may be parametarized or non parametarized constructors*/
    Student(string name,int age,string branch,float gpa){ //parametarized constructor 
        this->name=name;
        this->age=age;
        this->branch=branch;
        this->gpa=gpa;
    }
    /*getter function*/
    void getter(){
        cout<<name<<" "<<age<<" "<<branch<<" "<<gpa<<endl;
    }
};
int main(){
    Student s1("Rishi",19,"CSE",7.7);
    s1.getter();
    /*copy constructor is used to copy the values of one object to another object*/
    Student s2(s1); //copy constructor  copying s1 to s2
    s2.name="Sai"; //deep copy means it will not change s1 name but it will change s2 name
    s2.getter();
    Student s3=s2; //copy constructor copying s2 to s3
    s3.name="Rohit"; //deep copy means it will not change s2 name but it will change s3 name
    s3.getter();
}