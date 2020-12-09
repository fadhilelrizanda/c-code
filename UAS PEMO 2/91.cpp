#include <iostream>
using namespace std;

int main()
{
    int angka[100] = {9, 3, 2, 10, 6, 5};
    cout << "Angka kecil dari 6 " << endl;
    for (int i = 0; i < 8; i++)
    {
        if (angka[i] < 6)
        {
            cout << angka[i] << " ";
        }
    }
    cout << endl;
}