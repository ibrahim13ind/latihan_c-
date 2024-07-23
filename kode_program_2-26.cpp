#include <algorithm> 
#include <iostream>
#include <string>
using namespace std; 
int main(){
    string S="budi raharjo";
    // melakukan penulisan string mulai dari posisi akhir variabel S 
    reverse(S.begin(),S.end());
    //menampilkan nilai dari variabel S setelah dibalik
    cout<< S<<endl;
    return 0;
}
