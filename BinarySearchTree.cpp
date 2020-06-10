#include "BinarySearchTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree(){
  rootPtr = NULL;
}

BstNode* BinarySearchTree::getRoot(){
  return rootPtr;
}

void BinarySearchTree::setRoot(BstNode* root){
  rootPtr = root;
}

BstNode* BinarySearchTree::newNode(int data)
{
  BstNode *temp1 = new BstNode();
  temp1 -> data = data;
  temp1 -> left = temp1 -> right = NULL;
  return temp1;
}

BstNode* BinarySearchTree::insert(BstNode* root, int data)
{
  if(root == NULL){
    root = newNode(data);
  }
  else if(data <= root -> data){
    root -> left = insert(root->left, data);
  }
  else{
    root -> right = insert(root->right, data);
  }
  return root;
}

bool BinarySearchTree::search(BstNode* root, int data){
  if(root == NULL) return false;
  else if(data == root -> data) return true;
  else if(data <= root -> data) return search(root -> left, data);
  else return search(root -> right, data);
}
