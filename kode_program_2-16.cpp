#include <iostream>
using namespace std;
int main(){
    struct siswa {
        char NIS[8] ;
        char nama[25];
        char alamat[20];
        char kota[15] ;

    };
    SISWA A;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              // mendeklarasikan variabel A yang 
                  //bertipe SISWA
    
    
    A.NIS="D0D98021";
    A.NAMA="ARISTA";
    A.ALAMAT="KOPO";
    A.KOTA="BANDUNG";
    //menampilkan nilai yang diisikan ke layar
    cout<<A.NIS<<endl;
    cout<<A.NAMA<<endl;
    cout<<A.ALAMAT<<endl;
    cout<<A.KOTA<<endl;
return 0;
}