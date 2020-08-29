#include <iostream>
using namespace std;

//var
int baris;
int tinggi;

int main()
{
    cout << "Program membuat segitiga" << endl;
    cout << "Masukkan Baris : ";
    cin >> baris;
    cout << "Masukkan Tinggi : ";
    cin >> tinggi;
    for (int i = 1; i <= tinggi; i++)
    {
        for (int k = tinggi - i; k > 0; k--)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}