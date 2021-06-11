#include<iostream>

struct Node{
 std::string status;
 std::string data;
 int value;
 int usia;
   Node *left;
   Node *right;
};

using pointer=Node*;
using Tree=pointer;
void createRootU(pointer &newNode,int value,int usia){
  newNode = new Node;
  newNode->value = value;
  newNode->usia = usia;
  newNode->left = nullptr;
  newNode->right = nullptr;
}
void createNode(pointer& newNode, std::string status,std::string data,int value){
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

void cekUsia(Tree& root,int batas){
  pointer cek=root;
if(root->usia<batas){
cek=root->left;
}else{
  cek=root->right;
}
std::cout<<"Status:"<<cek->status<<std::endl;
std::cout<<"Nilai Batas: "<<cek->data<<std::endl;
}
int main(){
 Tree root=nullptr;
 pointer newNode;
 int usia,batas=8;


  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Usia :"; std::cin >>usia;
  createRootU(newNode,2,usia);insertBST(root,newNode);
  createNode(newNode,"rendah","120.0/3.0",1); insertBST(root,newNode);
  createNode(newNode,"sedang","240.0/10.0",3); insertBST(root,newNode);
 cekUsia(root,batas);

}