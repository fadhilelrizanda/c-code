// Program nested if Condition
#include <iostream>
using namespace std;
int main()
{
    int umur;
    cout << "Masukkan Umur Anda = ";
    cin >> umur;
    if (umur < 20)
    {
        if (umur < 11 && umur > 1)
        {
            cout << "Anak-anak";
        }
        else if (umur >= 11)
        {
            cout << "remaja";
        }
        else
        {
            cout << "Bayi";
        }
    }
    if (umur >= 20)
    {
        if (umur >= 60)
        {
            cout << "Lanjut Usia";
        }
        else
        {
            cout << "Dewasa";
        }
    }