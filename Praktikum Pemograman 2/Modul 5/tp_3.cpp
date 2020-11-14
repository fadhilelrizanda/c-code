#include <iostream>
using namespace std;

int main()
{
    int nilai_saya;
    int *p_nilai_saya;
    p_nilai_saya = &nilai_saya;
    nilai_saya = 80;
    cout << "Nilai saya adalah : " << nilai_saya << endl;
    cout << "Nilai saya dari pointer" << *p_nilai_saya << endl;
    cout << "Alamat nilai saya " << &nilai_saya << endl;
    cout << "Alamat pointer : " << p_nilai_saya << endl;
    // cout << endl;
    // cout << "Nilai setelah remedi : " << endl;
    // *p_nilai_saya = *p_nilai_saya + 10;
    // cout << "Nilai saya adalah : " << nilai_saya << endl;
    // cout << "Nilai saya dari pointer" << *p_nilai_saya << endl;
}