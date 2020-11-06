// Buatlah program mengenai looping (for/while/do while,pilih satu. Namun boleh lebih dari 1)
// dan di dalamnya terdapat continue, break, go to (boleh semuanya ada, tapi minimal terdapat 2)

#include <iostream>
using namespace std;

int main()
{
start:
    int k_kursi, b_kursi, j_kursi = 0;
    char yN;

    while (true)
    {
        cout << "Program menentukan jumlah kursi bioskop selama covid" << endl;
        cout << endl;
        cout << "Masukkan baris Kursi : ";
        cin >> b_kursi;
        cout << "Masukkan kolom kursi : ";
        cin >> k_kursi;
        cout << endl;
        cout << endl;

        if (b_kursi > 0 && k_kursi > 0)
        {
            break;
        }
        else
        {
            cout << "Variabel yang diinputkan salah" << endl;
            cout << endl;
            cout << endl;
        }
    }

    for (int i = 1; i <= k_kursi; i++)

    {
        for (int j = 1; j <= b_kursi; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 1)
                {
                    cout << "[X] ";
                }
                else
                {
                    cout << "[ ] ";
                    j_kursi++;
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "[X] ";
                }
                else
                {
                    cout << "[ ] ";
                    j_kursi++;
                }
            }
        }
        cout << endl;
    }
    cout << endl
         << endl;
    cout << "Jumlah Kursi yang tersedia adalah " << j_kursi;
    cout << endl;
    cout << endl;
    cout << "Ulangi Program ? [y/n] :";
    cin >> yN;
    if (yN == 'Y' || yN == 'y')
    {
        goto start;
    }
    else
    {
        cout << "Program selesai" << endl;
        cout << "========================" << endl;
    }
}