#include <iostream>
using namespace std;

int main()
{
    int jumlah = 0;
    for (int i = 0; i < 5; i++)
    {
        jumlah = i + jumlah;
    }
    cout << "Jumlah : " << jumlah << endl;
}