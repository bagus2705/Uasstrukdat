#include <iostream>
/*
Johanes Bagus Prasetyo - 140810200043
Abraham Javier Sebastian - 140810200067
*/

struct Node{
    int urutan;
 float value;
   Node *left;
   Node *right;
};
struct Nodes{
    std::string status;
    int urutan;
 std::string values;
   Node *left;
   Node *right;
};

using pointer=Node*;
using Tree=pointer;

using pointer1=Nodes*;
using Tree1=pointer1;

void createNode(pointer& newNode, float value){
   newNode = new Node;
   newNode->value = value;
   newNode->left = nullptr;
   newNode->right = nullptr;
}

void createNodeS(pointer1& newNode1,std::string status,std::string value,int urutan){
   newNode1 = new Nodes;
   newNode1->values = value;
   newNode1->status = status;
   newNode1->urutan = urutan;
   newNode1->left = nullptr;
   newNode1->right = nullptr;
}

void insertTree(Tree& root, pointer newNode){
   if(root == nullptr){
     root = newNode;
 }
 else{
    bool isLowerThanRoot = (newNode->urutan < root->urutan);

    if(isLowerThanRoot){
      insertTree(root->left, newNode);}
    else{
      insertTree(root->right, newNode);}
 }
}


int main(){
    int pilihan,exit=0;
    std::cout<<"Decision Tree Status Berat Badan dan Kebutuhan Energi Pada Anak Usia 7-12 Tahun";
    std::cout<<"Menu";
    std::cout<<"1.Tree BMI";
    std::cout<<"2.Tree Kalori";
    std::cout<<"3.Tree Karbohidrat";
    std::cout<<"4.Tree Lemak";
    std::cout<<"5.Tree Protein";
    std::cout<<"6.Tree Serat";
    std::cout<<"Masukkan Pilihan";
    std::cin>>pilihan;
    switch(pilihan){
        case(1):{
         Tree pohon=nullptr;
 pointer newNode;
 float BB, TB, BMI;
 
 createNode(newNode,13.44); insertTree(pohon,newNode);
 createNode(newNode,17.941817); insertTree(pohon,newNode);
 createNode(newNode,19.477147); insertTree(pohon,newNode);
 createNode(newNode,19.812365); insertTree(pohon,newNode);
 createNode(newNode,20.702862); insertTree(pohon,newNode);
 
 std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "Tinggi Badan (dalam cm): "; std::cin >> TB;
 BMI = BB / ((TB/100)*(TB/100));
 
 createNode(newNode,BMI); insertTree(pohon,newNode);
        
 exit=1;
        break;
        }
        case(2):{
        Tree pohon=nullptr;
 pointer newNode;
 float BB;
 int usia;
 
 createNode(newNode,115.0); insertTree(pohon,newNode);
 createNode(newNode,3.0); insertTree(pohon,newNode);
 createNode(newNode,2.0); insertTree(pohon,newNode);
 createNode(newNode,230.0/3.0); insertTree(pohon,newNode);
 createNode(newNode,4.0); insertTree(pohon,newNode);
 createNode(newNode,6.0); insertTree(pohon,newNode);
  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "Usia "; std::cin >> usia;
 createNode(newNode,usia); insertTree(pohon,newNode);
 exit=1;
        break;
        }
        case(3):
        {
        Tree pohon=nullptr;
 pointer newNode;
 float BB;
 int usia;
 
 createNode(newNode,115.0); insertTree(pohon,newNode);
 createNode(newNode,3.0); insertTree(pohon,newNode);
 createNode(newNode,2.0); insertTree(pohon,newNode);
 createNode(newNode,230.0/3.0); insertTree(pohon,newNode);
 createNode(newNode,4.0); insertTree(pohon,newNode);
 createNode(newNode,6.0); insertTree(pohon,newNode);
  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "usia: "; std::cin >> usia;
 createNode(newNode,usia); insertTree(pohon,newNode);
 exit=1;
        break;
        }
        case(4):{
        Tree pohon=nullptr;
         pointer newNode;
         float BB;
         int usia;
 createNode(newNode,115.0); insertTree(pohon,newNode);
 createNode(newNode,3.0); insertTree(pohon,newNode);
 createNode(newNode,2.0); insertTree(pohon,newNode);
 createNode(newNode,230.0/3.0); insertTree(pohon,newNode);
 createNode(newNode,4.0); insertTree(pohon,newNode);
 createNode(newNode,6.0); insertTree(pohon,newNode);
  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "usia: "; std::cin >> usia;
 exit=1;
        break;
        }
        case(5):
        {
        Tree pohon=nullptr;
 pointer newNode;
 int usia;
 float BB;
createNode(newNode,115.0); insertTree(pohon,newNode);
 createNode(newNode,3.0); insertTree(pohon,newNode);
 createNode(newNode,2.0); insertTree(pohon,newNode);
 createNode(newNode,230.0/3.0); insertTree(pohon,newNode);
createNode(newNode,4.0); insertTree(pohon,newNode);
createNode(newNode,6.0); insertTree(pohon,newNode);
  std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Berat Badan (dalam kg): "; std::cin >> BB;
 std::cout << "Usia "; std::cin >> usia;
 exit=1;
        break;
        }
        case(6):
        {
 Tree pohon=nullptr;
 pointer1 newNodes;
 pointer newNode;
 int usia;
  createNodeS(newNodes,"usia","8.0",5); insertTree(pohon,newNode);
  createNodeS(newNodes,"rendah","120.0/3.0",3); insertTree(pohon,newNode);
  createNodeS(newNodes,"sedang","240.0/10.0",7); insertTree(pohon,newNode);


 std::cout << "Masukkan Data Diri Anda" << std::endl;
 std::cout << "Usia"; std::cin >>usia;
 exit=1;
        break;
        }
        default:{
        std::cout<<"Perintah yang dipilih salah";
        break;
        }
    }while(exit!=1);
}