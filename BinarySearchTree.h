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
    BstNode* remove(BstNode* root, int data);
    BstNode* findMin(BstNode* root);
    bool search(BstNode *root, int data);
    int min(BstNode* root);
    int max(BstNode* root);
    int height(BstNode* root);
    void BFS(BstNode* root);
    void PreOrder(BstNode* root);
    void InOrder(BstNode* root);
    void PostOrder(BstNode* root);
    bool isBst(BstNode* root);
    bool isBstUtil(BstNode* root, int min, int max);
};

#endif
