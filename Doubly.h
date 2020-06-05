#ifndef DOUBLY_H
#define DOUBLY_H

struct DNode{
  int data;
  DNode *next;
  DNode *prev;
};

class Doubly
{
  private:
    DNode *head, *tail;
  public:
    Doubly();
    DNode* newNode(int x);
    void insertAtStart(int x);
    void append();
    void insert(int data, int n);
    void remove(int n);
    void print();
};

#endif
