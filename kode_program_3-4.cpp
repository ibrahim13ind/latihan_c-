#include <iostream> 

using namespace std;
int main(){
    int C;    //mendeklarasikan variabel C

    //mengisikan nilai ke dalam variabel c dengan nilai 5 
    C = 5;

   //melakukan pre-intcrement
   cout<<"nilai C awal              : "<<C<<endl;
   cout<<"nilai --C                 : "<<--C<<endl;
   cout<<"nilai C akhir             : "<<C<<endl;
   cout<<'\n';

   //mengubah nilai yang terdapat dalam variabel c dengan nilai 10
   C = 10;
   //melakukan post-decrement 
   cout<<"nilai C awal              : "<<C<<endl;
   cout<<"nilai C--                 : "<<C--<<endl;
   cout<<"nilai C akhir             : "<<C<<endl;

   return 0;
}