#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node{
  int data;
  Node *next;
};

class LinkedList
{
  private:
    Node *head, *tail;
  public:
    LinkedList();
    void append(int n);
    void insert(int data, int n);
    void remove(int n);
    void reverse();
    void print();
};

#endif