#include <iostream>
using namespace std;

float nilai_avg(float a, float b, float c);
string nilai_akhir(float avrg);

int main()
{
    int A, B, C, avg;
    cout << "Masukkan nilai A :";
    cin >> A;
    cout << "Masukkan nilai B :";
    cin >> B;
    cout << "Masukkan nilai C :";
    cin >> C;

    cout << "Nilai rata rata : " << nilai_avg(A, B, C) << endl;
    avg = nilai_avg(A, B, C);
    cout << "Deskripsi nilai " << nilai_akhir(avg) << endl;
}

float nilai_avg(float a, float b, float c)
{
    float rata_rata;
    rata_rata = (a + b + c) / 3;
    return rata_rata;
}

string nilai_akhir(float avrg)
{
    string desk_nilai;
    if (avrg < 30)
    {
        desk_nilai = "Nilai Kurang";
    }
    else if (avrg >= 30 && avrg <= 60)
    {
        desk_nilai = "Nilai Cukup";
    }
    else
    {
        desk_nilai = "Nilai Baik";
    }
    return desk_nilai;
}