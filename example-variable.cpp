#include <iostream>

//  Command tanpa perlu std
using namespace std;

int tambah(int a, int b){
  return (a + b);
}

int main() {
  // Init variable
    
    // Bilangan bulat
    unsigned int x; // integer positif, tidak diperkenankan negatif
    int y;
    int z;
    long a = 1000;
    short b = 5;
    
    // Bilangan desimal
    float c = 7.5;
    float d = 9;

    // Character
    char e = 'a';

    // Boolean
    bool f = true;

    cout << f << endl;


    x = 10;
    y = 20;

    cout << x << endl;
    cout << "Hello World! " << tambah(2,3) << endl;

// Create input with cin
    // cout << "Masukan Nilai: ";
    // cin >> z;
    // cout << "Nilai yang anda masukan adalah: ";
    // cout << z << endl;

    cout << sizeof(x) << " Byte" << endl;
    return 0;
}
