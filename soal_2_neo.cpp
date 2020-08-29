#include <iostream>
using namespace std;

int matrix1[3][3][3];
int matrix2[3][3][3];
int hasil[3][3][3];
int main()
{
    cout << "Masukkan Nilai Matrix 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << "Masukkan Nilai matriks1 [" << i << "][" << j << "][" << k << "]";
                cin >> matrix1[i][j][k];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << "Masukkan Nilai matriks2 [" << i << "][" << j << "][" << k << "] : ";
                cin >> matrix2[i][j][k];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                hasil[i][j][k] = matrix1[i][j][k] + matrix2[i][j][k];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                cout << " Nilai hasil matriks [" << i << "][" << j << "][" << k << "] : " << hasil[i][j][k] << endl;
            }
        }
    }
}