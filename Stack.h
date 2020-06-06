#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 101



class Stack
{
private:
  int A[MAX_SIZE];
  int top;
public:
  Stack();
  void Push(int x);
  int Pop();
  int Top();
  bool IsEmpty();
};





#endif
