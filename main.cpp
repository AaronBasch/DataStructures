// This program implements various data structure classes
// multiple functions in separate header file:

#include <iostream>
#include "LinkedList.h"
#include "Doubly.h"
#include "Stack.h"
#include "LLStack.h"
using namespace std;

LLStack stack;

int main()
{
  cout << stack.IsEmpty() << endl;
  stack.Push(5);
  stack.Push(534);
  stack.Push(55);
  cout << stack.IsEmpty() << endl;
  cout << stack.Pop() << endl;
  cout << stack.Pop() << endl;
  cout << stack.Top() << endl;
  cout << stack.IsEmpty() << endl;
  stack.Push(34);
  cout << stack.Pop() << endl;
  cout << stack.Pop() << endl;
  cout << stack.IsEmpty() << endl;

  return 0;
}
