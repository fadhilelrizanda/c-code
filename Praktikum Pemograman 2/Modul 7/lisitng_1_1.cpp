#include <iostream>
#include <string>
using namespace std;

class Kelas
{
public:
    float nilai, jumlah, rata;
    int nMahasiswa;
    string matkul;

    Kelas()
    {
        cout << "Program menghitung rata-rata nilai mahasiswa\n";
        cout << "Selamat datang!\n\n";
        jumlah = 0;
    }
    float dataProcess()
    {
        for (int i = 1; i <= nMahasiswa; i++)
        {
            cout << "Nilai mahasiswa ke-" << i << "  : ";
            cin >> nilai;
            jumlah += nilai;
            rata = jumlah / nMahasiswa;
        }
        return rata;
    }
    void info()
    {
        cout << "\n\nMata Kuliah      : " << matkul;
        cout << "\nJumlah Mahasiswa : " << nMahasiswa;
        cout << "\nRata-rata nilai  : " << rata;
    }
    ~Kelas()
    {
        cout << "\nProgram berakhir\n";
    }
};

class Data : public Kelas
{
public:
    void info(float rata)
    {
        if (rata >= 80)
        {
            cout << "\nRata-rata nilai baik\n";
        }
        else if (rata >= 60 && rata < 80)
        {
            cout << "\nRata-rata nilai rendah\n";
        }
        else
        {
            cout << "\nRata-rata nilai sangat rendah\n";
        }
    }
    void saran(float rata)
    {
        if (rata < 70)
        {
            cout << "Sebaiknya dilakukan remedi untuk mata kuliah ";
        }
        else
        {
            cout << "Tidak perlu dilakukan remedi";
        }
    }
};

int main()
{
    char pilihan;
    Kelas kelasku;
    Data info;

    cout << "Mata Kuliah      : ";
    getline(cin, kelasku.matkul);
    cout << "Jumlah Mahasiswa : ";
    cin >> kelasku.nMahasiswa;

    float hasil = kelasku.dataProcess();

    kelasku.info();
    info.info(hasil);
    info.saran(hasil);

    cout << "\n\nUlang? (Y/N)";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'Y':
    case 'y':
        system("cls");
        main();
        break;
    case 'N':
    case 'n':
        system("PAUSE");
        cout << "\nTerima kasih!\n";
        return 0;
        break;
    default:
        cout << "\nwrong format!\n";
        break;
    }
    return 0;
}