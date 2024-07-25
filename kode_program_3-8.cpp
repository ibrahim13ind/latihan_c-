#include <iostream>
using namespace std;
 int main(){
     //medeklarasikan variabel x ,y dan z bertipe int 
     int x = 10, y = 3;
     int z;

     //mendeklarasikan variabel A, B dan C bertipe float
     float A = 10.0 , B = 3.0;
     float   C;

     //melakukan operasi pembagian pada bilangan bulat
     z = x / y;
     //melakukan operasi pembagian pada bilangan desimal (floating-point)
     C = A / B;
     //menampilkan hasil pembagian 
     cout<<x<<" / "<<y<<" = "<<z<<endl;
     cout<<A<<" / "<<B<<" = "<<C;

     return 0 ;

 }