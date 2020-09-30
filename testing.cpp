#include <iostream>
using namespace std;

int main()
{
    int d = 0;
    int _j = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            if (j == i)
            {
                _j = 1;
            }
            else
            {
                _j = j;
            }

            d = d + 4 * _j;
        }
    }
    cout << "Jumlah Total D adalah " << d << endl;
}