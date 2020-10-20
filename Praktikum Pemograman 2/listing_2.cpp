#include <iostream>
using namespace std;
const double phi = 3.14;
int main()
{
    int r;
    cout << "Circle Rectangle" << endl;
    cout << "Enter the radius of the circle : ";
    cout << "enter phi :"; //! ditambah
    cin >> phi;  //! ditambah
    cin >> r;
    cout << "The Circle Rectangle is : " << phi * r * r << endl;
    cout << endl;
    system("PAUSE");
    return 0;
}