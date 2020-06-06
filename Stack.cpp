#include "Stack.h"
#include <iostream>

Stack::Stack()
{
  top = -1;
}

//push int to top of stack, increase top.
void Stack::Push(int x)
{
  if(top == MAX_SIZE -1){
    std::cout << "Error: stack overflow";
    return;
  }
  A[++top] = x;
}

int Stack::Pop()
{
  if(IsEmpty()){
    std::cout << "stack is empty\n";
    return 0;
  }
  return A[top--];
}

int Stack::Top()
{
  return A[top];
}

bool Stack::IsEmpty(){
  if(top == -1)
    return true;
  return false;
}
