// This program implements linked list as a class
// multiple functions in separate header file:
// insert, delete, reverse, print

#include <iostream>
#include "LinkedList.h"
#include "Doubly.h"
#include "Stack.h"
using namespace std;

LinkedList singly = LinkedList();
Doubly dub = Doubly();
Stack stack = Stack();

int main()
{
  stack.push(5);
  stack.push(534);
  stack.push(55);
  cout << stack.pop() << endl;
  cout << stack.pop() << endl;
  cout << stack.top() << endl;
  cout << stack.isEmpty() << endl;
  stack.push(34);
  cout << stack.pop() << endl;
  cout << stack.pop() << endl;
  cout << stack.isEmpty() << endl;

  return 0;
}
