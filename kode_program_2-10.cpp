#include <iostream>
using namespace std;
//membuat fungsi denga nama contoh
int contoh() {
    int A=0; //mendeklarasikan variabel biasa 
     A=A+10; 
     return A;
}
int main  (){
    int x,y,z; //  mendeklarasikan variabel x,y 
               //dan z
     x=contoh(); //memanggil  fungsi contoh () 
               //untuk yang pertamakali   
     y=contoh();//memanggil  fungsi contoh ()
               //untuk yang keduakali
     z=contoh();//memanggil  fungsi contoh ()         
                //untuk yang ketiga kali
     //menampilakan nilai yang telah diproses di dalam 
     //fungsi
     cout<<"nilai fungsi pada pemanggilan  pertama  :"<<x<<endl;
    cout<<"nilai fungsi pada pemanggilan   kedua :    "<<y<<endl;
    cout<<"nilai fungsi pada pemanggilan   ketiga :"<<z<<endl;
     return 0;
}