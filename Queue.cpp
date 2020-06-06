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
  head -> prev = temp;
  if(head == NULL)
    tail = temp;
  head = temp;
}

int Queue::Dequeue()
{
  Node *temp1 = tail;
  int data = tail->data;
  tail = tail -> prev;
  delete temp1;
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
