//Program menghitung suhu rata-rata
#include <iostream>
using namespace std;
const int JUM_DATA = 5;
int main()
{
    float suhu[JUM_DATA];
    float total;
    cout << "Masukkan data suhu " << endl;
    for (int i = 0; i < JUM_DATA; i++)
    {
        cout << i + 1 << " : ";
        cin >> suhu[i];
    }
    total = 0;
    for (int i = 0; i < JUM_DATA; i++)
        total += suhu[i];
    cout << "Suhu rata - rata = " << total / JUM_DATA << endl;
}