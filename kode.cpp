#include <iostream>
#include <cstring> 
using namespace std ;
int main
    char* S ="c++ adalah segalanya bagiku";
    char* PStr ; 

    //menampilakan pencarian karakter '+' didalam variabel s
    PStr =strchr (s, '+') ;
    //menampilkan nilai dari variabel PStr 
    cout<<PStr<<endl;
    return 0;
}