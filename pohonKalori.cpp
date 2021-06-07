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
 float BB;
 int usia;
 
 createNode(newNode,115.0); insertBST(pohon,newNode);
 createNode(newNode,3.0); insertBST(pohon,newNode);
 createNode(newNode,2.0); insertBST(pohon,newNode);
 createNode(newNode,230.0/3.0); insertBST(pohon,newNode);
 createNode(newNode,4.0); insertBST(pohon,newNode);
 createNode(newNode,6.0); insertBST(pohon,newNode);
  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "Usia "; std::cin >> usia;

 
 createNode(newNode,usia); insertBST(pohon,newNode);
}