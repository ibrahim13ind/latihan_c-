#include <iostream>
using namespace std;
int main() {
    int x;
    float y;

    x=+5;  //dapat ditulis x=5, 
    //yang berarti memasukkan nilai positif 5
    y = -2.12; //memasukkan nilai yang disimpan dalam variabel x dan y
    cout<<"nilai x  : "<<x<<endl;
    cout<<"nilai y  : "<<y<<endl;

    x=-x;   //mengubah nilai x menjadi negatif
    y=-y;
    //menampilkan kembali nilai yang disimpan dalam variabel x dan y
    cout<<"nilai x:  "<<x<<endl;
    cout<<"nilai y:  "<<y<<endl;

    return 0;
}