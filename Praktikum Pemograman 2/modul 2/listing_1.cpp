// Program if Condition
#include <iostream>
using namespace std;

int main()
{
    int tahun;

    cout << "Masukkan Tahun Kelahiran Anda = ";
    cin >> tahun;

    tahun = 2020 - tahun;

    if (tahun >= 19)
    {
        cout << "Umur anda besar sama dari 19 tahun";
    }

    else
    {
        cout << "Umur anda kurang dari 19 tahun" << endl;
    }