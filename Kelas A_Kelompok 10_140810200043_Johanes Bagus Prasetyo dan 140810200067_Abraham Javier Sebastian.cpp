#include<iostream>

struct NodeBMI{
	std::string status;
 	std::string data;
 	float bmi;
 	int value;
  	NodeBMI *left;
   	NodeBMI *right;
};

using pointerBMI=NodeBMI*;
using TreeBMI=pointerBMI;

struct NodeSerat{
 	std::string status;
 	std::string data;
 	int value;
 	int usia;
   	NodeSerat *left;
   	NodeSerat *right;
};

using pointerSerat=NodeSerat*;
using TreeSerat=pointerSerat;

struct NodeKalori{
 	std::string status;
 	std::string data;
 	int value;
 	int usia;
 	float BB;
   	NodeKalori *left;
   	NodeKalori *right;
};

using pointerKalori=NodeKalori*;
using TreeKalori=pointerKalori;

void createNodeUKalori(pointerKalori &newNode,int value,int usia){
  	newNode = new NodeKalori;
  	newNode->value = value;
  	newNode->usia = usia;
  	newNode->left = nullptr;
  	newNode->right = nullptr;
}

void createNodeBKalori(pointerKalori &newNode,int value,float BB){
  	newNode = new NodeKalori;
  	newNode->value = value;
    newNode->BB = BB;
  	newNode->left = nullptr;
  	newNode->right = nullptr;
}
void createNodeKalori(pointerKalori& newNode, std::string status,std::string data,int value){
   	newNode = new NodeKalori;
   	newNode->status = status;
   	newNode->data = data;
   	newNode->value = value;
   	newNode->left = nullptr;
   	newNode->right = nullptr;
}

void insertBSTKalori(TreeKalori& root, pointerKalori newNode){
   	if(root == nullptr){
     	root = newNode;
 	}
 	else{
    	bool isLowerThanRoot = (newNode->value < root->value);

	    if(isLowerThanRoot){
	      	insertBSTKalori(root->left, newNode);}
	    else{
	      	insertBSTKalori(root->right, newNode);}
	}
}

pointerKalori cekUsiaKalori(TreeKalori& root,int batas){
 	pointerKalori cek=root;
	
	if(root->usia<=batas){
		cek=root->left;
		return cek;}
	else{
  		cek=root->right;
  		return cek;
	}
}

pointerKalori cekBBKalori(TreeKalori& root,int batas){
  	pointerKalori cek=root;
	
	if(root->BB<=batas){
		cek=root->left;
		return cek;}
	else{
  		cek=root->right;
  		return cek;
	}
}

void createRootBMI(pointerBMI &newNode,float bmi,int value){
  	newNode = new NodeBMI;
  	newNode->value = value;
    newNode->bmi = bmi;
  	newNode->left = nullptr;
  	newNode->right = nullptr;
}

void createNodeBMI(pointerBMI& newNode, std::string status,std::string data,int value){
   	newNode = new NodeBMI;
   	newNode->status = status;
   	newNode->data = data;
   	newNode->value = value;
   	newNode->left = nullptr;
   	newNode->right = nullptr;
}

void insertBSTBMI(TreeBMI& root, pointerBMI newNode){
   	if(root == nullptr){
     	root = newNode;}
 	else{
    	bool isLowerThanRoot = (newNode->value < root->value);

	    if(isLowerThanRoot){
	      	insertBSTBMI(root->left, newNode);}
	    else{
	      	insertBSTBMI(root->right, newNode);}
 	}
}

pointerBMI cekBMI(TreeBMI& root,float batas){
  	pointerBMI cek=root;
	
	if(root->bmi<=batas){
		cek=root->left;
		return cek;}
	else{
  		cek=root->right;
  		return cek;
	}
}

void createRootUSerat(pointerSerat &newNode,int value,int usia){
  	newNode = new NodeSerat;
 	newNode->value = value;
  	newNode->usia = usia;
  	newNode->left = nullptr;
  	newNode->right = nullptr;
}

void createNodeSerat(pointerSerat& newNode, std::string status,std::string data,int value){
   	newNode = new NodeSerat;
   	newNode->status = status;
   	newNode->data = data;
   	newNode->value = value;
   	newNode->left = nullptr;
   	newNode->right = nullptr;
}

void insertBSTSerat(TreeSerat& root, pointerSerat newNode){
   	if(root == nullptr){
     	root = newNode;
 	}
 	else{
    	bool isLowerThanRoot = (newNode->value < root->value);

	    if(isLowerThanRoot){
	      insertBSTSerat(root->left, newNode);}
	    else{
	      insertBSTSerat(root->right, newNode);}
	}
}

void cekUsiaSerat(TreeSerat& root,int batas){
  	pointerSerat cek=root;
	
	if(root->usia<batas){
		cek=root->left;}
	else{
  		cek=root->right;
	}
	
	std::cout << "Kebutuhan serat harian : " << cek->status << std::endl;
	std::cout << "Nilai Batas : " << cek->data << std::endl;
}

int main(){
	TreeSerat rootSerat=nullptr; pointerSerat newNodeS;
	TreeBMI rootBMI=nullptr; pointerBMI newNodeB,checkBMI;
	TreeKalori rootKalori=nullptr; pointerKalori newNodeK,checkKalori;
    int pilihan,BatasSerat=8,BatasKaloriU1=8,exit=0,exitB=0,exitK=0;
	float usia, BB, TB,BMI,BatasBMI1=13.44,BatasBMI2=17.941817,BatasBMI3=19.477147,
 	BatasBMI4 = 19.812365,BatasBMI5=20.702862,
 	BatasKaloriB1=28,BatasKaloriB2=43,BatasKaloriB3=44,BatasKaloriU2=7.8;
 	
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
	        case 1:{
				exitB=0;
				BMI = BB / ((TB/100)*(TB/100));
 				std::cout << "BMI Anda adalah " << BMI << "\n";

  				createRootBMI(newNodeB,BMI ,10);insertBSTBMI(rootBMI,newNodeB);
  				createNodeBMI(newNodeB,"Kekurangan Berat Badan","46.0",9); insertBSTBMI(rootBMI,newNodeB);
  				createRootBMI(newNodeB,BMI ,12);insertBSTBMI(rootBMI,newNodeB);
 				createNodeBMI(newNodeB,"Normal","220.0/5.0",11); insertBSTBMI(rootBMI,newNodeB);
     			createRootBMI(newNodeB,BMI ,14);insertBSTBMI(rootBMI,newNodeB);
  				createNodeBMI(newNodeB,"Normal","67.0/12.0",13); insertBSTBMI(rootBMI,newNodeB);
   				createRootBMI(newNodeB,BMI ,16);insertBSTBMI(rootBMI,newNodeB);
  				createNodeBMI(newNodeB,"Kelebihan Berat Badan","5.0",15); insertBSTBMI(rootBMI,newNodeB);
   				createRootBMI(newNodeB,BMI ,18);insertBSTBMI(rootBMI,newNodeB);
    			createNodeBMI(newNodeB,"Normal","19.0/7.0",17); insertBSTBMI(rootBMI,newNodeB);
  				createNodeBMI(newNodeB,"Kelebihan Berat Badan","3.0",19); insertBSTBMI(rootBMI,newNodeB);

				
				std::cout << std::endl;
				checkBMI = cekBMI(rootBMI,BatasBMI1);
do{
  switch(checkBMI->value){
    case 12:{
  	checkBMI=cekBMI(checkBMI,BatasBMI2);
  break;}
case 14:{
 checkBMI=cekBMI(checkBMI,BatasBMI3);
  break;}
case 16:{
checkBMI=cekBMI(checkBMI,BatasBMI4);
  break;}
case 18:{
  checkBMI=cekBMI(checkBMI,BatasBMI5);
  break;}
case 9:case 11:case 13:case 15:case 17:case 19:{
std::cout<<"Status : "<<checkBMI->status<<std::endl;
				std::cout<<"Nilai Batas : "<<checkBMI->data;
exitB=1;
break;
}
}
}while(exitB!=1);
	        	break;
			}
	        case 2:
			case 3: 
			case 4: 
			case 5:{ 
				exitK=0;
	         	createNodeUKalori(newNodeK, 8,usia); insertBSTKalori(rootKalori,newNodeK);
  				createNodeBKalori(newNodeK, 3,BB); insertBSTKalori(rootKalori,newNodeK);
  				createNodeBKalori(newNodeK, 10,BB); insertBSTKalori(rootKalori,newNodeK);
  				createNodeKalori(newNodeK,"rendah","115.0",1); insertBSTKalori(rootKalori,newNodeK);
  				createNodeUKalori(newNodeK, 6,usia); insertBSTKalori(rootKalori,newNodeK);
  				createNodeKalori(newNodeK,"sedang","230.0/3.0",9); insertBSTKalori(rootKalori,newNodeK);
   				createNodeBKalori(newNodeK, 13,BB); insertBSTKalori(rootKalori,newNodeK);
    			createNodeKalori(newNodeK,"rendah","3.0",4); insertBSTKalori(rootKalori,newNodeK);
    			createNodeKalori(newNodeK,"sedang","2.0",7); insertBSTKalori(rootKalori,newNodeK);
  				createNodeKalori(newNodeK,"sedang","4.0",12); insertBSTKalori(rootKalori,newNodeK);
   				createNodeKalori(newNodeK,"tinggi","6.0",14); insertBSTKalori(rootKalori,newNodeK);
				   checkKalori=cekUsiaKalori(rootKalori,BatasKaloriU1);
   do{
switch(checkKalori->value){
  case 1:
  case 4:
  case 7:
  case 9:
  case 12:
  case 14:{
          exitK=1;
    break;
  }
case(3):{
 checkKalori=cekBBKalori(checkKalori,BatasKaloriB1);
break;
}
case(10):{
 checkKalori=cekBBKalori(checkKalori,BatasKaloriB2);
 break;
}
case(6):{
checkKalori=cekUsiaKalori(checkKalori,BatasKaloriU2);
break;
}
case(13):{
  	checkKalori=cekBBKalori(checkKalori,BatasKaloriB3);
break;
}
  }
}while (exitK!=1);
if(pilihan = 2){
					std::cout << "Kebutuhan  harian : " << checkKalori->status << std::endl;
					std::cout << "Nilai batas : " << checkKalori->data << std::endl;
				}
				else if(pilihan == 3){
					std::cout << "Kebutuhan  harian : " << checkKalori->status << std::endl;
					std::cout << "Nilai batas : " << checkKalori->data << std::endl;
				}
				else if(pilihan == 4){
					std::cout << "Kebutuhan  harian : " << checkKalori->status << std::endl;
					std::cout << "Nilai batas : " << checkKalori->data << std::endl;
				}
				else if(pilihan == 5){
					std::cout << "Kebutuhan  harian : " << checkKalori->status << std::endl;
					std::cout << "Nilai batas : " << checkKalori->data << std::endl;
				}
	        	break;
			}
	        case(6):{
				 	createRootUSerat(newNodeS,2,usia);insertBSTSerat(rootSerat,newNodeS);
  					createNodeSerat(newNodeS,"rendah","120.0/3.0",1); insertBSTSerat(rootSerat,newNodeS);
  					createNodeSerat(newNodeS,"sedang","240.0/10.0",3); insertBSTSerat(rootSerat,newNodeS);
 					cekUsiaSerat(rootSerat,BatasSerat);
	 	
	        		break;
			}
			case(0):{
				std::cout << "Terima Kasih";	        
	        	exit=1;
				break;
			}
	        default:{
	        	std::cout << "Perintah yang dipilih salah\n";
				break;
	        }
		} 
	}while(exit !=1);
	}
	return 0;

}
