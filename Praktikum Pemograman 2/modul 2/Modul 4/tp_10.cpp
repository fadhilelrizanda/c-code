#include <iostream>
using namespace std;
long rekursiffaktorial(int a);

int main()
{
    int angka;
    cout << "Masukan Angka yang akan difaktorialkan : ";
    cin >> angka;
    cout << angka << "! = " << rekursiffaktorial(angka) << endl;
}

long rekursiffaktorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * rekursiffaktorial(a - 1);
    }
}