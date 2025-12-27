/*my way*/
#include<iostream>
using namespace std;
void firstandlast(int *n){
    int firstdigit;
    int lastdigit;
    lastdigit = *n%10;
    while(*n>9){
        *n/=10;
        firstdigit = *n;
    }
    cout<<"first digit is:"<<firstdigit<<endl;
    cout<<"last digit is:"<<lastdigit;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    firstandlast(&n);
} 

/*raghav sir way*/

#include<iostream>
using namespace std;
void find(int n,int* ptr1,int* ptr2){
    *ptr2=n%10;
    while(n>9){
        n/=10;
    }
    *ptr2=n;
    return;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int firstdigit,lastdigit; 
    int* ptr1=&firstdigit;
    int* ptr2=&lastdigit;
    find(n,ptr1,ptr2);
    cout<<*ptr1<<" "<<*ptr2<<endl;
    cout<<firstdigit<<" "<<lastdigit;
}
