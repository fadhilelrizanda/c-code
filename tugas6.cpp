#include <iostream>
using namespace std;

void watermark();
void line();
void inputValue();
void repeat();
float luasPersegiPanjang(float panjang, float lebar);

float panjang, lebar, hasil;
char yN;
bool rep;
int main()
{
mulai:
    line();
    cout << "Program menghitung Luas Persegi Panjang" << endl;
    inputValue();
    hasil = luasPersegiPanjang(panjang, lebar);
    cout << "Luas persegi panjang adalah : " << hasil << endl;
    cout << endl;
    repeat();
    if (rep)
    {
        goto mulai;
    }
    watermark();
}

void line()
{
    cout << "================================" << endl;
}

void inputValue()
{
    cout << "Masukkan Panjang dan lebar" << endl;
    line();
    cout << "Panjang : ";
    cin >> panjang;
    cout << "lebar : ";
    cin >> lebar;
}

float luasPersegiPanjang(float panjang, float lebar)
{
    return panjang * lebar;
}

void repeat()
{
    line();
    cout << "Ulangi program y/n?";
    cin >> yN;
    if (yN == 'y')
    {
        system("clear");
        rep = true;
    }
    else
    {
        rep = false;
    }
}

void watermark()
{
    cout << "**************************************" << endl;
    cout << "********By Fadhil Elrizanda**********" << endl;
    cout << "**************************************" << endl;
}