/*there are 4 pillers of oops
data abstraction,encapsulation,inheritance,polymorphism*/

/*
data abstraction: it is hiding the unwanted data for the user is called data abstraction.
encapsulation: combinig memberfunctions and data members within the class is called encapsulation.
inheritance: takin the attributes of one class to another class this helps to avoid multiple declerations.
polymorphism: giving same names to multiple functions they may be differ in no of parameters or type of parameters
or their return type etc.,
*/
#include<iostream>
using namespace std;
class Student{ 
    /*class it's an user defined data structure like structures in C we can store different datatypes in class*/
    public://access specifier
    /*there are 3 access modifiers
    privite->cannot access outside class
    public->can access through out the program
    protected->these are attributes or functions which can be accessed limitedly which we study in inheritance*/
    string name;
    int age;
    int usn;
    string branch;
    char section;
};

class player{
    /*we encapsulate member functions and data members using this getters and setters and they are used 
    to access privite data members outside the class*/

    //by default members in class will be privite
    string name;
    int age;
    int score;
    float average;
    public:
    //setter we use it to set values for privited attributes
    void setter(string n,int ag,int runs,float avg){
        name=n;
        age=ag;
        score=runs;
        average=avg;
    }
    //getter used to print output for priveted attributes
    void getter(){
        cout<<"name->"<<name<<endl;
        cout<<"age->"<<age<<endl;
        cout<<"score->"<<score<<endl;
        cout<<"average->"<<average<<endl;
    }
    int getscore(){
        return score;
    }
};
/*passing objects to functions by default(pass by value) and if we add &(operator) then it will become pass by 
reference*/
int addscore(player p1,player p2){
    return p1.getscore()+p2.getscore();
}
/*here return type is class*/
player morescore(player p1,player p2){
    if(p1.getscore()>p2.getscore()) return p1;
    else return p2;
}
int main(){
    /*we can access class with creating object here object is s1 and it's attributes are name,age,section*/
    Student s1;
    s1.name="sainath";
    s1.age=20;
    s1.usn=100;
    s1.branch="CSE";
    s1.section='B';
    cout<<"name->"<<s1.name<<endl<<"age:->"<<s1.age<<endl<<"branch->"<<s1.branch<<endl<<"section->"<<s1.section<<endl<<"usn->"<<s1.usn<<endl;
    /*we can also give input for these attributes as shown below*/
    Student s2;
    cout<<"enter name:";
    cin>>s2.name;
    cout<<"enter age:";
    cin>>s2.age;
    cout<<"name:"<<s2.name<<endl<<"age:"<<s2.age<<endl;

    //using setter and getter functions
    player p1,p2;
    p1.setter("KL Rahul",34,5000,45);
    p2.setter("YB Jaishwal",25,3000,55);
    p1.getter();
    p2.getter();


    /*here we get output of functions where we called it using classes as parameters*/
    cout<<addscore(p1,p2)<<endl;
    player more=morescore(p1,p2);
    cout<<more.getscore();
}