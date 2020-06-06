#ifndef STACK_H
#define STACK_H



class Stack
{
private:
  int A[10];
  int t;
public:
  Stack();
  void push(int x);
  int pop();
  int top();
  bool isEmpty();
};





#endif
