#include <iostream>
using namespace std;
int main()
{
    float hasil[10] = {1, 2, 3, 4, 5, 0.2};
    for (int i = 0; i <= 10; i++)
    {
        cout << hasil[i];
        if (hasil[i] == 0)
        {
            break;
        }
    }
}