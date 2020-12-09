#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "Masukan nilai = ";
    cin >> a;

    switch(a){
        case 5:
            cout << "benar itu adalah 5" << endl;
            break;
        case 4:
            cout << "benar itu adalah 4" << endl;
        default:
            cout << "default" << endl;

    }

cout << "Program Ended" << endl;

    return 0;
}