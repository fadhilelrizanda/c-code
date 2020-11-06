#include <iostream>
using namespace std;

// kelompok 8 :
// Program pengisian data nilai-nilai
//  mahasiswa lengkap dari nilai absen, kuis, uts,
//   uas, dan akumulasi nilai dalam bentuk angka dan
//   pengelompokkan nilai berdasarkan huru
int main()
{
    int i = 0;
    int j;
    int nilai[100];
    int nim_masuk;
    int nim[6] = {2034, 1003, 1001, 1004, 3012, 1002};
    string nama[6] = {"fadhil", "siska", "tiara", "yani", "nabila", "rama"};

    cout << "Memasukkan nilai nim : ";
    cin >> nim_masuk;

    while (true)
    {
        if (nim[i] == nim_masuk)
        {
            j = i;
            break;
        }
        i++;
    }

    cout << "Nama Adalah " << nama[j];

    // while (true)
    // {
    //     cout << "Masukkan nilai [" << i + 1 << "] : ";
    //     cin >> nilai[i];

    //     if (nilai[i] == 0)
    //     {
    //         break;
    //     }
    //     i++;
    // }
}