#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int *ptr = &a;
    int b = ++(*ptr);
    int c = (*ptr)++;
    cout<<a<<" "<<b<<" "<<c;
}
