#include <iostream>
using namespace std;
int main()
{

    int n, i, j, pengecekan;
    bool prima;
    cout << "Masukkan banyak bilangan prima yang akan dicari : ";
    cin >> n;
    cout << "Cetak bilangan prima dari batasan yang dimasukan" << endl;

    for (i = 2; i <= n; i++)
    {
        prima = true;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prima = false; //tidak merupakan bilangan prima
            }
        }
        if (prima)
        {
            cout << i << " ";
        }
    }
}
