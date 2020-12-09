#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;

    bool hasil, hasil1, hasil2;
    
    // komparasi, relation expression

    // sebanding ==
    hasil1 = (a == b); 
    cout << hasil1 << endl;

    // tidak sebanding !=
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // kurang dari sama dengan
    hasil1 = (a <= b);
    cout << hasil1 << endl;

    // lebih dari sama dengan
    hasil2 = (a >= b);
    cout << hasil2 << endl;
    
    // operator logika : not, and, or

    // not
    hasil = !(a == 3);
    cout << "not : " << hasil << endl;

    // and
    hasil = (a == 3) and (b == 2);
    cout << "and : " << hasil << endl;

    // or
    hasil = (a == 3) or (b == 2);
    cout << "or : " << hasil << endl;

    return 0;
}
