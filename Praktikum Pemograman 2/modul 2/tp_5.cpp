#include <iostream>
using namespace std;

int main()
{
    int pilihan, angka_nilai, huruf_nilai;
    char angka_huruf;
    cout << "Program konversi nilai huruf dan angka " << endl;
    cout << "=========================================" << endl;
    cout << endl;
    cout << "[1] Nilai angka ke huruf \n[2] Huruf ke angka" << endl;
    cin >> pilihan;

    if (pilihan == 1)
    {
        cout << "Program konversi nilai angka ke huruf" << endl;
        cout << "=========================================" << endl;
        cout << endl;
        cout << "Masukkan angka (0-100) yang akan dikonversikan" << endl;
        cin >> angka_nilai;
        if (angka_nilai <= 100 && angka_nilai >= 80)
        {
            cout << "Nilai anda adalah A" << endl;
        }
        else if (angka_nilai <= 80 && angka_nilai >= 70)
        {
            cout << "Nilai anda adalah B" << endl;
        }
        else if (angka_nilai <= 70 && angka_nilai >= 60)
        {
            cout << "Nilai anda adalah C" << endl;
        }
        else if (angka_nilai <= 60 && angka_nilai >= 0)
        {
            cout << "Nilai anda adalah D" << endl;
        }
        else if (angka_nilai = 0)
        {
            cout << "Nilai anda adalah E" << endl;
        }
        else
        {
            cout << "Nilai yang anda masukkan salah" << endl;
        }
    }
    else if (pilihan == 2)
    {
        cout << "Program konversi huruf angka ke angka" << endl;
        cout << "=========================================" << endl;
        cout << endl;
        cout << "Masukkan hurf (A-E) yang akan dikonversikan" << endl;
        cin >> angka_huruf;

        switch (angka_huruf)
        {
        case 'A':
            huruf_nilai = 90;
            cout << "Nilai anda (rata-rata) adalah " << huruf_nilai << endl;
            break;

        case 'B':
            huruf_nilai = 75;
            cout << "Nilai anda (rata-rata) adalah " << huruf_nilai << endl;
            break;

        case 'C':
            huruf_nilai = 65;
            cout << "Nilai anda (rata-rata) adalah " << huruf_nilai << endl;
            break;
        case 'D':
            huruf_nilai = 60;
            cout << "Nilai anda di bawah/sama dengan " << huruf_nilai << endl;
            break;
        case 'E':
            huruf_nilai = 0;
            cout << "Nilai anda adalah " << huruf_nilai << endl;
            break;
        default:
            break;
        }
    }

    else
    {
        cout << "Pilihan yang anda masukkan salah" << endl;
    }

    cout << "Memprediksi apakah anda lulus atau tidak" << endl;
    if (pilihan == 1)
    {
        string lulus = (angka_nilai > 60) ? "lulus" : "tidak lulus";
        cout << "Status Anda : " << lulus << endl;
    }
    else if (pilihan == 2)
    {
        string lulus = (huruf_nilai > 60) ? "lulus" : "tidak lulus";
        cout << "Status Anda : " << lulus << endl;
    }
    else
    {
        cout << "Nilai anda salah silahkan dicoba kembali" << endl;
    }

    cout << "===================================================" << endl;
    cout << "================ Fadhil Elrizanda =================" << endl;
    cout << "================ Kelompok 1 =======================" << endl;
    cout << "================ Modul 1 ==========================" << endl;
    cout << "================ 1910952034 =======================" << endl;
    cout << "===================================================" << endl;
    system("PAUSE");
}