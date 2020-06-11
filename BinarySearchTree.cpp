#include "BinarySearchTree.h"
#include <queue>
#include <iostream>
using namespace std;

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
    return newNode(data);
  }
  if(data <= root -> data){
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

/*
Breadth First Search:
*/
void BinarySearchTree::BFS(BstNode* root)
{
  if(root == NULL) return;
  queue<BstNode*> Q;
  Q.push(root);
  while(!Q.empty()){
    BstNode* current = Q.front();
    cout << current -> data << ' ';
    if(current -> left != NULL) Q.push(current -> left);
    if(current -> right != NULL) Q.push(current -> right);
    Q.pop();
  }
}

/*
Depth First Search
PreOrder, InOrder, PostOrder
*/
void BinarySearchTree::PreOrder(BstNode* root)
{
  if(root == NULL) return;
  cout << root -> data << ' ';
  PreOrder(root -> left);
  PreOrder(root -> right);
}

void BinarySearchTree::InOrder(BstNode* root)
{
  if(root == NULL) return;
  InOrder(root -> left);
  cout << root -> data << ' ';
  InOrder(root -> right);
}

void BinarySearchTree::PostOrder(BstNode* root)
{
  if(root == NULL) return;
  PostOrder(root -> left);
  PostOrder(root -> right);
  cout << root -> data << ' ';
}

//delete node:
BstNode* BinarySearchTree::remove(BstNode* root, int data)
{
  if(root == NULL) return root;
  else if(data < root->data) root->left = remove(root -> left, data);
  else if(data > root->data) root->right= remove(root ->right, data);
  else
  {
    if(root->left == NULL && root->right == NULL){
      delete root;
      root = NULL;
    }
    else if (root -> left == NULL){
      BstNode* temp = root;
      root = root -> right;
      delete temp;
    }
    else if (root -> right == NULL){
      BstNode* temp = root;
      root = root -> left;
      delete temp;
    }
    else{
      BstNode* temp = findMin(root->right);
      root->data = temp->data;
      root->right = remove(root->right, temp->data);
    }
  }
  return root;
}

//find min helper function for remove()
BstNode* BinarySearchTree::findMin(BstNode* root){
  while(root->left !=NULL) root = root->left;
  return root;
}

//check if binary tree is BST:
bool BinarySearchTree::isBstUtil(BstNode* root, int min, int max)
{
  if(root == NULL) return true;
  if((root -> data <= max) && (root -> data > min)
    && (isBstUtil(root->left, min, root->data))
    && (isBstUtil(root->right, root->data, max)))
      return true;
  else return false;
}

bool BinarySearchTree::isBst(BstNode* root)
{
  return isBstUtil(root, INT_MIN, INT_MAX);
}
