#include <iostream>
#include <cstring> 
using namespace std ;
int main (){ 
    const char* S= " contoh membesarkan huruf";
    char* hasil ;
    //mengubah string dari variabel S menjadi huruf kecil 
    hasil  = strupr(S);
    //menampilkan nilai dari variabel hasil 
    cout<<hasil<<endl;
    return 0;
}