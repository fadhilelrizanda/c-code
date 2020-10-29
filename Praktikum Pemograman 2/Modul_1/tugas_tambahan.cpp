#include <iostream>
using namespace std;

//* Program konversi reamur ke fahrenheit dan kelvin
//* Fahrenheit = (9/4*reamur)+32
//* Kelvin = 5/4 x reamur + 273

int main()
{

    float reamur, fahrenheit, kelvin;
    cout << "-------------------------------------------" << endl;
    cout << "Program mengkonversi reamur ke fahrenheit dan kelvin" << endl;
    cout << "-------------------------------------------" << endl;
    cout << endl;
    cout << "Masukkan Suhu dalam Reamur : ";
    cin >> reamur;
    fahrenheit = (9 * reamur / 4 + 32);
    kelvin = 5 * reamur / 4 + 273;
    cout << endl;
    cout << "Suhu dalam fahrenheit adalah " << fahrenheit << endl;
    cout << "Suhu dalam kelvin adalah " << kelvin << endl;
    cout << endl;
    cout << "===================================================" << endl;
    cout << "================ Fadhil Elrizanda =================" << endl;
    cout << "================ Kelompok 1 =======================" << endl;
    cout << "================ Modul 1 ==========================" << endl;
    cout << "================ 1910952034 =======================" << endl;
    cout << "===================================================" << endl;
    system("PAUSE");
}