#include <iostream>
#include <array>
using namespace std;

int main()
{
    array < int, 5 > nilai;
    
    for(int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        cout << "Nilai [" << i << "] = " << nilai[i] << endl;
    }

    // ukuran array
    cout << "Ukuran : " << nilai.size() << endl;

    // address awal dari array
    cout << "Address awal : " << nilai.begin() << endl;
    
    // address akhir dari array
    cout << "Address akhir : " << nilai.end() << endl;

    // nilai dengan index
    cout << "Nilai ke 2 : " << nilai.at(2) << endl;
    
    return 0;
}