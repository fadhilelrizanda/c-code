#include <iostream>
using namespace std;

void genap(int a);
int main()
{
    int nomor, angka;
    cout << "Masukkan angka" << endl;
    cin >> angka;
    genap(angka);
}
void genap(int a)
{
    for (int i = 0; i < a; i++)
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