#include <iostream>
using namespace std;

void matrixPlus();
void matrixMin();
void matrixMult();
void error();
void line();
void fillMatrik();
void tampilkanMatrik();
void watermark();

int choice;
int jenisMatrix;
int matrix1[10], matrix2[10], matrix1_2[10][10], matrix2_2[10][10], hasil[10][10];
int nMatrix, baris, kolom, jumlah;
bool dimensi1;
char yN;
int main()
{
mulai:
    line();
    cout << "Tentukan Jenis Matrix" << endl;
    line();
    cout << "[1]1 dimensi\n[2]2 dimensi" << endl;
    cin >> jenisMatrix;
    switch (jenisMatrix)
    {
    case 1:
        dimensi1 = true;
        break;
    case 2:
        dimensi1 = false;
        break;
    default:
        error();
        break;
    }

    line();
    if (dimensi1)
    {
        cout << "Masukkan jumlah matriks (max 10) : ";
        cin >> nMatrix;
    }
    else
    {
        cout << "Masukkan jumlah baris : ";
        cin >> baris;
        cout << "Masukkan Jumlah kolom : ";
        cin >> kolom;
    }

    line();
    fillMatrik();
    cout << endl;
    tampilkanMatrik();
    line();
    cout << "Tentukan Program yang diinginkan" << endl;
    cout << "[1]Pertambahan Matrix\n[2]Pengurangan Matrix" << endl;
    if (!dimensi1)
    {
        cout << "[3]Perkalian Matrix";
    }
    cout << endl;
    line();
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        matrixPlus();
        break;
    case 2:
        matrixMin();
        break;
    case 3:
        matrixMult();
        break;

    default:
        error();
        break;
    }
    cout << "Ulangi program y/n? ";
    cin >> yN;
    if (yN == 'y')
    {
        goto mulai;
        system("clear");
    }
}

void fillMatrik()
{
    if (dimensi1)
    {
        for (int i = 0; i < nMatrix; i++)
        {
            cout << "Masukkan nilai matrik 1 [" << i << "] : " << endl;
            cin >> matrix1[i];
        }
        for (int i = 0; i < nMatrix; i++)
        {

            cout << "Masukkan nilai matrik 2 ke [" << i << "] : " << endl;
            cin >> matrix2[i];
        }
    }
    else
    {
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << "Masukkan nilai matriks 1 [" << i << "]"
                     << "[" << j << "]";
                cin >> matrix1_2[i][j];
            }
        }
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << "Masukkan nilai matriks 2 [" << i << "]"
                     << "[" << j << "]";
                cin >> matrix2_2[i][j];
            }
        }
    }
}

void tampilkanMatrik()
{
    if (dimensi1)
    {

        cout << "Matrik 1" << endl;
        cout << "[ ";
        for (int i = 0; i < nMatrix; i++)
        {
            cout << matrix1[i] << " ";
        }
        cout << "]" << endl;
        cout << "Matrik 2" << endl;
        cout << "[ ";
        for (int i = 0; i < nMatrix; i++)
        {
            cout << matrix2[i] << " ";
        }
        cout << "]" << endl;
    }
    else
    {
        cout << "Matrik 1" << endl;
        for (int i = 0; i < baris; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom; j++)
            {
                cout << matrix1_2[i][j] << " ";
            }
            cout << " | " << endl;
        }
        cout << "Matrik 2" << endl;
        for (int i = 0; i < baris; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom; j++)
            {
                cout << matrix2_2[i][j] << " ";
            }
            cout << " | " << endl;
        }
    }
}

void error()
{
    cout << "404 Not found" << endl;
}

void matrixPlus()
{
    if (dimensi1)
    {
        cout << "Matrik gabungan adalah " << endl;
        cout << "[ ";
        for (int i = 0; i < nMatrix; i++)
        {
            cout << matrix1[i] + matrix2[i] << " ";
        }
        cout << "]" << endl;
    }
    else
    {
        cout << "Matrik gabungan adalah " << endl;

        for (int i = 0; i < baris; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom; j++)
            {
                cout << matrix1_2[i][j] + matrix2_2[i][j] << " ";
            }
            cout << " |" << endl;
        }
    }
}
void matrixMult()
{
    int baris1, baris2, kolom1, kolom2;
    baris1 = baris;
    baris2 = baris;
    kolom1 = kolom;
    kolom2 = kolom;
    if (!dimensi1)
    {

        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom2; j++)
            {
                for (int k = 0; k < baris2; k++)
                {
                    jumlah = jumlah + matrix1_2[i][k] * matrix2_2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }
        cout << "Hasil perkalian matriks:" << endl;
        line();

        for (int i = 0; i < baris1; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom1; j++)
            {
                cout << hasil[i][j] << " ";
            }
            cout << " |" << endl;
        }
    }
}

void matrixMin()
{
    if (dimensi1)
    {
        cout << "Matrik gabungan adalah " << endl;
        cout << "[ ";
        for (int i = 0; i < nMatrix; i++)
        {
            cout << matrix1[i] - matrix2[i] << " ";
        }
        cout << "]" << endl;
    }
    else
    {
        cout << "Matrik gabungan adalah " << endl;

        for (int i = 0; i < baris; i++)
        {
            cout << "| ";
            for (int j = 0; j < kolom; j++)
            {
                cout << matrix1_2[i][j] + matrix2_2[i][j] << " ";
            }
            cout << " |" << endl;
        }
    }
}
void line()
{
    cout << "===================================================" << endl;
}

void watermark()
{
    cout << "-----------------------------------" << endl;
    cout << "Fadhil Elrizanda" << endl;
    cout << "-----------------------------------" << endl;
}