#include <iostream>

using namespace std;

int main() {
    
    float a,b;
    char aritmatika;
    float hasil;
    cout << "Selamat datang di program calculator \n \n";

    // memasukan input dari user
    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "Pilih operator +, -, /, * : ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua : ";
    cin >> b;

    cout << "\n Hasil perhitungan : ";
    cout << a << " " << aritmatika << " " << b;
    
    if (aritmatika == '+'){
        hasil = (a + b);
    }

    else if (aritmatika == '-'){
        hasil = (a - b);
    }

    else if (aritmatika == '*'){
        hasil = (a * b);
    }
    
    else if (aritmatika == '/'){
        hasil = (a / b);
    }

    else {
        cout << "\n Operator anda salah" << endl;
    }
    cout << " = " << hasil << endl;

    return 0;
}