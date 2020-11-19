// OOP Sederhana
#include <iostream>
using namespace std;
class lingkaran
{
private:
    float radius;
    float pi = 3.14;

public:
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
    float rad;
    cout << "Masukkan Nilai radius lingkaran yang akan dicari : ";
    cin >> rad;
    lingkaran lingkaran1(rad);
    cout << "Luas :" << lingkaran1.luas() << endl;
    cout << "keliling :" << lingkaran1.keliling() << endl;
    return 0;
}