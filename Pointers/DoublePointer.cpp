#include<iostream>
using namespace std;
int main(){
    int n=5;
    int *ptr=&n;
    int **ptr1=&ptr;
    cout<<n<<" "<<*ptr<<" "<<**ptr1<<endl;
    cout<<&n<<" "<<&ptr<<" "<<&ptr1;
}