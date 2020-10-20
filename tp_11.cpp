#include <iostream>
using namespace std;

int main()
{
    int jumlah;
    float harga;
    int total, uang = 100000;
    bool kondisi;
    string string_kalimat[10] = {"Program mengecek uang dengan pengeluaran", "Jumlah Uang : ", "Jumlah barang yang akan dibeli : ", "Harga barang yang akan dibeli : ", " Total Biaya yang dikeluarkan : ", "Jumlah uang memadai True/False : "};

    cout << string_kalimat[0] << endl;
    cout << string_kalimat[1] << uang << endl;
    cout << string_kalimat[2];
    cin >> jumlah;
    cout << string_kalimat[3];
    cin >> harga;

    total = jumlah * harga;
    kondisi = (uang > jumlah);

    cout << string_kalimat[4] << total << endl;
    cout << string_kalimat[5] << kondisi << endl;
}