#include<iostream>
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
       
 exit=1;
        break;
        }
        case(2):{
     
 exit=1;
 
        break;
        }
        case(3):
        {

 exit=1;
        break;
        }
        case(4):{
       
 exit=1;
        break;
        }
        case(5):
        {
       
 exit=1;
        break;
        }
        case(6):
        {
 
 exit=1;
        break;
        }
        default:{
        std::cout<<"Perintah yang dipilih salah";
        break;
        }
    }while(exit!=1);
}