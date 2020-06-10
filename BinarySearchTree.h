#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

struct BstNode
{
  int data;
  BstNode *left;
  BstNode *right;
};

class BinarySearchTree
{
  private:
    BstNode* rootPtr;
  public:
    BinarySearchTree();
    BstNode* newNode(int data);
    BstNode* getRoot();
    void setRoot(BstNode* root);
    BstNode* insert(BstNode *root, int data);
    void remove(int data);
    bool search(BstNode *root, int data);
};

#endif
