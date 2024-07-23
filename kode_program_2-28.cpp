#include <iostream> 
#include <cstring>
using namespace std;
int main (){
    const char* S="pencipta c++ adalah Bjarne Stroustrup";
     char* pstr;
    //melakukan pencarian substring " bjarne" didalam variabel S 
    pstr =strstr (S, 'Bjarne') ;
     //menampilkan nilai dari variabel pstr
     cout<< pstr <<endl;
     return 0;
}