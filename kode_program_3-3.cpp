#include <iostream>
using namespace std;
int main(){
    int c;     //mendeklarasikan variabel c
    //mengisikan nilai ke variabel c dengan nilai 5 
    c = 5;

    //melakukan pre-increment 
    cout<<"nilai  c awal    :"<<c<<endl;
    cout<<"nilai  ++c       :"<<++c<<endl;
    cout<<"nilai  c akhir   :"<<c<<endl;
    cout<<'\n';

    //mengubah nilai yang terdapat dalam variabel c dengan nilai 10 
    c = 10;

    //melakukan post- increment
    cout<< "nilai c awal     :"<<c<<endl;
    cout<< "nilai c++        :"<<c++<<endl;
    cout<< "nilai   c akhir  :"<<c<<endl ;
    return 0;


}