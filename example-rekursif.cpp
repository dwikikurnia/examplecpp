#include <iostream>

using namespace std;


int pangkat(int a, int b);
int pangkat_rekursif(int a, int b);
int faktorial(int n);

int main()
{
    int a, b;

    cout << "Masukkan angka : ";
    cin >> a;
    cout << "Masukkan pangkat : ";
    cin >> b;
    cout << "Hasil pangkat : " << pangkat(a,b) << endl;
    cout << "Hasil pangkat rekursif : " << pangkat_rekursif(a,b) << endl;
    cout << "Hasil faktorial " << a << " : " << faktorial(a) << endl;

    return 0;
}


int pangkat(int a, int b)
{
    int hasil = a;
    for (int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
    
}

// Finite Recursion atau rekursif terbatas

int pangkat_rekursif(int a, int b)
{
    if (b <=1)
    {
        return a;
    }
    else
    {
        return a * pangkat_rekursif(a, b-1);
    }
    
    
}

// Latihan Rekursif

int faktorial(int n)
{
        
    if (n <=1)
    {
        return n;
    }
    else
    {
        return n * faktorial(n-1);
    }
    
}