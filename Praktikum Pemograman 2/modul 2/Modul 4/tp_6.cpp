#include <iostream>
using namespace std;

int penjumalahan(int a, int b);
int pengurangan(int a, int b);

int main()
{
    int a, b;
    cout << "Program penjumlahan sederhana dengan fungsi" << endl;
    cout << "Masukkan angka 1 : ";
    cin >> a;
    cout << "Masukkan angka 2 : ";
    cin >> b;
    cout << "Hasil penjumlahan kedua bilangan adalah " << penjumalahan(a, b) << endl;
    cout << "Hasil pengurangan kedua bilangan adalah " << pengurangan(a, b) << endl;
}

int penjumalahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}
