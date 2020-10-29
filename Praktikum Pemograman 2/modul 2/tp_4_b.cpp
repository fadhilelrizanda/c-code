#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    string kondisi;
    cout << "Program menentukan bilangan genap atau ganji " << endl;
    cout << "=============================================" << endl;
    cout << endl;
    cout << "Masukkan bilangan yang ingin ditentukan ganjil/genap : ";
    cin >> bilangan;
    kondisi = (bilangan % 2 == 0) ? "Genap" : "Ganjil";
    cout << bilangan << " Merupakan bilangan " << kondisi << endl;

    cout << "===================================================" << endl;
    cout << "================ Fadhil Elrizanda =================" << endl;
    cout << "================ Kelompok 1 =======================" << endl;
    cout << "================ Modul 1 ==========================" << endl;
    cout << "================ 1910952034 =======================" << endl;
    cout << "===================================================" << endl;
    system("PAUSE");
}