#include<iostream>

struct Node{
 std::string status;
 std::string data;
 float value;
   Node *left;
   Node *right;
};

using pointer=Node*;
using Tree=pointer;
void createRoot(pointer &newNode,float value){

}
void createNode(pointer& newNode, std::string status,std::string data,float value){
   newNode = new Node;
   newNode->status = status;
   newNode->data = data;
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
 int usia;
 void createRoot(pointer &newNode,float value);insertBST(pohon,newNode);
  createNode(newNode,"rendah","120.0/3.0",3); insertBST(pohon,newNode);
  createNode(newNode,"sedang","240.0/10.0",7); insertBST(pohon,newNode);


  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Usia"; std::cin >>usia;