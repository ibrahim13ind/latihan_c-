#include <iostream> 

using namespace std;
int main(){
    //mendeklarasikan variabel x (diisi nilai 10) dan y (diisi nilai 3 )
    int x =10 ,y = 3 ; 

    int z; //mendeklarasikan variabel z sebagai penampung nilai hasil operasi

    //melakukan operasi pembagian dan menyimpan sisa baginya ke dalam z 
    z = x % y;

    //menampilkan sisa bagi dari operasi pembagian x / y 
    cout<<x<<" % "<<y<<" = "<<z;

    return 0;
}