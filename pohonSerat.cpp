#include <iostream>

struct Node{
    int urutan;
    std::string data;
    Node *left;
    Node *right;
};
using pointer=Node*;
using tree=pointer;
tree root;

tree createTree() { 
  return nullptr; 
  }
pointer createElement(std::string data,int urutan) {
 pointer elementBaru=new Node;
 elementBaru=new Node;
 elementBaru->urutan=urutan;
 elementBaru->data=data;
 elementBaru->left=nullptr;
 elementBaru->right=nullptr;
 return elementBaru;
}
void insertTree(tree root,pointer newNode){
  if(root == nullptr){
    root = newNode;
    }else{
  bool isLowerThanRoot = (newNode->urutan < root->urutan);

  if(isLowerThanRoot){
    insertTree(root->left, newNode);}
  else{
    insertTree(root->right, newNode);
}
}
}

void cekUmur(int umur,tree Root){

}