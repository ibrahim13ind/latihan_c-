#include <iostream>
#include <cstring>
using namespace std;
int main() {
char s1[50] ;
char *s2;
// melakukan pengeisian nilai terhadap variabel s2
s2 ="ini adalah contoh penyalinan string";
//melakukan penyalinan string dari variabel s2 ke variabel s1
strcpy(s1,s2)  ;
//menampilkan nilai dari variabel s1 
cout<<s1<<endl;
return 0;
}
