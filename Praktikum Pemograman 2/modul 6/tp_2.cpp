#include <iostream>
using namespace std;

class Hello
{
public:
    int tanggal;
    int bulan;
    int tahun;
    Hello(int a, int b, int c)
    {
        cout << "Konstruktor dibuat" << endl;
        tanggal = a;
        bulan = b;
        tahun = c;
    }
    void panggil(string nama)
    {
        cout << "Hello nama saya " << nama << endl;
    }
    void tanggal_lahir()
    {
        cout << "Tanggal : " << tanggal << endl
             << "\n"
             << "Bulan : " << bulan << "\n"
             << "Tahun : " << tahun << endl;
    }
    ~Hello()
    {
        cout << "Destruktor dieksekusi" << endl;
    }
};

int main()
{
    // Hello fadhil;
    // fadhil.panggil("Fadhil Elrizanda");
    Hello fadhil(12, 11, 2000);
    fadhil.panggil("Fadhil");
    fadhil.tanggal_lahir();

    Hello elrizanda(11, 12, 2000);
    elrizanda.panggil("Elrizanda");
    elrizanda.tanggal_lahir();
}