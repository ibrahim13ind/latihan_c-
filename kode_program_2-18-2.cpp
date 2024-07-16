#include <iostream> 
using namespace std;
int main(){
    //mendeklarasikan variabel nama dengan tipe array dan 
    //lebar 5 karakter  
    char NAMA[5]; //char ini mendefinisikan variabel tipe array, bukan string
    //mengisikan nilai kedalam variabel VariabelNAMA
    string VariabelNAMA ="Budi"; //variabel VariabelNAMA didefinisikan bertipe string
    for (int i=0;i<5;i++){
      //pengisian string VariabelNAMA ke array NAMA harus dilakukan secara satu persatu. Jadi harus dilooping
      NAMA[i]=VariabelNAMA[i];
      }
    //NAMA="Budi";
    cout<<"karakter ke-0: "<<NAMA[0]<<endl;
    cout<<"karakter ke-1: "<<NAMA[1]<<endl;
    cout<<"karakter ke-2: "<<NAMA[2]<<endl;
    cout<<"karakter ke-3: "<<NAMA[3]<<endl;
    cout<<"karakter ke-4: "<<NAMA[4]<<endl;
    return 0;
    
    }
