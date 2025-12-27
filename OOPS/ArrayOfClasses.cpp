#include<iostream>
#include<vector>
using namespace std;
class Cricketer{
    public:
    string name;
    int matches;
    int age;
    float average;
    //public:
    void setter(string name,int matches,int age,float average){
        this->name=name;
        this->matches=matches;
        this->age=age;
        this->average=average;
    }
    void getter(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<matches<<endl;
        cout<<average<<endl;
    }
};
int main(){
    /*using static allocation*/

    //Cricketer p1,p2;
    // p1.setter("virat",150,36,50.5);
    // p2.setter("rohit",135,37,45.7);
    //cricketer cricketers[2]={p1,p2};
    // p1.getter();
    // cout<<endl<<endl;
    // p2.getter();

    
    /*using dynamic allocation*/
    vector<Cricketer> cricketers;
    for(int i=0;i<2;i++){
        string name;
        int matches,age;
        float average;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter matches: ";
        cin>>matches;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter average: ";
        cin>>average;
        Cricketer player;
        player.setter(name,matches,age,average);
        cricketers.push_back(player);
    }
    for(int i=0;i<2;i++){
        cricketers[i].getter();
        cout<<endl;
    }
}