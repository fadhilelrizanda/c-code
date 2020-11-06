#include <iostream>
#include <math.h>
using namespace std;
float s;
int range(float v, float t, float a)
{
    s = (v * t) - ((0.5 * a) * pow(t, 2));
    return (s);
}

int bil(float x)
{
    x = s;
    if (s < 0)
        cout << "Nilai s merupakan bilangan negatif" << endl;
    else
        cout << "Nilai s merupakan bilangan positif" << endl;
    return 0;
}

int main()
{
    float r, u, nilai[3];
    cout << "Masukkan nilai pertama = ";
    cin >> nilai[0];
    cout << endl;
    cout << "Masukkan nilai kedua = ";
    cin >> nilai[1];
    cout << endl;
    cout << "Masukkan nilai ketiga = ";
    cin >> nilai[2];
    cout << endl;

    r = range(nilai[0], nilai[1], nilai[2]);
    cout << "Nilai dari s adalah : " << r << endl;
    u = bil(r);
    cout << endl
         << endl;
    //system ("pause");
    return 0;
}