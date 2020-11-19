#include <conio.h> //perhatikan perbedaannya
#include <string.h>
#include <iostream>
using namespace std;
main()
{
    int *p_kode;
    struct
    {
        char nama[20], alamat[30], nmpes[15], tujuan[30];
        int kode, jumpes;
        long int harga, diskon, total, kembali, bayar;
    } pesawat;
    char lagi;
    p_kode = &pesawat.kode;
awal:

    cout << "PEMESANAN TIKET PESAWAT GARUDA" << endl;
    cout << "============JKT-PDG==========" << endl;
    cout << "PILIH HARI PENERBANGAN" << endl;
    cout << "1. SENIN" << endl;
    cout << "2. SELASA" << endl;
    cout << "3. RABU" << endl;
    cout << "4. KAMIS" << endl;
    cout << "5. JUM'AT'" << endl;
    cout << "6. SABTU" << endl;
    cout << "7. MINGGU" << endl;

    cout << "Masukkan Nama Pemesanan:";
    cin >> pesawat.nama;
    cout << "Masukkan Alamat Pemesanan:";
    cin >> pesawat.alamat;
    cout << "Masukkan Hari Pesawat [1/2/3/4/5/6/7]:";
    cin >> pesawat.kode;

    if (*p_kode == 1)
    {
        strcpy(pesawat.nmpes, "GARUDA");
        strcpy(pesawat.tujuan, "JAKARTA-PADANG");
        pesawat.harga = 700000;
    }
    else if (*p_kode == 2)
    {
        strcpy(pesawat.nmpes, "GARUDA");
        strcpy(pesawat.tujuan, "JAKARTA-PADANG");
        pesawat.harga = 700000 * 0.90;
        cout << endl
             << "selamat anda mendapatkan diskon 10%" << endl;
    }
    else if (*p_kode == 3)
    {
        strcpy(pesawat.nmpes, "GARUDA");
        strcpy(pesawat.tujuan, "JAKARTA-PADANG");
        pesawat.harga = 700000;
    }
    else if (*p_kode == 4)
    {
        strcpy(pesawat.nmpes, "GARUDA");
        strcpy(pesawat.tujuan, "JAKARTA-PADANG");
        pesawat.harga = 700000;
    }
    else if (*p_kode == 5)
    {
        strcpy(pesawat.nmpes, "GARUDA");
        strcpy(pesawat.tujuan, "JAKARTA-PADANG");
        pesawat.harga = 800000;
    }
    else if (*p_kode == 6)
    {
        strcpy(pesawat.nmpes, "GARUDA");
        strcpy(pesawat.tujuan, "JAKARTA-PADANG");
        pesawat.harga = 900000;
    }
    else if (*p_kode == 7)
    {
        strcpy(pesawat.nmpes, "GARUDA");
        strcpy(pesawat.tujuan, "JAKARTA-PADANG");
        pesawat.harga = 1000000;
    }
    else
    {
        cout << "KODE YANG ANDA MASUKAN SALAH";
        pesawat.harga = 0;
        exit(0);
    }
    cout << "Masukkan Jumlah Pesan:";
    cin >> pesawat.jumpes;

    cout << "Pemesanan Tiket Pesawat Atas Nama :" << pesawat.nama << endl;
    cout << "Nama Pesawat\t:" << pesawat.nmpes << endl;
    cout << "Alamat Pembeli\t:" << pesawat.alamat << endl;
    cout << "Tujuan Pesawat\t:" << pesawat.tujuan << endl;
    cout << "Harga \t\t:" << pesawat.harga << endl;
    cout << "Jumlah Tiket Pemesanan\t:" << pesawat.jumpes << endl;
    cout << "===================================" << endl;
    pesawat.total = pesawat.jumpes * pesawat.harga;
    cout << "Total Bayar\t\t:" << pesawat.total << endl;
    cout << "Bayar\t\t:";
    cin >> pesawat.bayar;
    cout << "===================================" << endl;
    pesawat.kembali = pesawat.bayar - pesawat.total;
    cout << "Kembali\t\t:" << pesawat.kembali << endl;
    cout << "Ingin Input Lagi [Y/T]:";
    cin >> lagi;
    if (lagi == 'y' || lagi == 'Y')
    {
        goto awal;
    }
    else
    {
        exit(0);
    }

    getch();
}