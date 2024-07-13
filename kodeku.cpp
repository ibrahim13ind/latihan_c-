#include <iostream>
#define MAX 5


using namespace std;

int main() {
    int A[MAX];
    for (int c=0; c<MAX; c++) {
        A[c] = c*10;
    }
    for (int c=0; c<MAX; c++) {
        cout<<"nilai ke ";
        cout<<c+1; 
        cout<< " = ";
        cout<<A[c];
        cout<<endl;
        cout<<endl;
    
    }

    return 0;
}