#include <iostream>
using namespace std;

int main()
{
    int nilai[7] = {1, 2, 3, 4, 5};
    int n;

    cout << &nilai[0] << endl; // melihat alamat memory
    cout << nilai[1] << endl;
    cout << nilai[4] << endl;
    cout << nilai[5] << endl;

    n = sizeof(nilai)/sizeof(int);
    cout << "Ukuran array " << sizeof(nilai) << " byte" << endl;
    cout << "Jumlah member array " << n << endl;

    return 0;
}
