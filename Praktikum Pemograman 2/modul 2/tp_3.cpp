#include <iostream>
using namespace std;

int main()
{
    char karakter_1, karakter_2, karakter_3;
    cout << "Program mengurutkan 3 huruf yang diinputkan" << endl;
    cout << "=============================================" << endl;
    cout << endl;
    cout << "Masukkan Huruf pertama :";
    cin >> karakter_1;
    cout << endl;
    cout << "Masukkan Huruf kedua: ";
    cin >> karakter_2;
    cout << endl;
    cout << "Masukkan Huruf ketiga: ";
    cin >> karakter_3;
    cout << endl;

    if (karakter_1 > karakter_2 && karakter_1 > karakter_3)
    {
        if (karakter_2 > karakter_3)
        {
            cout << "Urutannya adalah " << karakter_3 << " " << karakter_2 << " " << karakter_1 << endl;
        }
        else
        {
            cout << "Urutannya adalah " << karakter_2 << " " << karakter_3 << " " << karakter_1 << endl;
        }
    }
    else if (karakter_2 > karakter_3 && karakter_2 > karakter_1)
    {
        if (karakter_3 > karakter_1)
        {
            cout << "Urutannya adalah " << karakter_1 << " " << karakter_3 << " " << karakter_2 << endl;
        }
        else
        {
            cout << "Urutannya adalah " << karakter_3 << " " << karakter_1 << " " << karakter_2 << endl;
        }
    }
    else
    {
        if (karakter_3 > karakter_2 && karakter_3 > karakter_1)
        {
            if (karakter_1 > karakter_2)
            {
                cout << "Urutannya adalah " << karakter_2 << " " << karakter_1 << " " << karakter_3 << endl;
            }
            else
            {
                cout << "Urutannya adalah " << karakter_1 << " " << karakter_2 << " " << karakter_3 << endl;
            }
        }
    }

    cout << endl;
    cout << "===================================================" << endl;
    cout << "================ Fadhil Elrizanda =================" << endl;
    cout << "================ Kelompok 1 =======================" << endl;
    cout << "================ Modul 1 ==========================" << endl;
    cout << "================ 1910952034 =======================" << endl;
    cout << "===================================================" << endl;
    system("PAUSE");
}
