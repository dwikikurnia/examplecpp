#include <iostream>
using namespace std;

double volume_kubus(double p, double l, double t = 1);
double luas_kotak(int panjang, int lebar);
double luas_kotak(int panjang);

int main()
{
    cout << "Volume kubus : " << volume_kubus(3,4,5) << endl;
    cout << "Volume kubus : " << volume_kubus(3,4) << endl;
    cout << "Luas Persegi Panjang : " << luas_kotak(5,6) << endl;
    cout << "Luas Persegi : " << luas_kotak(7) << endl;
    return 0;
}


// default argument atau nilai default
double volume_kubus(double p, double l, double t)
{
    return p * l * t;
}

double luas_kotak(int panjang, int lebar)
{
    int luas = panjang * lebar;
    return luas;
}

double luas_kotak(int panjang)
{
    int luas = panjang * panjang;
    return luas;
}