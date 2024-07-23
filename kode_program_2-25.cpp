#include <iostream> 
#include <cstring>
using namespace std ;
int main(){
    const char* s1;
    const char* s2;
    //melakukan pengisian nilai yang sama 
    //terhadap variabel s1 dan s2 
    s1="coba";
    s2="coba";

    //menampilkan hasil perbandingan string dari variabel s1 dan s2
    cout<<"hasil perbadingan : " <<strcmp(s1, s2) <<endl;

    //melakukan perubahan nilai terhadap variabel s1
    s1="coba";

    //menampilkan  kembali hasil perbadingan string dari variabel  s1 dan s2
    cout<<"hasil perbadingan : "<<strcmp (s1, s2) <<endl;
    //melakukan perubahan nilai terhadap variabel s2 
    s2 ="coba";

    //melakukan kembali hasil perbandingan string  dari variabel s1 dan s2
    cout<<"hasil perbadingan : " <<strcmp (s1, s2)<<endl;
    return 0;
}