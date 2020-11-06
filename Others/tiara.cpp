#include <iostream>
using namespace std;
// kelompok 8 :
// Program pengisian data nilai-nilai
//  mahasiswa lengkap dari nilai absen, kuis, uts,
//   uas, dan akumulasi nilai dalam bentuk angka dan
//   pengelompokkan nilai berdasarkan huruf

int main()
{
    char nilai_huruf;
    int nilai_uas[10], absen[10], kuis[10], uts[10], nilai_akhir[10];
    cout << "Program menghitung pengisian " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Masukkan nilai UAS ke -" << i + 1 << " : ";
        cin >> nilai_uas[i];
        cout << endl;
        cout << "Masukkan nilai ke Absen -" << i + 1 << " : ";
        cin >> absen[i];
        cout << endl;
        cout << "Masukkan nilai ke Kuis -" << i + 1 << " : ";
        cin >> kuis[i];
        cout << "Masukkan nilai ke Uts -" << i + 1 << " : ";
        cout << endl;
        cin >> uts[i];
        cout << endl;
        nilai_akhir[i] = (nilai_uas[i] + absen[i] + uts[i] + kuis[i]) / 4;
    }
    for (int i = 0; i < 10; i++)
    {
        int nilai_akhir_mahasiswa = nilai_akhir[i];
        if (nilai_akhir_mahasiswa >= 80)
        {
            nilai_huruf = 'A';
        }
        else if (nilai_akhir_mahasiswa <= 80 && nilai_akhir_mahasiswa >= 70)
        {
            nilai_huruf = 'B';
        }
        else if (nilai_akhir_mahasiswa <= 70 && nilai_akhir_mahasiswa >= 60)
        {
            nilai_huruf = 'C';
        }
        else if (nilai_akhir_mahasiswa <= 60 && nilai_akhir_mahasiswa >= 0)
        {
            nilai_huruf = 'D';
        }
        else
        {
            nilai_huruf = 'E';
        }
        cout << "Nilai mahasiswa ke-" << i << " : " << nilai_huruf;
        cout << endl;
    }
}
