// Fadhil Elrizanda
// 1910952034
// Tugas Tambahan Modul 2
// Kelompok 10
// 26 Oktober 2020

// Kelompok 10 :
// Buatlah program dalam bentuk menu yang bisa menghitung luas & keliling bangun datar dan menghitung
// luas permukaan & volume bangun ruang, yang mana user dapat
// memilih bangun datar / bangun ruang mana yang ingin dicari.

#include <iostream>
using namespace std;

int main()
{
    int pilihan, bangun;
    float panjang, lebar, jari_jari, luas, keliling, luas_permukaan, volume_bangun, tinggi, sisi_a, sisi_b, alas, sisi;
    cout << "Program menghitung luas dan keliling bangun datar dan menghitung luas permukaan dan volume bangun ruang" << endl;
    cout << "===========================================================================================================" << endl;
    cout << endl;
    cout << "Pilih bangun yang diinginkan\n[1]Bangun Datar\n[2]Bangun Ruang" << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> bangun;
    switch (bangun)
    {
    case 1:
        cout << "Anda memilih bangun datar" << endl;
        cout << "Bangun datar\n[1]Persegi\n[2]Persegi Panjang\n[3]Segitiga\n[4]Lingkaran" << endl;
        cout << "===========================================================================================================" << endl;
        cout << endl;
        cout << "Masukkan Pilihan Anda";
        cin >> pilihan;
        if (pilihan == 1)
        {
            cout << "Persegi" << endl;
            cout << "Masukkan panjang sisi";
            cin >> panjang;
            cout << "Keliling persegi : " << 4 * panjang << endl;
            cout << "luas persegi : " << panjang * panjang << endl;
        }
        else if (pilihan == 2)
        {
            cout << "Persegi Panjang" << endl;
            cout << "Masukkan panjang ";
            cin >> panjang;
            cout << "Masukkan lebar ";
            cin >> lebar;
            cout << "Keliling persegi panjang: " << 2 * (panjang + lebar) << endl;
            cout << "luas persegi panjang: " << panjang * lebar << endl;
        }
        else if (pilihan == 3)
        {
            cout << "Segitiga" << endl;
            cout << "Masukkan tinggi ";
            cin >> tinggi;
            cout << "Masukkan panjang alas ";
            cin >> alas;
            cout << "Keliling segitiga: " << 3 * (alas) << endl;
            cout << "luas segitiga: " << tinggi * alas * 0.5 << endl;
        }
        else if (pilihan == 4)
        {
            cout << "Linkaran" << endl;
            cout << "Masukkan panjang  jari-jari ";
            cin >> jari_jari;
            cout << "Keliling lingkaran: " << 3.14 * 2 * jari_jari << endl;
            cout << "luas lingkaran: " << 3.14 * jari_jari * jari_jari << endl;
        }
        else
        {
            cout << "Pilihan anda salah " << endl;
        }
        break;
    case 2:
        cout << "Anda memilih bangun ruang" << endl;
        cout << "Bangun ruang\n[1]Kubus\n[2]Balok \n[3]Bola\n[4]Kerucut" << endl;
        cout << "===========================================================================================================" << endl;
        cout << endl;
        cout << "Masukkan Pilihan Anda";
        cin >> pilihan;
        if (pilihan == 1)
        {
            cout << "Kubus" << endl;
            cout << "Masukkan panjang sisi ";
            cin >> sisi;
            cout << "Volume kubus : " << sisi * sisi * sisi << endl;
            cout << "Luas Permukaan kubus: " << 6 * sisi * sisi << endl;
        }
        else if (pilihan == 2)
        {
            cout << "Balok" << endl;
            cout << "Masukkan panjang  ";
            cin >> panjang;
            cout << "Masukkan lebar";
            cin >> lebar;
            cout << "Masukkan tinggi";
            cin >> tinggi;
            cout << "Volume balok : " << panjang * lebar * tinggi << endl;
            cout << "Luas Permukaan balok: " << 2 * panjang * lebar + 2 * panjang * tinggi + 2 * lebar * tinggi << endl;
        }

    default:
        break;
    }
}