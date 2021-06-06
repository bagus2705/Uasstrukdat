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

void preOrder(Tree& parent){
    if(parent != nullptr){
        std::cout << parent->value << " ";
        preOrder(parent->left);
        preOrder(parent->right);
    }
}

void inOrder(Tree& parent){
    if(parent != nullptr){
        inOrder(parent->left);
        std::cout << parent->value << " ";
        inOrder(parent->right);
    }
}

void postOrder(Tree& parent){
    if(parent != nullptr){
        postOrder(parent->left);
        postOrder(parent->right);
        std::cout << parent->value << " ";
    }
}

int main(){
 Tree pohon=nullptr;
 pointer newNode;
 float BB, TB, BMI;
 
 createNode(newNode,13.44); insertBST(pohon,newNode);
 createNode(newNode,17.941817); insertBST(pohon,newNode);
 createNode(newNode,19.477147); insertBST(pohon,newNode);
 createNode(newNode,19.812365); insertBST(pohon,newNode);
 createNode(newNode,20.702862); insertBST(pohon,newNode);
 
 std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "Tinggi Badan (dalam cm): "; std::cin >> TB;
 BMI = BB / ((TB/100)*(TB/100));
 
 createNode(newNode,BMI); insertBST(pohon,newNode);

 std::cout << "BMI Anda adalah " << BMI << "\n"; 
 
 //postOrder(pohon); std::cout << std::endl << std::endl;
 inOrder(pohon); std::cout << std::endl << std::endl;
 //preOrder(pohon); std::cout << std::endl << std::endl;
}