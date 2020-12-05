#include <iostream>
using namespace std;

class mahasiswa //Kelas Induk
{
protected:
	struct data
	{
		char nama[50][50];
		char nim[50][50];
		float nilai1[50], nilai2[50], nilai3[50], nilai4[50];
		float total[100];
		float jum;

	} mhs;
};

class mahasiswa_namanim : public mahasiswa //Kelas anak
{
private:
public:
	void namanim() //fungsi
	{
		cout << " Masukkan Nama Mahasiswa : ";
		cin >> mhs.nama[50][50];
		cout << " Masukkan NIM Mahasiswa  : ";
		cin >> mhs.nim[50][50];
	}
};

class mahasiswa_khdrtgs : public mahasiswa //Kelas anak
{
private:
public:
	void khdrtgs() //fungsi
	{
		cout << " Masukkan Nilai Kehadiran: ";
		cin >> mhs.nilai1[50];
		cout << " Masukkan Nilai Tugas    : ";
		cin >> mhs.nilai2[50];
	}
};

class mahasiswa_utsuas : public mahasiswa //Kelas anak
{
private:
public:
	void utsuas() //fungsi
	{
		cout << " Masukkan Nilai UTS      : ";
		cin >> mhs.nilai3[50];
		cout << " Masukkan Nilai UAS      : ";
		cin >> mhs.nilai4[50];
	}
};

class mahasiswa_jmlh : public mahasiswa //Kelas anak
{
private:
public:
	void jmlh()
	{ //fungsi

		cout << " Masukkan Jumlah Mahasiswa: ";
		cin >> mhs.jum;
		cout << "\n============================== " << endl;

		for (int i = 1; i <= mhs.jum; i++)
		{
			cout << " Masukkan Nama Mahasiswa : ";
			cin >> mhs.nama[i];
			cout << " Masukkan NIM Mahasiswa  : ";
			cin >> mhs.nim[i];
			cout << " Masukkan Nilai Kehadiran: ";
			cin >> mhs.nilai1[i];
			cout << " Masukkan Nilai Tugas    : ";
			cin >> mhs.nilai2[i];
			cout << " Masukkan Nilai UTS      : ";
			cin >> mhs.nilai3[i];
			cout << " Masukkan Nilai UAS      : ";
			cin >> mhs.nilai4[i];
			mhs.total[i] = (mhs.nilai1[i] * 0.1 + mhs.nilai2[i] * 0.1 + mhs.nilai3[i] * 0.4 + mhs.nilai4[i] * 0.4);
			cout << endl;
			cout << " Total Nilai  : " << mhs.total[i] << endl;
			if (mhs.total[i] >= 90 && mhs.total[i] <= 100)
			{
				cout << " Grade Nilai  : A" << endl;
			}
			else if (mhs.total[i] >= 80 && mhs.total[i] <= 89)
			{
				cout << " Grade Nilai  : B" << endl;
			}
			else if (mhs.total[i] >= 70 && mhs.total[i] <= 79)
			{
				cout << " Grade Nilai  : C" << endl;
			}
			else if (mhs.total[i] >= 50 && mhs.total[i] <= 69)
			{
				cout << " Grade Nilai  : D" << endl;
			}
			else if (mhs.total[i] >= 0 && mhs.total[i] <= 49)
			{
				cout << " Grade Nilai  : E" << endl;
			}
			cout << "==============================" << endl;
			cout << endl;
		}
		cout << "\t Rekap Nilai \t" << endl;
		for (int j = 1; j <= mhs.jum; j++)
		{
			cout << "No." << j << " "
				 << "Nama : " << mhs.nama[j] << " Nilai : " << mhs.total[j] << endl;
		}
	}

	void jmlh(string univeristas) //!
	{
		cout << "Jumlah mahasiswa " << univeristas << " : " << mhs.jum << endl;
	}
};

int main()
{
	char dsn[20];
	char matkul[20];
	mahasiswa_namanim mn;
	mahasiswa_khdrtgs mk;
	mahasiswa_utsuas mu;
	mahasiswa_jmlh mj;
	cout << "=================================== " << endl;
	cout << " Program Grade Nilai Mahasiswa " << endl;
	cout << "=================================== " << endl;
	cout << " Masukkan Nama Dosen Pengampu : ";
	cin >> dsn;
	cout << " Mata Kuliah                  : ";
	cin >> matkul;
	cout << "\n =================================== " << endl
		 << endl;
	{
		mj.jmlh();
		cout << endl;
	}
	{
		mn.namanim();
		cout << endl;
	}
	{
		mk.khdrtgs();
		cout << endl;
	}
	{
		mu.utsuas();
		cout << endl;
	}

	mj.jmlh("Unand"); //!
	return 0;
}