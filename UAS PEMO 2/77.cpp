#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[100];
    cout << "Masukkan sebuah kalimat :";
    cin >> a;
    cout << "Panjang string tersebut adalah " << strlen(a) << endl;
}