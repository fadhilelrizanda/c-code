#include <iostream>

using namespace std;

int main()
{
    float max, min, nilai, jumlah, rerata;
    int nMahasiswa;
    string angkatan;
    int i = 0; // ditambahkan

    cout << "==========================================================\n";
    cout << "---------- Tugas Tambahan Praktikum Pemrograman ----------\n\n";
    cout << "\t    Program Pendataan Nilai Mahasiswa\n";
    cout << "==========================================================\n\n";

    cout << "Mata Kuliah      : ";
    cin >> angkatan;
    cout << "Jumlah Mahasiswa : ";
    cin >> nMahasiswa;

    do                                                    // ditambahkan
    {                                                     // ditambahkan
        cout << "Nilai mahasiswa ke-" << i + 1 << "  : "; // ditambahkan
        cin >> nilai;                                     // ditambahkan

        jumlah += nilai;              // ditambahkan
        rerata = jumlah / nMahasiswa; // ditambahkan

        if (min > nilai) // ditambahkan
        {
            min = nilai; // ditambahkan
        }
        else if (max < nilai) // ditambahkan
        {
            max = nilai; // ditambahkan
        }
        i++;
    } while (i < nMahasiswa); // ditambahkan

    
    cout << "\nJumlah nilai mahasiswa " << angkatan << " adalah : " << jumlah;
    cout << " dengan rata-rata nilai : " << rerata;
    cout << "\nNilai max = " << max;
    cout << "\nNilai min = " << min;

    return 0;
}