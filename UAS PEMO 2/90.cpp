#include <iostream>
using namespace std;

int main()
{
    int angka[100] = {9, 11, 2, 39, 1, 0, 4, 10};
    cout << "Angka lebih besar dari 10 " << endl;
    for (int i = 0; i < 8; i++)
    {
        if (angka[i] > 10)
        {
            cout << angka[i] << " ";
        }
    }
    cout << endl;
}