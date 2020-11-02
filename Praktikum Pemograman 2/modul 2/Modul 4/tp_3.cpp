#include <iostream>
using namespace std;

int main()
{
    int matriks_3[3][3];
    cout << "Program memasukkan nilai ke matriks 3x3" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan nilai array [" << i << "][" << j << "] : ";
            cin >> matriks_3[i][j];
        }
    }
    cout << "Nilai matrisk tersebut adalah " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Nilai matriks [" << i << "][" << j << "] : " << matriks_3[i][j] << endl;
        }
    }
}