#include <iostream>
using namespace std;

int main()
{
    int panjang;
    int lebar;
    int tinggi;
    int luas;
    cout << "Masukkan panjang balok : ";
    cin >> panjang;
    cout << "Masukkan panjang lebar : ";
    cin >> lebar;
    cout << "Masukkan panjang tinggi : ";
    cin >> tinggi;
    cout << "Luas Permukaan Balok : " << 2 * (panjang * lebar) + 2 * (panjang * tinggi) + 2 * (lebar * tinggi) << endl;
}