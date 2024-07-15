#include <iostream>
using namespace std ;
     // membuat fungsi dengan nama contoh
     int contoh(){ 
         static int A =0; //mendeklarasikan 
                         // variabel statis 
       A=A+10;
       return A;                  
     } 
     // fungsi utama
int main(){
    int x,y,z;    //mendelarasikan 
                 //variabel x,y dan z
   x= contoh ();  // memanggil vungsi contoh()                  
                  //untuk yang pertamakali 
   y= contoh ();  // memanggil vungsi contoh()    
                   //untuk yang keduakali
   z= contoh ();       // memanggil vungsi contoh()                      
                   //untuk yang ketiga kali
   // menampilkan nilai yang telah diproses didalam fungsi
   cout<< "nilai fungsi  pada pemanggilan pertama :"<<x<<endl;
   cout<< "nilai fungsi  pada pemanggilan  kerdua :"<<y<<endl;
   cout<< "nilai fungsi  pada pemanggilan  ketiga :"<<z<<endl;
return 0;
}