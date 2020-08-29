#include <iostream>
using namespace std;
int tinggi[10];
int hasil;
int n;
int main()
{
    cout << "Masukkan Banyak Data : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Tinggi ke " << i + 1 << " : ";
        cin >> tinggi[i];
    }
    for (int i = 0; i < n; i++)
    {
        hasil = hasil + tinggi[i];
    }
    cout << "Hasil rata-rata" << hasil / n;
}