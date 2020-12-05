#include <iostream>
#include <conio.h>

using namespace std;

struct data_pembeli
{
    int nop;
    string nama, asal;
};
class distro
{

public:
    void selamat_datang(string nama)
    {
        cout << "=================================================" << endl;
        cout << " HALLO " << nama << " SELAMAT DATANG DI DISTRO GACICKERS " << endl;
        cout << "=================================================" << endl;
    }
};
data_pembeli pembeli;

int main()
{

    {
        //Input struct data pembeli
        cout << " Data Pembeli " << endl;
        cout << "-------------------------" << endl;
        cout << " NOP     : ";
        cin >> pembeli.nop;
        cout << " Nama    : ";
        cin >> pembeli.nama;
        cout << " Asal    : ";
        cin >> pembeli.asal;
        cout << " " << endl;

        getch();
    }

    int diskon, i, x, total;
    int bayar[10], hrga[10], jbrg[10], totali = 0;
    string nama[30], lagi;

awal:
    system("cls");
    cout << "=========================================" << endl;
    cout << " " << endl;
    cout << "============= Program Kasir =============" << endl;
    cout << " " << endl;
    cout << "=========================================" << endl;
    cout << endl;
    distro rhandy;
    rhandy.selamat_datang(pembeli.nama);
    cout
        << "Masukkan Jumlah Data = ";
    cin >> x;
    cout << endl;

    for (i = 0; i < x; i++)
    {
        cout << "===============================" << endl;
        cout << endl;
        cout << "Masukkan Nama Barang = ";
        cin >> nama[i];
        cout << "Masukkan Harga Barang = Rp.";
        cin >> hrga[i];
        cout << "Masukkan Jumlah Barang = ";
        cin >> jbrg[i];
        cout << endl;
    }

    system("cls");
    for (i = 0; i < x; i++)
    {
        cout << "Nama Barang = " << nama[i] << endl;
        cout << "Harga Barang = Rp. " << hrga[i] << endl;
        cout << "Jumlah Barang = " << jbrg[i] << endl;
        bayar[i] = hrga[i] * jbrg[i];
        cout << "jumlah Belanja = " << bayar[i] << endl;
        cout << endl;
    }

    for (i = 0; i < x; i++)
    {
        totali = totali + bayar[i];
        cout << "Sub total = " << totali << endl;
    }
    if (totali > 90000)
    {
        diskon = 0.1 * totali;
        cout << "Diskon 10% = Rp. " << diskon << endl;
        total = totali - diskon;
        cout << "Total  = Rp. " << total << endl;
    }
    cout << endl;
    cout << " Anda Ingin Membeli Lagi? (Y/N): ";
    cin >> lagi;
    if (lagi == "y" || lagi == "Y")
    {
        goto awal;
    }
    if (lagi == "n" || lagi == "N")
    {
        goto selesai;
    }
selesai:
    system("cls");
    cout << " Terimakasih sudah berkunjung ke toko kami" << endl;
    cout << " " << endl;
    cout << "======================================" << endl;
    cout << "********  Rhandy Ardiansyah  ********" << endl;
    cout << "======================================" << endl;
}
