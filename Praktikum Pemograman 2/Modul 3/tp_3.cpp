#include <iostream>
using namespace std;

int main()
{
    int angka, i = 1;
    cout << " Program menentukan  deret angka genap : " << endl;
    cout << "Masukkan angka";
    cin >> angka;
    for (int i = 1; i <= angka; i++)
    {
        if (i % 2 == 0)
        {
            cout << i;
        }
        else
        {
            cout << " ";
        }
    }
}