// OOP Sederhana
#include <iostream>
using namespace std;
class lingkaran
{
private:
    float radius;
    float pi = 3.14;

private:
    lingkaran(float r)
    {
        radius = r;
    }
    float luas()
    {
        return (pi * radius * radius);
    }
    float keliling()
    {
        return (2 * pi * radius);
    }
};
int main()
{
    lingkaran lingkaran1(12);
    cout << "Luas :" << lingkaran1.luas() << endl;
    cout << "keliling :" << lingkaran1.keliling() << endl;
    return 0;
}