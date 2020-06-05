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

//pretty print list
void LinkedList::print(){
  Node* temp = head;
  while(temp != NULL){
    std::cout << temp -> data << " ";
    temp = temp -> next;
  }
}
