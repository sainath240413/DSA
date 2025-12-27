/*Create a class to specify data on students with these attributes: Roll number, Name, Department, Course, 
Year of joining. Create 2 class variables. Now, create a member function to check if two students have the same 
Department.*/
#include<iostream>
using namespace std;
class students{
    public:
    int rollno;
    string name;
    string dept;
    string cource;
    int year;
    students(int rollno,string name,string dept,string cource,int year){
        this->rollno=rollno;
        this->name=name;
        this->dept=dept;
        this->cource=cource;
        this->year=year;
    }
    string getdept(){
        return dept;
    }
    void check(students s){
        if(s.getdept()==this->getdept()) cout<<"both belongs to same department";
        else cout<<"both study in different departments";
    } 
};
int main(){
    students s1(1,"vanka","ECE","Verilog",2023);
    students s2(2,"rishi","CSE","Data Structures",2023);
    s1.check(s2);
}