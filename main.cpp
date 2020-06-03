// This program implements linked list as a class
// multiple functions in separate header file:
// insert, delete, reverse, print

#include <iostream>
#include "LinkedList.h"

LinkedList test = LinkedList();

int main()
{
  test.insert(5,1);
  test.insert(7,2);
  test.insert(9,3);
  test.insert(90,4);
  test.insert(4,2);
  test.print();
  return 0;
}
