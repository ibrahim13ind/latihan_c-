#include <iostream>
#include <cstring>
using namespace std ;
int main () {
    char* s1;
    char* s2;
    char* spasi;
    //melakukan pengisian nilai terhadap variabel s1 dan s2
    s1 = "teks";
    s2 = "gabungan";
    //menambahkan karakter spasi (' ') kedalam variabel s1
    strcat (s1,spasi );
    //melakukan penggabungan string yang terdapat pada variabel s1dan s2
    strcat(s1,s2);
    //menampilkan nilai dari variabel s1 setelah proses penggabungan
    cout<<s1<<endl;
    return 0;

}