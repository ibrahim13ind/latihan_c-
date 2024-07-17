#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char* s1;
    char* s2;

    //melakukan pengisian nilai terhadap variabel s1
    s1 ="contoh duplikasi string";

    //melakukan duplikasi string dari variabel s1 ke s2 
    s2 = strdup (s1);
    //menampilkan nilai dari variabel s2
    cout<<s2<<endl;
return 0;
}