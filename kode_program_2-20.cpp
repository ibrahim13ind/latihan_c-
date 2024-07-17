#include <iostream>
#include <cstring>
using namespace std ;
int main(){
    char s1[7];
    
    char *s2;
   // melakukan pengisian nilai terhadap variabel s1 dan s2 
   s1="contoh";
   s2="salin string";
  //melakukan penyalinan stringdari variabel s2 ke variabel s1
  strcpy(s1,s2, 4); 
  //menampilkan nilai dari variabel s1 
  cout<<s1<<endl;
  return 0; 
}
