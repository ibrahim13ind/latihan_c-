#include <iostream> 
#include <cmath>
using namespace std;
//mebuat fungsi untuk menghitung M ;pow(m,e) 
int hitung (register int m , register int e) {
    register int temp;
    temp=1;
    for(  ; e ; e--) { 
        temp=temp *m;
    }

}
// funsi utama 
int main () {
    int x ; 
    x=hitung (5,3);  //melakukan perhitungan 5;pow(5,3)  
    cout<<x<<endl;

    return 0;
     

}