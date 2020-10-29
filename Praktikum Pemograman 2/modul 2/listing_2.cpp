// Program else if Condition
#include <iostream>
using namespace std;
int main()
{
    char nilai;

    cout << "Masukkan Nilai Anda (A - E) = ";
    cin >> nilai;
    cout << "nilai awal=" << nilai << endl;
    if ((int)nilai == 65)
    {

        cout << "Sangat Memuaskan";
    }
    else if ((int)nilai > 65 && (int)nilai <= 67)
    {
        cout << "Cukup";
    }
    else if ((int)nilai > 67 && (int)nilai <= 69)
    {
        cout << "Kurang Memuaskan";
    }
    else
    {
        cout << "Nilai Yang Anda Masukan Salah";
    }
    cout << endl
         << "nilai akhir=" << (int)nilai << endl;
}