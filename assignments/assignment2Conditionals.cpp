#include <iostream>
using namespace std;
int main()
{
//1st question

int x;
cout << "Enter first number\n";
cin >> x; 
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; 
int Z = (x * y) % m;
cout << "Output is: " << Z;

//2nd question

int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);

//3rd question

int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;

/*WAP for finding the volume of the cylinder by taking  ---->4th question
radius and height as input.*/ 

int radius ,height;
float volume,pi;
cout<<"enter radius: ";
cin>>radius;
cout<<"enter height: ";
cin>>height;
pi = 3.1413;
volume=pi*radius*radius*height;
cout<<"volume of the cylinder is:"<<volume;

/*WAP to find the difference between ASCII of two characters  ---->5th question
 ,take them as input .*/

char a,b;
cout<<"enter a: ";
cin>>a;
cout<<"enter b: ";
cin>>b;
int x = (int)a;
int y = (int)b;
cout<<x-y;

// 6th question

int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;  
cout<<i;

    return 0;

}