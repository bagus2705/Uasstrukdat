struct Node{
    int data;
    Node *left;
    Node *right;
};
using pointer=Node*;
using tree=pointer;
tree Root;

tree createTree() { 
  return nullptr; 
  }
pointer createElement(int data) {
 pointer elementBaru=new Node;
 elementBaru=new Node;
 elementBaru->data=data;
 elementBaru->left=nullptr;
 elementBaru->right=nullptr;
 return elementBaru;
}
void insertTree(pointer newElement,tree Root){

}

void cekUmur(int umur,tree Root){

}