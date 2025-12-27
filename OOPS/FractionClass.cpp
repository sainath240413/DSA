//this comes under compile time polymorphism
#include<iostream>
using namespace std;
class fraction{
    public:
    int num;
    int den;
    fraction(int num, int den){
        this->num = num;
        this->den = den;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }
    // Overloading the '+' operator to add two fractions
    fraction add(fraction f2){
        int newnum=this->num*f2.den + f2.num*this->den;
        int newden=this->den*f2.den;
        fraction ans(newnum, newden);
        return ans;
    }
    fraction operator+(fraction f2){
        int newnum=this->num*f2.den + f2.num*this->den;
        int newden=this->den*f2.den;
        fraction ans(newnum, newden);
        return ans;
    }
    // You can also overload other operators like '-', '*', '/' similarly
    // For example, to overload the '-' operator:
    fraction operator-(fraction f2){
        int newnum=this->num*f2.den - f2.num*this->den;
        int newden=this->den*f2.den;
        fraction ans(newnum, newden);
        return ans;
    }
};
int main(){
    fraction f1(1,2);
    fraction f2(1,3);
    f1.display();
    f2.display();
    fraction f3 = f1.add(f2);
    fraction f4 = f1 + f2; // Using the overloaded '+' operator
    f3.display();
    f4.display();
    fraction f5 = f1 - f2; // Using the overloaded '-' operator
    f5.display();
}