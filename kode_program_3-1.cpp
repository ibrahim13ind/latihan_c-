#include <iostream>
using namespace std;

int main(){
    //mendeklarasikan konstanta
    //dengan melakukan assigment dengan nilai 3.14
    const PI = 3.14;
    
    //mendeklarasikan  variabel-variabel 
    char MYChar;       //mendeklarasikan variabel bertipe char
    char* MYString;    //mendeklarasikan variabel bertipe char*
    int MYInteger ;    //mendeklarasikan variabel bertipe int
    double MYDouble;   //mendeklarasikan variabel bertipe double

    //melakukan assigment terhadap variabel-variabel di atas
    MYChar= 'c';
    MYString="mengungkap rahasia c++";
    MYInteger=21;
    MYDouble=21.0378;
    
    //menampilkan nilai dari variabel-variabel diatas
    cout<<"MYChar                     : "<<MYChar<<endl;
    cout<<"MYString                   : "<<MYString<<endl;
    cout<<"MYInteger                  : "<<MYInteger<<endl;
    cout<<"MYDouble                   : "<<MYDouble<<endl;

    return 0;
}