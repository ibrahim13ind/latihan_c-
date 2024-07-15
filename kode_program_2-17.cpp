#include <iostream>    
using namespace std;                                                                                                    
enum jenis_kelamin{pria,wanita};
int main(){
    struct siswa{
        char NIS[9];
        char NAMA[20];
         jenis_kelamin gender;       

    } A;
    A.NIS = "DOD98021";
    A.NAMA = "ARISTA";
    A.gender = wanita;                                                                                                                                                                                                                                                                           
cout<<"NIS:"<<A.NIS<<endl;
cout<<"NIS:"<<A.NAMA<<endl;
cout<<"gender:"<<A.gender<<endl;
return 0;
}