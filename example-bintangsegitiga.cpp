#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Masukkan Deret Bintang : ";
    cin >> n;

    // Segitiga pola pertama
    cout << "Pola 1\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            cout << "*";

        }
        cout << endl;
    }
    
    // Segitiga pola kedua
    cout << "Pola 2\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--){
            cout << "*";

        }
        cout << endl;
    }   

    // Segitiga pola ketiga
    cout << "Pola 3\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++){
            cout << " ";
        }

        for (int k = n; k >= i; k--){
             cout << "*";   

        }
        cout << endl;
    }   

    // Segitiga pola keempat
    cout << "Pola 4\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
                 
        cout << endl;
    }   

    // Segitiga pola kelima
    cout << "Pola 5\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= (2*i - 1); k++)
        {
            cout << "*";
        }
                 
        cout << endl;
    }   


    // Segitiga pola keenam
    cout << "Pola 6\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++){
            cout << " ";
        }

        for (int k = n; k >= (2*i - n); k--){
             cout << "*";   

        }
        cout << endl;
    }   


    return 0;
}
