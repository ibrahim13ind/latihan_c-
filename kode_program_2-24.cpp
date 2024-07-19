#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const char* s1;
    const char* s2;
    int panjang_s1, panjang_s2;
    //melakaukan pengisian nilai terhadap variabels1 dan s2
    s1="saya ke bali";
    s2="raharjo";
    panjang_s1=strlen(s1);
    panjang_s2=strlen(s2);

    //menampilkan nilai dari variabel panjang_s1 dan panjang_s2
    cout<<"panjang s1 :"<<panjang_s1<<endl;
    cout<<"panjang s2 :"<<panjang_s2<<endl;
    return 0;
} 