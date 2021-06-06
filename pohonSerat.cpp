#include<iostream>

struct Node{
 float value;
   Node *left;
   Node *right;
};

using pointer=Node*;
using Tree=pointer;

void createNode(pointer& newNode, float value){
   newNode = new Node;
   newNode->value = value;
   newNode->left = nullptr;
   newNode->right = nullptr;
}

void insertBST(Tree& root, pointer newNode){
   if(root == nullptr){
     root = newNode;
 }
 else{
    bool isLowerThanRoot = (newNode->value < root->value);

    if(isLowerThanRoot){
      insertBST(root->left, newNode);}
    else{
      insertBST(root->right, newNode);}
 }
}

int main(){
 Tree pohon=nullptr;
 pointer newNode;
 float BB, TB, BMI;