#include <iostream>

using namespace std;

int main(){
    
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator \n \n";

    // memasukan input dari user
    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "Pilih operator +, -, /, * : ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua : ";
    cin >> b;

    cout << "\nHasil perhitungan : ";
    cout << a << " " << aritmatika << " " << b;
    
    switch(aritmatika){
        case '+':
        hasil = a + b;
        cout << " = " << hasil << endl;
        break;

        case '-':
        hasil = a - b;
        cout << " = " << hasil << endl;
        break;

        case '*':
        hasil = a * b;
        cout << " = " << hasil << endl;
        break;

        case '/':
        hasil = a / b;
        cout << " = " << hasil << endl;
        break;

        default:
        cout << "\n Operator anda salah \n";

    }

    

    return 0;
}
