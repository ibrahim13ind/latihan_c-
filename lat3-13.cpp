#include <iostream>
using namespace std;
int main () { 
  int x, y;
  // menggeser 1 bit ke kanan dari bentuk biner bilangan 16 
  x = 16 >> 1;
  //menggeser 2 bit ke kanan dari bentuk biner bilangan 16 
  y = 16 >> 2; 
  //menampilkan hasil 
  cout<<"16 >> 1 = "<<x<<endl;
  cout<<"16 >> 2 = "<<y<<endl;
  return 0; 
  }
