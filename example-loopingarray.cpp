#include <iostream>
using namespace std;

int main()
{
    int arrayNilai[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for(int nilai : arrayNilai) // looping array
    {
        cout << "address " << &nilai << " Nilainya : " << nilai << endl;
        nilai = 1; // tidak merubah array
    }
    cout << endl;
    for(int &nilaiRef : arrayNilai)
    {
        cout << "address " << &nilaiRef << " Nilainya : " << nilaiRef << endl;
        // nilai = 1; // tidak merubah array
    }

    return 0;
}