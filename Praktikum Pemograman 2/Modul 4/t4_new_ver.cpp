// Buatlah program penjualan tiket bioskop dengan array.

#include <iostream>
using namespace std;

int main()
{
    int kolom = 6, baris = 10, baris_pilih, kolom_pilih, kursi_bioskop[12][12];

    cout << endl;
    cout << "Program menampilkan dan memesan tiket bioskop pada keadaan covid 19" << endl;
    cout << "======================================================================" << endl;
    cout << endl;
    cout << endl;
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            if (j % 2 == 0)
            {
                if (i % 2 == 1)
                {
                    cout << "[X] ";
                    kursi_bioskop[i][j] = 0;
                }
                else
                {
                    cout << "[ ] ";
                    kursi_bioskop[i][j] = 1;
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    cout << "[X] ";
                    kursi_bioskop[i][j] = 0;
                }
                else
                {
                    cout << "[ ] ";
                    kursi_bioskop[i][j] = 1;
                }
            }
        }
        cout << endl;
    }
pilih:
    cout << "Pilih Kursi yang ingin anda tempati : " << endl;
    cout << "Baris : ";
    cin >> baris_pilih;
    cout << "Kolom : ";
    cin >> kolom_pilih;
    if (kursi_bioskop[baris_pilih][kolom_pilih] == 0)
    {
        cout << endl;
        cout << "Maaf kursi tidak dapat dipilih" << endl;
        cout << endl;
        goto pilih;
    }
    else if (kursi_bioskop[baris_pilih][kolom_pilih] == 1)
    {
        cout << endl;
        cout << "Silahkan temui cs di tempat pembayaran tiket" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "404 internal error ulangi kembali" << endl;
        goto pilih;
        cout << endl;
    }
}