#include <iostream>
using namespace std;

int main()
{
    
    // variable 
    int a = 5;

    cout << "address dari a " << &a << endl;
    cout << "  nilai dari a "  << a << endl;

    int &b = a;

    cout << "Nilai dari b " << b << endl;
    cout << "address dari b " << &b << endl;

    b = 10;

    cout << "Nilai dari b " << a << endl;
    cout << "address dari b " << b << endl;
    return 0;
}