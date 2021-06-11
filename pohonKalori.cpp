#include<iostream>

struct Node{
 std::string status;
 std::string data;
 int value;
 int usia;
 float BB;
   Node *left;
   Node *right;
};

using pointer=Node*;
using Tree=pointer;
void createNodeU(pointer &newNode,int value,int usia){
  newNode = new Node;
  newNode->value = value;
  newNode->usia = usia;
  newNode->left = nullptr;
  newNode->right = nullptr;
}
void createNodeB(pointer &newNode,int value,float BB){
  newNode = new Node;
  newNode->value = value;
    newNode->BB = BB;
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

pointer cekUsia(Tree& root,int batas){
 pointer cek=root;
if(root->usia<=batas){
cek=root->left;
return cek;
}else{
  cek=root->right;
  return cek;
}
}
pointer cekBB(Tree& root,int batas){
  pointer cek=root;
if(root->BB<=batas){
cek=root->left;
return cek;
}else{
  cek=root->right;
  return cek;
}
}

void inOrder(Tree& parent){
    if(parent != nullptr){
        inOrder(parent->left);
        std::cout << parent->value << " ";
        inOrder(parent->right);
    }
}

int main(){
 Tree root=nullptr;
 pointer newNode,cek;
 int usia,batasU1=8;
 float BB,batasB1=28,batasB2=43,batasB3=44,batasU2=7.8;
 
  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Usia :"; std::cin >>usia;
  std::cout << "Berat Badan :"; std::cin >>BB;
 
  createNodeU(newNode, 8,usia);insertBST(root,newNode);
  createNodeB(newNode, 3,BB);insertBST(root,newNode);
  createNodeB(newNode, 10,BB);insertBST(root,newNode);
  createNode(newNode,"rendah","115.0",1); insertBST(root,newNode);
  createNodeU(newNode, 6,usia);insertBST(root,newNode);
  createNode(newNode,"sedang","230.0/3.0",9); insertBST(root,newNode);
   createNodeB(newNode, 13,BB);insertBST(root,newNode);
    createNode(newNode,"rendah","3.0",4); insertBST(root,newNode);
    createNode(newNode,"sedang","2.0",7); insertBST(root,newNode);
  createNode(newNode,"sedang","4.0",12); insertBST(root,newNode);
   createNode(newNode,"tinggi","6.0",14); insertBST(root,newNode);
   inOrder(root);
  /*
cek=cekUsia(root,batasU1);
std::cout<<cek->value<<std::endl;
if (cek=root->left){
cek=cekBB(cek,batasB1);
std::cout<<cek->value<<std::endl;
}
if(cek=root->left->right){
  cek=cekUsia(cek,batasU2);
  std::cout<<cek->value<<std::endl;
}
if(cek=root->right){
  cek=cekBB(cek,batasB2);
  std::cout<<cek->value<<std::endl;
}
if(cek=root->right->right){
  cek=cekBB(cek,batasB3);
  std::cout<<cek->value<<std::endl;
}
/* std::cout<<"status:"<<cek->status<<std::endl;
 std::cout<<"Nilai batas:"<<cek->data<<std::endl;*/
}
 
