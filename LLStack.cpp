#include "LLStack.h"
#include <iostream>

LLStack::LLStack()
{
  top = NULL;
}

void LLStack::Push(int data)
{
  SNode *temp = new SNode();
  temp -> data = data;
  temp -> next = top;
  top = temp;
}

int LLStack::Pop()
{
  if(top == NULL){
    std::cout << "stack is empty";
    return 0;
  }
  int data = top -> data;
  SNode *temp = top;
  top = top -> next;
  delete temp;
  return data;
}

int LLStack::Top()
{
  if(top == NULL){
    std::cout << "stack is empty";
    return 0;
  }
  return top -> data;
}

bool LLStack::IsEmpty()
{
  if(top == NULL)
    return true;
  return false;
}
