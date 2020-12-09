#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan angka yang akan di cek : ";
    cin >> angka;
    if (angka % 2 == 0)
    {
        cout << angka << " Merupakan bilangan genap " << endl;
    }
    else
    {
        cout << angka << " Merupakan bilangan ganjil " << endl;
    }
}