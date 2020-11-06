//Program metric 3x4
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int metricA[100][100];

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            cout << "A " << i << "," << j << " = ";
            cin >>
                metricA[i][j];
        }
    }
}
