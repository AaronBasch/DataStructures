#include "LinkedList.h"
#include <iostream>


/*****
member functions
****/

//initialization, create head and tail.
LinkedList::LinkedList()
{
  head = NULL;
  tail = NULL;
}

//return head Node
Node* LinkedList::getHead()
{
  return head;
}

//append data to end of list:
void LinkedList::append(int data)
{
  Node* temp1;
  Node* temp2 = new Node();
  temp2 -> next = NULL;
  temp2 -> data = data;
  temp1 = head;
  if(head == NULL){
    head = temp2;
    return;
  }
  while(temp1 -> next != NULL)
    temp1 = temp1 -> next;
  temp1 -> next = temp2;
}

//insert data at n location:
void LinkedList::insert(int data, int n)
{
  Node* temp1 = new Node();
  temp1 -> data = data;
  temp1 -> next = NULL;
  if(n==1){
    temp1 -> next = head;
    head = temp1;
    return;
  }
  Node* temp2 = head;
  for(int i = 0; i<n-2;i++){
    temp2 = temp2 -> next;
  }
  temp1 -> next = temp2 -> next;
  temp2 -> next = temp1;
}

//delete data at n location
void LinkedList::remove(int n)
{
  Node* temp1 = head;
  if(n == 1){
    head = temp1 -> next;
    delete temp1;
    return;
  }
  for(int i = 1; i < n - 1; i++){
    temp1 = temp1 -> next;
  }
  Node* temp2 = temp1 -> next;
  temp1 -> next = temp2 -> next;
  delete temp2;
}

//reverse list recursively
void LinkedList::revrec(Node* p)
{
  if(p->next == NULL){
    head = p;
    return;
  }
  revrec(p->next);
  Node *q = p -> next;
  q -> next = p;
  p -> next = NULL;
}

//reverse list iterative approach
void LinkedList::reverse()
{
  Node *current, *prev, *next;
  current = head;
  prev = NULL;
  while(current != NULL){
    next = current -> next;
    current -> next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}


//pretty print list
void LinkedList::print(){
  Node* temp = head;
  while(temp != NULL){
    std::cout << temp -> data << " ";
    temp = temp -> next;
  }
  std::cout << std::endl;
}
