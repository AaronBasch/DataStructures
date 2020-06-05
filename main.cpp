// This program implements linked list as a class
// multiple functions in separate header file:
// insert, delete, reverse, print

#include <iostream>
#include "LinkedList.h"
#include "Doubly.h"

LinkedList test = LinkedList();
Doubly test2 = Doubly();

int main()
{
  test.append(100);
  test.insert(5,2);
  test.insert(7,2);
  test.insert(9,3);
  test.insert(90,4);
  test.insert(4,2);
  test.append(100);
  test.print();
  test.reverse();
  test.print();
  test.revrec(test.getHead());
  test.print();
  test2.insertAtStart(5);
  test2.insertAtStart(54);
  test2.insertAtStart(556);
  test2.insertAtStart(2);
  test2.insertAtStart(35);
  test2.print();

  return 0;
}
