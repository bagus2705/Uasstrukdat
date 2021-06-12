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

void createRootSerat(pointer &newNode, int usia, int value){
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

void cekSerat(Tree& root, int batas){
  	pointer cek=root;
	
	if(root->usia<batas){
		cek=root->left;
	}
	else{
  		cek=root->right;
	}
	
	std::cout << "Kebutuhan Serat : " << cek->status << std::endl;
	std::cout << "Nilai Batas : " << cek->data << std::endl;
}

int main(){
    int pilihan, usia, BB, TB;
    std::cout << "====================================================\n";
    std::cout << "||        DECISION TREE STATUS BERAT BADAN        ||\n";
	std::cout << "|| DAN KEBUTUHAN ENERGI PADA ANAK USIA 7-12 TAHUN ||\n";
    std::cout << "====================================================\n\n";
    std::cout << "Masukkan Data Diri terlebih dahulu" << std::endl;
	std::cout << "Usia : "; std::cin >> usia;    
	std::cout << "Berat Badan (dalam kg) : "; std::cin >> BB;    
	std::cout << "Tinggi Badan (dalam cm) : "; std::cin >> TB;   
	 
	if(usia < 7 || usia > 12 || BB < 0 || TB < 0){
		std::cout << "Data Anda tidak memenuhi kriteria!";
		return 0;
	}
	else{
	std::cout << "\nMenu\n";
    std::cout << "1. Tree BMI\n";
    std::cout << "2. Tree Kalori\n";
    std::cout << "3. Tree Karbohidrat\n";
    std::cout << "4. Tree Lemak\n";
    std::cout << "5. Tree Protein\n";
    std::cout << "6. Tree Serat\n";
    std::cout << "0. Keluar\n\n";
    
 	do{
		std::cout << "\nMasukkan Pilihan : ";
		std::cin >> pilihan;
	
	    switch(pilihan){
	        case(1):{

	        	break;
			}
	        case(2):{
	      
	 		
	        	break;
			}
	        case(3):{
	        
	        	break;
			}
	        case(4):{
	        
	 	
	        	break;
			}
	        case(5):{
	        
	 		
	        	break;
			}
	        case(6):{
				 	Tree root=nullptr;
				 	pointer newNode;
				 	int batas=8;
				
				 	
				  	createRootSerat(newNode,usia,2); insertBST(root,newNode);
				  	createNode(newNode,"Rendah","120.0/3.0",1); insertBST(root,newNode);
				  	createNode(newNode,"Sedang","240.0/10.0",3); insertBST(root,newNode);
				 	cekSerat(root,batas);
	 	
	        	break;
			}
			case(0):{
				std::cout << "Terima Kasih";	        
	        	return 0;
			}
	        default:{
	        	std::cout << "Perintah yang dipilih salah\n";
	        }
		} 
	} while(pilihan =! 0);
	
	}
	return 0;

}
