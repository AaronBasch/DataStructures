#include "Stack.h"
#include <iostream>

Stack::Stack()
{
  t = -1;
}

//push int to top of stack, increase top.
void Stack::push(int x)
{
  A[++t] = x;
}

int Stack::pop()
{
  return A[t--];
}

int Stack::top()
{
  return A[t];
}

bool Stack::isEmpty(){
  return t+1;
}
