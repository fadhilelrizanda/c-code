//Program pemakaian larik dimensi dua //Nama File lulus.cpp
#include <iostream>
using namespace std;
int jurusan;
int tahun;
int main()
{
    int data_lulus[3][4]; //deklarasi larikk dimensi dengan tiga elemen baris dan int tahun, jurusan;    //empat elemen kolom

    data_lulus[0][0] = 35; //mengisi larik
    data_lulus[0][1] = 45;
    data_lulus[0][2] = 90;
    data_lulus[0][3] = 120;
    data_lulus[1][0] = 100;
    data_lulus[1][1] = 110;
    data_lulus[1][2] = 70;
    data_lulus[1][3] = 101;
    data_lulus[2][0] = 10;
    data_lulus[2][1] = 15;
    data_lulus[2][2] = 20;
    data_lulus[2][3] = 17;
    while (1)
    {
        cout << "Jurusan (0 = T I, 1 = MI, 2 = TK) ";
        cin >> jurusan;
        if ((jurusan == 0) || (jurusan == 1) || (jurusan == 2))
            break;
    }
    while (1)
    {
        cout << "tahun (1992 - 1995); ";
        cin >> tahun;
        if ((tahun >= 1992) && (tahun <= 1995))
        {
            tahun -= 1992;
            break;
        }
    }
    cout << "jumlah yang lulus = " << data_lulus[jurusan][tahun] << endl;
}
