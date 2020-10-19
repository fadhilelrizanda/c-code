//Program untuk memasukkan data dan menampilkan data //Nama File Ini.cpp
#include <iostream>
using namespace std;
int main()
{
    string menu, pembuka, tampilan;
    menu = "Program memasukkan 5 nilai ke array";
    pembuka = "Isi data ke: ";
    tampilan = "Tampilkan hasil : ";
    cout << menu << endl;
    float x[5];                  //Deklarasi larik dengan lima  elemen int d; clrscr();
    for (int i = 0; i <= 4; i++) //mengisi larik
    {
        cout << pembuka<<i<<" : ";
        cin >> x[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << tampilan << x[i] << endl; //tampilan setelah diisi
    }
}