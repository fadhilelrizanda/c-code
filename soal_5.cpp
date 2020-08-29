
#include <iostream>

using namespace std;
int n = 10;
int A[10];
int i, maximum, minimum, total, rata;
int main()
{

    cout << "Masukkan Nilai" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai ke - " << i + 1 << " : ";
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        total = total + A[i];
    }
    maximum = A[0];
    minimum = A[0];
    for (i = 1; i < n; i++)
    {
        if (A[i] > maximum)
        {
            maximum = A[i];
        }
        if (A[i] < minimum)
        {
            minimum = A[i];
        }
    }
    cout << "Bilangan terbesar = " << maximum << endl;
    cout << "Bilangan Terkecil = " << minimum << endl;
    cout << "total bilangan = " << total << endl;
    cout << "Rata- rata = " << total / n;
}