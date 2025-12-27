/*Create a class 'book' with name, price and number of pages as its attributes. The class should contain 
following member functions:

countBooks(int price): This function will return count of all the books that have a price less than the given price.
isBookPresent(string title) : This will return a boolean indicating whether any book with the given title*/
#include<iostream>
using namespace std;
class Books{
    string title;
    int price;
    int pages;
    public:
    /*this operator is used to identify the class attributes or data members when the names of data members and 
    parameters have same name in a member function as shown below*/
    void setter(string title,int price,int pages){
        this->title=title;
        this->price=price;
        this->pages=pages;
    }
    /*below function is normal member function here we are not using this operator bcz function parameters have
    differnt names*/
    void setter(string name,int cost,int page){
        title=name;
        price=cost;
        pages=page;
    }
    int countbooks(int p){
        if(price==p) return 1;
        else return 0;
    }
    bool bookpresent(string name){
        if(title==name) return true;
        else return false;
    }
};
int main(){
    Books b1,b2;
    b1.setter("ramayan",1000,5000);
    b2.setter("mahabharat",5000,800);
    cout<<b1.countbooks(1000)<<endl;
    cout<<b2.countbooks(10000)<<endl;
    cout<<endl;
    bool ch=b1.bookpresent("ramayan");
    cout<<ch<<endl;
    bool dh=b1.bookpresent("mahabharat");
    cout<<dh<<endl;
}