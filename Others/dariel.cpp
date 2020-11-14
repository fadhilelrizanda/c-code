#include <iostream>
using namespace std;

void tampilkan_list();

int main()
{
    int umur, tiket, movie[5], harga, i = 0;
    string nama;
    cout << "\tBIOSKOP KELUARGA" << endl;
    cout << "\tJL. Kulon no. 16" << endl;
    cout << "\tMasukkan Nama Anda : ";
    cin >> nama;
    cout << "\tMasukkan Umur Anda : ";
    cin >> umur;
    if (umur > 12)
    {
        tampilkan_list();
        while (true)
        {
        mulai:
            cout << "\tMOVIE PILIHAN ANDA    : ";
            cin >> movie[i];
            if (movie[i] > 5 || movie[i] <= 0)
            {
                cout << "\tMAAF INPUT YANG ANDA MASUKKAN SALAH, SILAHKAN MASUKKAN LAGI" << endl;
                continue;
            }
            else
            {
                break;
            }
        }
        if (umur < 17)
        {
            switch (movie[i])
            {
            case 1:
                cout << "\tANDA MASIH BOCIL LAGI,TAK BOLEH NONTON INI" << endl;
                cout << "\tSilahkan Masukkan Kembali :" << endl;
                goto mulai;
                break;
            case 2:
                cout << "\tANDA MASIH BOCIL LAGI,TAK BOLEH NONTON INI" << endl;
                cout << "\tSilahkan Masukkan Kembali :" << endl;
                goto mulai;
                break;
            default:
                break;
            }
        }
        while (true)
        {
            cout << "\tJumlah Tiket yang dipesan    : ";
            cin >> tiket;
            if (tiket > 5 || tiket <= 0)
            {
                cout << "\tTIKET YANG ANDA PESAN TIDAK MEMENUHI SYARAT" << endl;
                continue;
            }
            else if (tiket <= 5)
            {
                harga = tiket * 35000;
                cout << "\tPesanan Anda seharga : " << harga << endl
                     << endl
                     << endl;
                break;
            }
        }
        cout << " ====================================================" << endl;
        cout << "\tBIOSKOP KELUARGA" << endl;
        cout << "\tJL. Kulon no. 16" << endl;
        cout << " ====================================================" << endl;
        cout << "\tNama Konsumen 		: " << nama << endl;
        cout << "\tUmur Konsumen 		: " << umur << endl;
        cout << "\tJumlah Tiket		: " << tiket << endl;
        cout << "\tTotal Harga		:Rp." << harga << endl;
        cout << endl
             << endl
             << endl;
        cout << "\tTERIMAKASIH TELAH MENONTON DI BIOSKOP KAMI" << endl;
        for (int a = 1; a <= tiket; a++)
        {
            for (int b = 1; b <= a; b++)
            {
                cout << "\t*";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "SILAHKAN PULANG SAJA NAK" << endl;
    }
}

void tampilkan_list()
{
    cout << " ====================================================" << endl;
    cout << "\t   DAFTAR MOVIE MINGGU INI ";
    cout << endl;
    cout << "\t*-------------------------------*" << endl;
    cout << "\t| 1. Fifty Shades Freed (17+)   |" << endl;
    cout << "\t| 2. The Conjuring (17+)        |" << endl;
    cout << "\t| 3. spider man far from home   |" << endl;
    cout << "\t| 4. Baby Boss   				 |" << endl;
    cout << "\t| 5. Toy Story 4                |" << endl;
    cout << " ====================================================" << endl;
    cout << endl;
}