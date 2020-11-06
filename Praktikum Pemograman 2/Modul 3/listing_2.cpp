#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    float jumlah = 0;
    float rata = 0, nilai;
    char a;
    cout << "Tekan 0 untuk menghentikan program" << endl;

    while (1)
    {
        cout << "nilai ke-" << i << " = ";
        cin >> nilai;
        if (nilai >= 10)
        {

            cout << "Nilai diabaikan" << endl;
            continue;
        }
        if (nilai == 0)
        {

            break;
        }
        i++;
        jumlah += nilai;
    }

    rata = jumlah / i;
    cout << "Jumlah nilai = " << jumlah << endl;
    cout << "Rata-rata = " << rata << endl;
}