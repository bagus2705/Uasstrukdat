#include<iostream>

struct Node{
 std::string status;
 std::string data;
 float bmi;
 int value;
   Node *left;
   Node *right;
};

using pointer=Node*;
using Tree=pointer;
void createBMI(pointer &newNode,float bmi,int value){
  newNode = new Node;
  newNode->value = value;
    newNode->bmi = bmi;
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

pointer cekBMI(Tree& root,int batas){
  pointer cek=root;
if(root->bmi<=batas){
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
 float BB, TB, BMI,Batas1=13.44,Batas2=17.941817,Batas3=19.477147,
 Batas4=19.812365,Batas5=20.702862;

std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "Tinggi Badan (dalam cm): "; std::cin >> TB;
 BMI = BB / ((TB/100)*(TB/100));
 std::cout << "BMI Anda adalah " << BMI << "\n";

  createBMI(newNode,BMI ,10);insertBST(root,newNode);
  createNode(newNode,"kekurangan BB","46.0",9); insertBST(root,newNode);
  createBMI(newNode,BMI ,12);insertBST(root,newNode);
    createNode(newNode,"normal","220.0/5.0",11); insertBST(root,newNode);
     createBMI(newNode,BMI ,14);insertBST(root,newNode);
  createNode(newNode,"normal","67.0/12.0",13); insertBST(root,newNode);
   createBMI(newNode,BMI ,16);insertBST(root,newNode);
  createNode(newNode,"kelebihan BB","5.0",15); insertBST(root,newNode);
   createBMI(newNode,BMI ,18);insertBST(root,newNode);
    createNode(newNode,"normal","19.0/7.0",17); insertBST(root,newNode);
  createNode(newNode,"kelebihan BB","3.0",19); insertBST(root,newNode);
  inOrder(root);
/*
cek=cekBMI(root,Batas1);
std::cout<<cek->value<<std::endl;
if (cek==root->right){
  cek=cekBMI(cek,Batas2);
  std::cout<<cek->value<<std::endl;
}
if (cek==root->right->right){
  cek=cekBMI(cek,Batas3);
  std::cout<<cek->value<<std::endl;
}
if (cek==root->right->right->right){
  cek=cekBMI(cek,Batas4);
  std::cout<<cek->value<<std::endl;
}
if (cek==root->right->right->right->right){
  cek=cekBMI(cek,Batas5);
  std::cout<<cek->value<<std::endl;
}
/*std::cout<<"status:"<<cek->status<<std::endl;
std::cout<<"Nilai Batas:"<<cek->data;*/
}