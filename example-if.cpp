#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Masukan angka = ";
    cin >> a;

    // if statement

    if (a > 10){
        cout << "Nilai ini lebih dari 10 \n";

    } 
    else if (a == 3){
        cout << "Nilai ini kurang dari 3 \n";
    }
    else
    {
        cout << "Nilai ini kurang dari 10 \n";
    }
    
    cout << "End" << endl;

    return 0;
}
