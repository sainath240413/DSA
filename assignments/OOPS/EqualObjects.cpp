/*Create a class ‘date’ that contains three members namely date, month and year. Create 2 objects of this 
class with different dates and now compare the two. If the dates are equal then display message as "Equal" 
otherwise "Unequal". Use Getters & Setters. 
*Note : The function should be a member function of this class.*/
#include<iostream>
using namespace std;
class date{
    public:
    int day;
    int month;
    int year;
    date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    int getdate(){
        return day;
    }
    int getmonth() {
        return month;
    }
    int getyear(){
        return year;
    }
    void equal(date d){
        if(d.getdate()==this->getdate() && d.getmonth()==this->getmonth() && d.getyear()==this->getyear()){
            cout<<"dates are equal\n";
        }
        else{
            cout<<"dates are not equal\n";
        }
    }
};
int main(){
    date d1(24,11,2004);
    date d2(24,11,2004);
    d2.equal(d1);
}