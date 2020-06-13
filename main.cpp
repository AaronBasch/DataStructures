// This program implements various data structure classes
// multiple functions in separate header file:

#include <iostream>
#include <queue>
#include "BinarySearchTree.h"
using namespace std;

BinarySearchTree s;

int main()
{
  s.setRoot(s.insert(s.getRoot(),3));
  s.setRoot(s.insert(s.getRoot(),7));
  s.setRoot(s.insert(s.getRoot(),4));
  s.setRoot(s.insert(s.getRoot(),5));
  s.setRoot(s.insert(s.getRoot(),2));
  s.setRoot(s.insert(s.getRoot(),6));
  s.setRoot(s.insert(s.getRoot(),1));
  cout << s.search(s.getRoot(), 2);
  cout << s.min(s.getRoot());
  cout << s.max(s.getRoot());
  cout << s.height(s.getRoot());
  cout << "\nbreadthfirstsearch: ";
  s.BFS(s.getRoot());
  cout << "\npreorder: ";
  s.PreOrder(s.getRoot());
  cout << "\ninorder: ";
  s.InOrder(s.getRoot());
  cout << "\npostorder: ";
  s.PostOrder(s.getRoot());
  if(s.isBst(s.getRoot())) cout << "is BST";
  else cout << "not BST";
  cout << "\npredecessor of 6 is " << s.getPred(s.getRoot(),6)->data;
  cout << "\npredecessor of 3 is " << s.getPred(s.getRoot(),3)->data;
  cout << "\npredecessor of 5 is " << s.getPred(s.getRoot(),5)->data;
  cout << "\npredecessor of 4 is " << s.getPred(s.getRoot(),4)->data;

}


//g++ -o reverse main.cpp LinkedList.cpp Doubly.cpp Stack.cpp LLStack.cpp
