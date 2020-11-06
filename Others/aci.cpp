#include <iostream>
#include <conio.h>
using namespace std;

long int faktorial(int a);

int main()
{
	int x, bil, n, hasil;
	long int HasilFaktorial;
	int i, y;
	int matriks_A[2][2] = {}, matriks_B[2][2] = {}, matriks_C[2][2] = {};
	char ulang;

	cout << "Masukan Nilai X = ";
	cin >> x;
	cout << "Nilai Awal : " << x << endl;

	x = x >> 1;
	cout << "Hasil dari Geser 1 Bit Ke Kanan = " << x << endl;

	cout << "n = ";
	cin >> n;

	cout << "n! = " << faktorial(n) << endl;

	cout << "\nPenjumlahan 2 Matriks Ordo 2x2 \n\n";
	do
	{
		//Input data matriks A
		cout << "\n PENGISIAN MATRIKS A";
		cout << "\nData matriks A \n";
		for (i = 0; i < 2; i++)
		{
			for (y = 0; y < 2; y++)
			{
				cout << "Masukan baris ke " << i + 1 << " kolom ke " << y + 1 << " : ";
				cin >> matriks_A[i][y];
			}
		}

		//Input data matriks B
		cout << "\n PENGISIAN MATRIKS B";
		cout << "\nData matriks B \n";
		for (i = 0; i < 2; i++)
		{
			for (y = 0; y < 2; y++)
			{
				cout << "Masukan baris ke " << i + 1 << " kolom ke " << y + 1 << " : ";
				cin >> matriks_B[i][y];
			}
		}

		//Output hasil penjumlahan Matriks A + Matriks B
		cout << "\n======== HASIL PENJUMLAHAN A + B ========";
		cout << "\nMatriks A + Matriks B : " << endl
			 << endl;
		for (i = 0; i < 2; i++)
		{
			for (y = 0; y < 2; y++)
			{
				matriks_C[i][x] = matriks_A[i][y] + matriks_B[i][y];
			}
			cout << endl;
		}
		cout << "Menampilkan matriks" << endl;
		for (i = 0; i < 2; i++)
		{
			for (y = 0; y < 2; y++)
			{
				cout << matriks_C[i][x] << " ";
			}
			cout << endl;
		}
		cout << "\n.BILA INGIN MELAKUKAN PERHITUNGAN LAGI++.\n";
		cout << "\nHitung lagi ? [Y/T] : ";
		cin >> ulang;
	} while (ulang == 'Y');
	cout << "\n\nTerima Kasih\n\n";
	getch();
}

long int faktorial(int a)
{
	int hasil = 1;
	for (int bil = a; bil >= 1; bil--)
	{
		hasil = hasil * bil;
	}
	return hasil;
}