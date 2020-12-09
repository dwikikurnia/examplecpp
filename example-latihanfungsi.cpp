#include <iostream>

using namespace std;

// fungsi menghitung luas persegi panjang
double hitung_luas(double p, double l)
{
    double luas = p * l;
    return luas;
}

// fungsi menghitung keliling persegi panjang
double hitung_keliling(double p, double l)
{
    double keliling = 2*p + 2*l;
    return keliling;
}

// void tampilkan luas dan keliling

void tampilkan_luas(double p, double l)
{
    cout << "Luasnya adalah : " << hitung_luas(p,l) << endl;
    cout << "Kelilingnya adalah : " << hitung_keliling(p,l) << endl;
}

int main()
{
    double panjang, lebar;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;

    tampilkan_luas(panjang,lebar);

    
    return 0;
}
