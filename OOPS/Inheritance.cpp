/*inheritance is a concept of OOPS which means a class will take properties from other class this is called 
inheritance.
inheritance is of 6 types
->single inheritance 
->multiple inheritance 
->multilevel inheritance 
->heirarchial inheritance 
->hybrid inheritance*/
#include<iostream>
using namespace std;
/*multilevel inheritance in this type of inheritance a class will take properties from another class and that
class will take properties from another class this is called multilevel inheritance*/ 
class vehicle{
    public:
    string name;
    int price;
    int speed;
    int mileage;
};
class two_wheeler: public vehicle{
    public:
};
class bike: public two_wheeler{
    public:
    int gear;
};
class scooty: public two_wheeler{
    public:
    int storage;
};


/*multiple inheritance:in this type of inheritance a class will take properties from more than one class this is
called multiple inheritance*/
class cricketer{
    public:
    int age;
    string country;
    int runs;
    float average;
    int wickets;
};
class engineer: virtual public cricketer{
    public:
    int experience;
    string company;
    string field;
};
class multitasker: public engineer,virtual public cricketer{
    public:
    string name;
};


/*hierarchical inheritance:in this type of inheritance a class will take properties from one class and that class
will take properties from more than one class this is called hierarchical inheritance*/

/*hybrid inheritance:in this type of inheritance a class will take properties from more than one class and that 
class will take properties from another class this is called hybrid inheritance*/
int main(){
    //multilevel inheritance
    bike b1;
    b1.name = "KTM";
    b1.price = 200000;
    b1.speed = 150;
    b1.mileage = 35;
    b1.gear = 6;
    
    cout << "Bike Name: " << b1.name << endl;
    cout << "Price: " << b1.price << endl;
    cout << "Speed: " << b1.speed << " km/h" << endl;
    cout << "Mileage: " << b1.mileage << " km/l" << endl;
    cout << "Gear: " << b1.gear << endl;

    //multiple inheritance
    multitasker m1;
    m1.age = 30;
    m1.country = "India";
    m1.runs = 5000;
    m1.average = 50.5;
    m1.wickets = 100;
    m1.experience = 5;
    m1.company = "TechCorp";
    m1.field = "Software Engineering";
    
    cout << "\nCricketer Details:" << endl;
    cout << "Age: " << m1.age << endl;
    cout << "Country: " << m1.country << endl;
    cout << "Runs: " << m1.runs << endl;
    cout << "Average: " << m1.average << endl;
    cout << "Wickets: " << m1.wickets << endl;
    cout << "Experience: " << m1.experience << endl;
    cout << "Company: " << m1.company << endl;
    cout << "Field: " << m1.field << endl;

    return 0;
}