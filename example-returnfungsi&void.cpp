#include <iostream>
using namespace std;


// reporter (dengan return)
int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// worker (tanpa return)

void tampilkan(int input)
{
    cout << "Menampilkan dengan void\n";
    cout << input << endl;
}


int main()
{
    int input, hasil, a, b, hasil2;
    cout << "Nilai Kuadrat Dari : ";
    cin >> input;
    
    hasil = kuadrat(input);
    cout << hasil << endl;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    
    hasil2 = tambah(a,b);

    cout << "Nilai Tambah Dari a + b : " << hasil2 << endl;
    tampilkan(hasil);

    return 0;
}