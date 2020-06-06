#ifndef LLSTACK_H
#define LLSTACK_H

struct SNode
{
  int data;
  SNode *next;
};

class LLStack
{
private:
  SNode *top;
public:
  LLStack();
  void Push(int x);
  int Pop();
  int Top();
  bool IsEmpty();
};

#endif
