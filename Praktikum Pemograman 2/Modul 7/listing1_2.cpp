#include <stdio.h>
#include <iostream>
using namespace std;
// Deklarasi kelas-kelas
class Kotak
{
protected:
    int panjang, lebar;
    int luas, keliling;

public:
    Kotak(int Panjang, int Lebar);
    int ambil_panjang();
    int ambil_lebar();
    virtual void hitung(); // metode virtual
    void ambil(int &Luas, int &Keliling);
};
class Balok : public Kotak
{
private:
    int tinggi;
    int volume;

public:
    Balok(int Panjang, int Lebar, int Tinggi);
    int ambil_tinggi();
    virtual void hitung(); // metode virtual
    void ambil(int &Luas, int &Keliling, int &Volume);
};

// Definisi metode-metode kelas Kotak

Kotak::Kotak(int Panjang, int Lebar)

{
    panjang = Panjang;
    lebar = Lebar;
}
int Kotak::ambil_panjang()
{
    return panjang;
}

int Kotak::ambil_lebar()
{
    return lebar;
}
void Kotak::hitung()
{
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
}

void Kotak::ambil(int &Luas, int &Keliling)
{
    Luas = luas;
    Keliling = keliling;
}

// Definisi metode-metode kelas Balok

Balok::Balok(int Panjang, int Lebar, int Tinggi) : Kotak(Panjang, Lebar)
{
    tinggi = Tinggi;
}

int Balok::ambil_tinggi()
{
    return tinggi;
}
void Balok::hitung()
{
    Kotak::hitung();
    volume = panjang * lebar * tinggi;
}

void Balok::ambil(int &Luas, int &Keliling, int &Volume)
{
    Kotak::ambil(Luas, Keliling);
    Volume = volume;
}

// Program Utama
int main()
{
    Kotak A(12, 3);
    Balok B(12, 3, 8);
    cout << endl;
    cout << "Menghitung luas, keliling, dan volume bangun" << endl;
    cout << "==============================================="
         << endl;
    A.hitung();

    int l, k;
    A.ambil(l, k);
    cout << "Kotak sisi-sisinya : " << endl;
    cout << "Panjang = " << A.ambil_panjang() << endl;
    cout << "Lebar = " << A.ambil_lebar() << endl;
    cout << "Memiliki luas " << l << " dan keliling " << k << endl
         << endl;

    int v;
    B.hitung();
    B.ambil(l, k, v);
    cout << "Balok dengan rusuk-rusuknya : " << endl;
    cout << "Panjang = " << B.ambil_panjang() << endl;
    cout << "Lebar = " << B.ambil_lebar() << endl;
    cout << "Tinggi = " << B.ambil_tinggi() << endl;
    cout << "Memiliki luas " << l << ", keliling " << k << ", dan volume " << v << endl;
    cout << endl;
}