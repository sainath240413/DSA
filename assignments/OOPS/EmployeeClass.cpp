/*Create a class ‘Employee’ with following data members :
 Name
 Employee ID
 Salary
 Class should have following member functions:
 Display() : To display the characteristics of each employee
 Create 5 objects of Employee and write functions to calculate
 averageWage() : To return the average salary of all employees
 maxSalary() : To return the employee whose salary is maximum*/
#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    int empid;
    Employee(string name,int empid,int salary){
        this->name=name;
        this->empid=empid;
        this->salary=salary;
    }
    int sal(){
        return salary;
    }
    void display() const{
        cout<<"Employee Name:"<<name<<endl;
        cout<<"Employee empid:"<<empid<<endl;
        cout<<"Employee salary:"<<salary<<endl;
        cout<<"--------------------------------\n";
    }
};
double averageWage(Employee e[], int size){
    double total=0;
    for (int i=0;i<size;++i){
        total+=e[i].sal();
    }
    return total/size;
}

Employee maxSalary(Employee e[],int size){
    int maxIndex = 0;
    for (int i=1;i<size;++i) {
        if (e[i].sal()>e[maxIndex].sal()){
            maxIndex=i;
        }
    }
    return e[maxIndex];
}
int main(){
    Employee employee[5]={
        Employee("sai",1,20000),
        Employee("rishi",2,20000),
        Employee("karthik",3,20000),
        Employee("bhavadeep",4,1000),
        Employee("samuel",5,1000)
    };
    for(int i=0;i<5;i++){
        employee[i].display();
    }
    cout<<endl;
    cout<<"average salary:"<<averageWage(employee,5)<<endl;
    Employee maxemp=maxSalary(employee,5);
    cout<<"maximim salary:"<<maxemp.sal()<<endl;
}