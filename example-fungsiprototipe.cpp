#include <iostream>

using namespace std;

// prototype atau deklarasi fungsi
double hitung_luas(double p, double l);
void println(double x);


int main()
{
    double panjang, lebar;
    cin >> panjang;
    cin >> lebar;
    cout << hitung_luas(panjang, lebar) << endl;
    println(hitung_luas(panjang,lebar));
    return 0;
}

double hitung_luas(double p, double l)
{
    return p*l;
}

void println(double x)
{
    cout << "Hasil void" << x << endl;
}