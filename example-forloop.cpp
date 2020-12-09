#include <iostream>

using namespace std;

int main()
{
    cout << "Awal For Loop \n";
    for (int i = 0; i <= 10; i++)
    {
        cout << "Loop1 " << i << endl;
    }
    
    cout << "\n\n";

    for (int i = 0; i <= 10; i+= 2)
    {
        cout << "Loop2 " << i << endl;
    }
    
    int total = 0;
    for (int i = 1; i <= 10; i++, total += i)
    {
        
        cout << i << " || " << total << endl;
    }
    
    int total1 = 0;
    for (int i = 1; i <= 10; total1 += i, i++)
    {
        
        cout << i << " || " << total1 << endl;
    }

    int total2 = 0;
    for (int i = 1; i <= 10; i, i++)
    {
        total2 += i;

        cout << i << " || " << total2 << endl;
    }

    cout << "\nProgram Selesai" << endl;
    return 0;
}