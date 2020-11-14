// Program Struktur & Pointer
#include <iostream>
using namespace std;

struct number
{
    int value;
} one, two, three;

int formula(int &i, int &o, int &p)
{
    int r;
    r = (i + o) * p;
    return (r);
}

int main()
{
    int *px, x, y;
    cout << "Insert your number with three step..!" << endl;
    cout << "number 1 = ";
    cin >> one.value;
    cout << "number 2 = ";
    cin >> two.value;
    cout << "number 3 = ";
    cin >> three.value;
    cout << endl;
    x = formula(one.value, two.value, three.value);
    px = &x;
    y = *px;
    cout << "The address of x = " << &x << endl;
    cout << "Content of px = " << px << endl;
    cout << "Content of x = " << x << endl;
    cout << "The value in the px = " << *px << endl;
    cout << "The value of y = " << y << endl;
    system("PAUSE");
    return 0;
}