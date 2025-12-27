/*stack:it is a type of data structure that follows the Last In First Out (LIFO) principle.
* The last element added to the stack is the first one to be removed.
* It is often implemented using arrays or linked lists.
* Common operations include push (to add an element), pop (to remove the top element),and top (to view the
top element without removing it).
* In C++, the Standard Template Library (STL) provides a stack container that can be used to implement this data structure.
* The stack container in STL is defined in the <stack> header file.

why stack:
  this takes O(1) time and space complexity for push and pop operations.
  if we want to access the element at index ti takes O(n) time and space complexity.
  but it provides diciplined access to elements, ensuring that only the top element can be accessed directly.
we have 3 types of operations on stack:
1. push: to add an element to the top of the stack.
2. pop: to remove the top element from the stack.
3. top: to access the top element of the stack without removing it.

if we have creates a stack of integers, named "s", we can perform the following operations in this way:
s.push(10); // adds 10 to the top of the stack
s.push(20); // adds 20 to the top of the stack
s.pop(); // removes the top element (20) from the stack
int topElement = s.top(); // retrieves the top element (10) without removing it 
*/
#include<iostream>
#include<stack>
/*STL of stack:
#include <stack>
push() - Adds an element to the top of the stack.
pop() - Removes the top element from the stack.
top() - Returns a reference to the top element of the stack.
empty() - Checks if the stack is empty.
size() - Returns the number of elements in the stack.
swap() - Swaps the contents of two stacks.
empty() - Returns true if the stack is empty, false otherwise.
*/
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<"top element:"<<s.top()<<endl;// Output: top element: 30
    s.pop(); // removes the top element (30)
    cout<<"top element after pop:"<<s.top()<<endl; // Output: top element after pop: 20
    
    //how to get the elements back after printing or poping them from the stack
    //we can use a temporary stack to store the elements while printing them, which costs O(n) space complexity
    stack<int>temp;
    //printing the elements in the stack
    cout<<"top element:"<<s.top()<<endl; // Output: top element: 50
    cout<<"Elements in the stack are:";
    while(!s.empty()){
        cout<<s.top()<<" ";
        temp.push(s.top());
        s.pop();
    }
    cout<<endl;
    //putting the elements back to the original stack
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    delete &temp; // delete the temporary stack
    //now the original stack is restored
    cout<<"top element after printing:"<<s.top()<<endl; // Output: top element after printing: 50
}