#include <iostream>
using namespace std;

int main()
{
    int jumlah_nilai;
    float jumlah;
    float rata_rata;
    int nilai[100];
    int i = 0;
    cout << "Masukkan jumlah nilai yang akan diinputkan : ";
    cin >> jumlah_nilai;
    while (i < jumlah_nilai)
    {
        cout << "Masukkan nilai ke-" << i + 1 << " : ";
        cin >> nilai[i];
        jumlah = jumlah + nilai[i];
        i++;
    }

    rata_rata = jumlah / jumlah_nilai;
    cout << "Rata-rata : " << rata_rata << endl;
    cout << endl;
    cout << endl;
    cout << "Fadhil Elrizanda" << endl;
    cout << "1910952034" << endl;
    cout << "Pemograman 2 TE B" << endl;
}