#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan nilai yang akan di cek : ";
    cin >> nilai;
    if (nilai > 0)
    {
        cout << "Bilangan positif" << endl;
    }
    else if (nilai < 0)
    {
        cout << "Bilangan negatif" << endl;
    }
    else if (nilai == 0)
    {
        cout << "Bilangan 0" << endl;
    }
    else
    {
        cout << "Tidak diketahui" << endl;
    }
}