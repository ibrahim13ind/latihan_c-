#include <iostream>
#include <cstring> 
using namespace std ;
int main (){ 
    string S ;
    cout<<"masukkan nama anda : ";
    //meminta input dari user menggunakan fungsi getline
    getline (cin, S);
    //menampilkan kembali nama yang telah dimasukkan 
    cout<<"hai "<<S<< " ,apakabarmu?";
    return 0;
}