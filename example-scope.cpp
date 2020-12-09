#include <iostream>

using namespace std;

// Variable global scope
int x = 10; 

// Mengambil variable global
int ambil_global()
{
    return x;
}

int main()
{
    cout << "Variabel Global " << x << endl;
    int x = 8; // Variable Local untuk main()
    cout << "Variabel Local " << x << endl;
    cout << "Ambil Global " << ambil_global() << endl;
    cout << "Ambil Global ::" << ::x << endl;
    {
        //block scope
        int x = 1;
        cout << "Variable Block Scope : " << x << endl;
    }

    cout << "Variable local main : " << x << endl;

    return 0;
}
