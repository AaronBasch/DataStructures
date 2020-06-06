#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

class Queue
{
private:
  Node *head, *tail;
public:
  Queue();
  void Enqueue(int data);
  int Dequeue();
  int Front();
  bool IsEmpty();
};



#endif
