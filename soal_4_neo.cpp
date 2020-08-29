//  Kak Robi sedang mengunjungi persiapan sebuah acara
//   Neo Telemetri di Pusat Kegiatan Mahasiswa. Sebagai Koordinator Acara,
//    ia juga bertanggungjawab untuk mengatur layout tempat di Kolam PKM.
//    Kali ini, terdapat aturan dengan menjalankan Protokol Kesehatan, dengan
//    memberi jarak antar kursi sebesar 1,5 meter. Jika panjang dan lebar kursi sebesar
//    0,5 meter, juga diketahui panjang dan lebar Kolam PKM sebesar 20 meter. Bantulah
//    Kak Robi untuk mencari berapa kursi yang dibutuhkan untuk acara tersebut. Syarat program:
//     menggunakan fungsi berantai (fungsi A memanggil fungsi B, fungsi B memanggil fungsi C),
//      juga menggunakan tipe data; void, double, dan int.

#include <iostream>
using namespace std;
float jarak = 1.5;
float kursi = 0.5;
int panjang = 20;
int m;

void nkursi();
int banyakKursi(int m);
int main()
{
    nkursi();
    cout << "Banyak kursi Baris dan Kolom : " << m << endl;
    cout << "Total Banyak kursi : " << banyakKursi(m) << endl;
}

void nkursi()
{
    m = panjang / jarak;
    while (true)
    {
        if (m * kursi + (m - 1) * jarak > 20)
        {
            m = m - 1;
        }
        else if (m * kursi + (m - 1) * jarak == 20)
        {

            break;
        }
    }
}

int banyakKursi(int m)
{
    return m * m;
}