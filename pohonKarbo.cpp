struct Node{
    Node *left;
    Node *right;
};
using pointer=Node*;
using tree=pointer;
tree Root;

tree createTree() { 
  return nullptr; 
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