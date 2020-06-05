#include "Doubly.h"
#include <iostream>

/*****
member functions
****/

//initialization, create head and tail.
Doubly::Doubly()
{
  head = NULL;
  tail = NULL;
}

//new node with data x
DNode* Doubly::newNode(int x)
{
  DNode *newNode = new DNode;
  newNode -> data = x;
  newNode -> prev = NULL;
  newNode -> next = NULL;
  return newNode;
}

//insert at head
void Doubly::insertAtStart(int x)
{
  DNode *temp = newNode(x);
  if(head == NULL){
    head = temp;
    return;
  }
  head -> prev = temp;
  temp -> next = head;
  head = temp;
}

//pretty print
void Doubly::print()
{
  DNode *temp = head;
  while(temp != NULL){
    std::cout << temp -> data << " ";
    temp = temp -> next;
  }
  std::cout << "\n";
}
