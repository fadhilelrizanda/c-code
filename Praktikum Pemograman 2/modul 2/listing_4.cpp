// Program switch case
#include <iostream>
using namespace std;

int main()
{
    int nilai;
    char predikat;

    cout << "Masukkan nilai anda : " << endl;
    cin >> nilai;

    nilai = (nilai > 100) ? -10 : nilai;

    switch (nilai / 10)
    {
    case 10:
        cout << "Sempurna";
        predikat = 'A';
        break;
    case 9:
        cout << "Sangat Baik";
        predikat = 'A';
        break;
    case 8:
        cout << "Baik";
        predikat = 'B';
        break;
    case 7:
        cout << "Cukup";
        predikat = 'C';
        break;
    case 6:
        cout << "Lebih Giat Lagi";
        predikat = 'D';
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << " Maaf Anda Belum Lulus";
        predikat = 'F';
        break;
    default:
        cout << " Nilai Yang Anda Masukkan Salah" << endl;
    }
    cout << "Nilai Anda adalah : " << predikat << endl;

    return 0;
}