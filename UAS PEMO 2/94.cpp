#include <iostream>
using namespace std;

int main()
{
    int baris;
    cout << "Masukkan jumlah baris :";
    cin >> baris;
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << "Fadhil Elrizanda" << endl;
    cout << "1910952034" << endl;
    cout << "Pemograman 2 TE B" << endl;
}