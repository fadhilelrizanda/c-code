#include <iostream>
using namespace std;

int main()
{
    int matriks_3_A[3][3], matriks_3_B[3][3], jumlah[3][3], pengurangan[3][3];
    cout << "Program memasukkan nilai ke matriks 3x3" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukkan nilai array matriks A [" << i << "][" << j << "] : ";
            cin >> matriks_3_A[i][j];
            cout << "Masukkan nilai array matriks B [" << i << "][" << j << "] : ";
            cin >> matriks_3_B[i][j];
            jumlah[i][j] = matriks_3_A[i][j] + matriks_3_B[i][j];
            pengurangan[i][j] = matriks_3_A[i][j] - matriks_3_B[i][j];
        }
    }
    cout << "Nilai matrisk tersebut adalah " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Nilai matriks A [" << i << "][" << j << "] : " << matriks_3_A[i][j] << endl;
            cout << "Nilai matriks B [" << i << "][" << j << "] : " << matriks_3_B[i][j] << endl;
            cout << "Nilai penjumlahan matriks  [" << i << "][" << j << "] : " << jumlah[i][j] << endl;
            cout << "Nilai pengurangan matriks  [" << i << "][" << j << "] : " << pengurangan[i][j] << endl;
        }
    }
}