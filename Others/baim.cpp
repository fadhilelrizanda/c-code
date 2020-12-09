#include <iostream>
using namespace std;

struct data
{
    string nama[50];
    int nim[50];
    float nilai1[50], nilai2[50], nilai3[50], nilai4[50];
    float total[100];
    int jum;

} mhs;

class mahasiswa //Kelas Induk
{
public:
    mahasiswa()
    {
        cout << "konstruktor terpanggil" << endl;
    }

    ~mahasiswa()
    {
        cout << "destruktor terpanggil" << endl;
    }
};

class mahasiswa_namanim : public mahasiswa //Kelas anak
{

public:
    void namanim(int pars) //fungsi
    {
        cout << " Masukkan Nama Mahasiswa : ";
        cin >> mhs.nama[pars];
        cout << " Masukkan NIM Mahasiswa  : ";
        cin >> mhs.nim[pars];
    }
};

class mahasiswa_khdrtgs : public mahasiswa //Kelas anak
{

public:
    void khdrtgs(int pars) //fungsi
    {
        cout << " Masukkan Nilai Kehadiran: ";
        cin >> mhs.nilai1[pars];
        cout << " Masukkan Nilai Tugas    : ";
        cin >> mhs.nilai2[pars];
    }
};

class mahasiswa_utsuas : public mahasiswa //Kelas anak
{

public:
    void utsuas(int pars) //fungsi
    {
        cout << " Masukkan Nilai UTS      : ";
        cin >> mhs.nilai3[pars];
        cout << " Masukkan Nilai UAS      : ";
        cin >> mhs.nilai4[pars];
    }
};

class mahasiswa_jmlh : public mahasiswa, mahasiswa_namanim, mahasiswa_khdrtgs, mahasiswa_utsuas //Kelas anak
{

public:
    void jmlh()
    { //fungsi

        cout << " Masukkan Jumlah Mahasiswa: ";
        cin >> mhs.jum;
        cout << "\n============================== " << endl;

        for (int i = 1; i <= mhs.jum; i++)
        {
            namanim(i);
            khdrtgs(i);
            utsuas(i);

            mhs.total[i] = (mhs.nilai1[i] * 0.1 + mhs.nilai2[i] * 0.1 + mhs.nilai3[i] * 0.4 + mhs.nilai4[i] * 0.4);
            cout << endl;
            cout << " Total Nilai  : " << mhs.total[i] << endl;
            if (mhs.total[i] >= 90 && mhs.total[i] <= 100)
            {
                cout << " Grade Nilai  : A" << endl;
            }
            else if (mhs.total[i] >= 80 && mhs.total[i] <= 89)
            {
                cout << " Grade Nilai  : B" << endl;
            }
            else if (mhs.total[i] >= 70 && mhs.total[i] <= 79)
            {
                cout << " Grade Nilai  : C" << endl;
            }
            else if (mhs.total[i] >= 50 && mhs.total[i] <= 69)
            {
                cout << " Grade Nilai  : D" << endl;
            }
            else if (mhs.total[i] >= 0 && mhs.total[i] <= 49)
            {
                cout << " Grade Nilai  : E" << endl;
            }
            cout << "==============================" << endl;
            cout << endl;
        }
        cout << "\t Rekap Nilai \t" << endl;
        for (int j = 1; j <= mhs.jum; j++)
        {
            cout << "No." << j << " "
                 << "Nama : " << mhs.nama[j] << " Nilai : " << mhs.total[j] << endl;
        }
    }

    void jmlh(string univeristas) //!
    {
        cout << "Jumlah mahasiswa " << univeristas << " : " << mhs.jum << endl;
    }
};

int main()
{
    char dsn[20];
    char matkul[20];
    mahasiswa_jmlh mahasiswa;
    cout << "=================================== " << endl;
    cout << " Program Grade Nilai Mahasiswa " << endl;
    cout << "=================================== " << endl;
    cout << " Masukkan Nama Dosen Pengampu : ";
    cin >> dsn;
    cout << " Mata Kuliah                  : ";
    cin >> matkul;
    cout << "\n =================================== " << endl
         << endl;

    mahasiswa.jmlh();
    cout << endl;

    mahasiswa.jmlh("Unand"); //!
    return 0;
}