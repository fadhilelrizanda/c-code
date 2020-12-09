#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c;
    a = 11.2;
    b = 22.65;
    c = a * b;
    cout << setprecision(1) << c << endl;
    cout << setprecision(2) << c << endl;
    cout << setprecision(3) << c << endl;
    cout << setprecision(4) << c << endl;
    cout << setprecision(5) << c << endl;
}