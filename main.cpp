// This program implements various data structure classes
// multiple functions in separate header file:

#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

BinarySearchTree s;

int main()
{
  s.setRoot(s.insert(s.getRoot(),5));
  s.setRoot(s.insert(s.getRoot(),7));
  s.setRoot(s.insert(s.getRoot(),4));
  s.setRoot(s.insert(s.getRoot(),7));
  s.setRoot(s.insert(s.getRoot(),9));
  s.setRoot(s.insert(s.getRoot(),24));
  s.setRoot(s.insert(s.getRoot(),2));
  cout << s.search(s.getRoot(), 2);
}


//g++ -o reverse main.cpp LinkedList.cpp Doubly.cpp Stack.cpp LLStack.cpp
