//Program untuk memasukkan data dan menampilkan data //Nama File Ini.cpp
#include <iostream>
using namespace std;
int main()
{
    float x[5];                  //Deklarasi larik dengan lima  elemen int d; clrscr();
    for (int i = 0; i <= 4; i++) //mengisi larik
    {
        cout << "Isi data ";
        cin >> x[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << "Tampilkan hasil : " << x[i] << endl; //tampilan setelah diisi
    }
}