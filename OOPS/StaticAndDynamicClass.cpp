#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    int rollno;
    public:
    void setter(string name,int age,int rollno){
        this->name=name;
        this->age=age;
        this->rollno=rollno;
    }
    void getter(){
        cout<<name<<endl<<age<<endl<<rollno<<endl;
    }
};
int main(){
    /*dynamic memory allocation here *s is an pointer to class it will store address of object*/
    Student *s=new Student;
    /*here we are creating an another object to store created object to pass it to functions*/
    Student s1=*s;
    s1.setter("sai",20,100);
    s1.getter();
    /*we can skip above line and can be written as we use -> operator there is no need of using pointer to store
    it in another object*/
    s->setter("sai",20,100);
    s->getter();
}