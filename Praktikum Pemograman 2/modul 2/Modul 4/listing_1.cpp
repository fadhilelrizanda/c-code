// Prototype Functions
#include <iostream>
using namespace std;
int perkalian(int a, int b);
int main()
{
    int z = 5;
    int y = 6;
    cout << perkalian(y, z);
    return 0;
}

int perkalian(int a, int b)
{
    a = a * 3;
    b = b * 3;
    int r;
    r = a * b;
    return (r);
}