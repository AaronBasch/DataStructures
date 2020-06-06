#include "Queue.h"

Queue::Queue()
{
  head = NULL;
  tail = NULL;
}

void Queue::Enqueue(int data)
{
  Node *temp = new Node();
  temp -> data = data;
  temp -> next = head;
  if(head == NULL)
    tail = temp;
  head = temp;
}

int Queue::Dequeue()
{
  Node *temp1 = head;
  int data = tail->data;
  delete tail;
  while(temp1!=NULL){
    temp1 = temp1 -> next;
  }
  tail = temp1;
  return data;
}

int Queue::Front()
{
  return tail -> data;
}

bool Queue::IsEmpty()
{
  return (head==NULL) ? true:false;
}
