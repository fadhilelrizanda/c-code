#include <iostream>
using namespace std;
#include <math.h>

float e_potensial(float *a, float *b);
float d_listrik(float *a, float *b);
float impedansi_total(float *a, float *b, float *c);

struct mahasiswa
{
    int nim;
    string nama;
    string jurusan;
};

int main()
{
    int pilihan, perulangan = 0, i = 0;
    float massa, ketinggian, tegangan, arus, resistansi, reaktansi, kapasitansi, hasil[20];
    float *p_massa, *p_ketinggian, *p_tegangan, *p_arus, *p_resistansi, *p_reaktansi, *p_kapasitansi;
    char yTq;
    p_massa = &massa;
    p_ketinggian = &ketinggian;
    p_arus = &arus;
    p_tegangan = &tegangan;
    p_resistansi = &resistansi;
    p_reaktansi = &reaktansi;
    p_kapasitansi = &kapasitansi;

    mahasiswa saya;
    cout << "Masukkan nama Anda : ";
    cin >> saya.nama;
    cout << "Masukkan Bp Anda : ";
    cin >> saya.nim;
    cout << "Masukkan jurusan Anda : ";
    cin >> saya.jurusan;
    cout << endl;
    cout << endl;
pilihan:
    cout << "Selamat datang " << saya.nama << " " << saya.nim << " " << saya.jurusan << endl;

    cout << "Menghitung Rumus Fisika" << endl;
    cout << "[1]Energi Potensial \n[2]Daya Listrik \n[3]Impedansi Total" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Masukkan pilihan Anda : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Menghitung energi potensial " << endl;
        cout << "Massa : ";
        cin >> massa;
        cout << "Ketinggian : ";
        cin >> ketinggian;
        cout << "Energi potensial : " << e_potensial(p_massa, p_ketinggian) << endl;
        hasil[perulangan] = e_potensial(p_massa, p_ketinggian);
        perulangan++;
        break;
    case 2:
        cout << "Menghitung Daya listrik " << endl;
        cout << "Tegangan : ";
        cin >> tegangan;
        cout << "Arus : ";
        cin >> arus;
        cout << "Daya listrik : " << d_listrik(p_tegangan, p_arus) << endl;
        hasil[perulangan] = d_listrik(p_tegangan, p_arus);
        perulangan++;
        break;
    case 3:
        cout << "Menghitung Impedansi " << endl;
        cout << "Resistansi : ";
        cin >> resistansi;
        cout << "Reaktansi : ";
        cin >> reaktansi;
        cout << "Kapasitansi : ";
        cin >> kapasitansi;
        cout << "Impedansi : " << impedansi_total(p_resistansi, p_reaktansi, p_kapasitansi) << endl;
        hasil[perulangan] = impedansi_total(p_resistansi, p_reaktansi, p_kapasitansi);
        perulangan++;
        break;
    default:
        cout << "Ulangi kembali  " << endl;
        goto pilihan;
        break;
    }
pilih2:
    cout << endl;
    cout << endl;
    cout << "Ulangi (y) tampilkan semua hasil (t) keluar (q) : ";
    cin >> yTq;
    switch (yTq)
    {
    case 'y':
        /* code */
        goto pilihan;
        break;
    case 't':
        for (int j = 0; j < perulangan; j++)
        {
            cout << "Hasil adalah ke -" << j + 1 << " : " << hasil[j] << endl;
        }

        break;
    case 'q':
        cout << "Terima kasih" << endl;
        break;
    default:
        cout << "ulangi kembali" << endl;
        cout << endl;
        goto pilih2;
        break;
    }
}

float e_potensial(float *a, float *b)
{
    float gravitasi = 9.8;
    return gravitasi * *a * *b;
}

float d_listrik(float *a, float *b)
{
    return *a * *b;
}

float impedansi_total(float *a, float *b, float *c)
{
    return sqrt(*a * *a + *b * *b + *c * *c);
}