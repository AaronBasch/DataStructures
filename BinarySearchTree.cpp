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

int BinarySearchTree::min(BstNode* root)
{
  if(root == NULL){
    std::cout << "tree is empty";
    return -1;
  }
  if(root -> left == NULL) return root -> data;
  else return min(root->left);
}

int BinarySearchTree::max(BstNode* root)
{
  if(root == NULL){
    std::cout << "tree is empty";
    return -1;
  }
  if(root -> right == NULL) return root -> data;
  else return max(root->right);
}

int BinarySearchTree::height(BstNode* root)
{
  if(root == NULL) return -1;
  int lHeight, rHeight;
  lHeight = height(root->left);
  rHeight = height(root->right);
  return std::max(lHeight, rHeight) + 1;
}
