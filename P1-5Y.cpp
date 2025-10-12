#include <iostream>
using namespace std ;   
int main(){  
    int hitung,i,y ;
    int x[10]={3,10,9,1,4,5,7,8,6,2};
    int arraySize = sizeof(x) / sizeof(x[0]); // Calculate array size
    std::cout << "Array Elements awal: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << x[i] << " "; // Print each element followed by a space
    }
    std::cout << std::endl; // Add a newline at the end
    int selesai=1;
    while (selesai>0){   
        selesai=0;        
        for(i=0;i<=8;i++){
            if (x[i]<x[i+1]){
                y= x[i];
                x[i]=x[i+1];
                x[i+1]=y;
                selesai=selesai+1;
                hitung=hitung+1;
            }
        }                  
    }  
    selesai=1;
    while (selesai >0){ 
       selesai=0;
        for (i=5;i<=8;i++){
            if (x[i]>x[i+1]){
                 y=x[i];
                 x[i]=x[i+1];
                 x[i+1]=y;
                  selesai = selesai+1;
                  hitung=hitung+1;
            }
        }           
    }
    //int arraySize = sizeof(x) / sizeof(x[0]); // Calculate array size
    std::cout << "Array Elements akhir: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << x[i] << " "; // Print each element followed by a space
    }        
    std::cout << std::endl; // Add a newline at the end
   
         
         
         
       
 return 0;
}