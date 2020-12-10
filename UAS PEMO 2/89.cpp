#include <iostream>
using namespace std;

int main()
{
    int nilai[100] = {10, 20, 30, 100, 101};
    int max = nilai[0];
    int min = nilai[0];

    for (int i = 0; i < 5; i++)
    {
        cout << nilai[i] << endl;
        if (nilai[i] >= max)
        {
            max = nilai[i];
        }
        if (nilai[i] <= min)
        {
            min = nilai[i];
        }
    }

    cout << "Nilai maksimum : " << max << endl;
    cout << "Nilai minimum : " << min << endl;
    cout << endl;
    cout << endl;
    cout << "Fadhil Elrizanda" << endl;
    cout << "1910952034" << endl;
    cout << "Pemograman 2 TE B" << endl;
}