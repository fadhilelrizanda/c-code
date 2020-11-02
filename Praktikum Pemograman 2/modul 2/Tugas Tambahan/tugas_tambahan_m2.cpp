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
#define phi 3.14
int main()
{
    int pilihan, bangun;
    float panjang, lebar, jari_jari, tinggi, sisi_a, sisi_b, alas, sisi, luas, keliling, volume, luas_permukaan;

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
            cout << "Masukkan panjang sisi : ";
            cin >> panjang;
            keliling = 4 * panjang;
            luas = panjang * panjang;
            cout << "Keliling persegi : " << keliling << endl;
            cout << "luas persegi : " << luas << endl;
        }
        else if (pilihan == 2)
        {
            cout << "Persegi Panjang" << endl;
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
            luas = panjang * lebar;
            keliling = 2 * (panjang + lebar);
            cout << "Keliling persegi panjang : " << keliling << endl;
            cout << "luas persegi panjang: " << luas << endl;
        }
        else if (pilihan == 3)
        {
            cout << "Segitiga" << endl;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;
            cout << "Masukkan panjang alas : ";
            cin >> alas;
            keliling = 3 * (alas);
            luas = tinggi * alas * 0.5;
            cout << "Keliling segitiga: " << keliling << endl;
            cout << "luas segitiga: " << luas << endl;
        }
        else if (pilihan == 4)
        {
            cout << "Linkaran" << endl;
            cout << "Masukkan panjang  jari-jari : ";
            cin >> jari_jari;
            keliling = phi * 2 * jari_jari;
            luas = phi * jari_jari * jari_jari;
            cout << "Keliling lingkaran: " << keliling << endl;
            cout << "luas lingkaran: " << luas << endl;
        }
        else
        {
            cout << "Pilihan anda salah " << endl;
        }
        break;
    case 2:
        cout << "Anda memilih bangun ruang" << endl;
        cout << "Bangun ruang\n[1]Kubus\n[2]Balok \n[3]Bola" << endl;
        cout << "===========================================================================================================" << endl;
        cout << endl;
        cout << "Masukkan Pilihan Anda";
        cin >> pilihan;
        if (pilihan == 1)
        {
            cout << "Kubus" << endl;
            cout << "Masukkan panjang sisi : ";
            cin >> sisi;
            volume = sisi * sisi * sisi;
            luas_permukaan = 6 * sisi * sisi;
            cout << "Volume kubus : " << volume << endl;
            cout << "Luas Permukaan kubus : " << luas_permukaan << endl;
        }
        else if (pilihan == 2)
        {
            cout << "Balok" << endl;
            cout << "Masukkan panjang  : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;
            volume = panjang * lebar * tinggi;
            luas_permukaan = 2 * panjang * lebar + 2 * panjang * tinggi + 2 * lebar * tinggi;
            cout << "Volume balok : " << volume << endl;
            cout << "Luas Permukaan balok : " << luas_permukaan << endl;
        }
        else if (pilihan == 3)
        {
            cout << "Bola" << endl;
            cout << "Masukkan jari-jari : ";
            cin >> jari_jari;
            volume = 4 / 3 * phi * jari_jari * jari_jari * jari_jari;
            luas_permukaan = 4 * phi * jari_jari * jari_jari;
            cout << "Volume Bola : " << volume << endl;
            cout << "Luas Permukaan Bola: " << luas_permukaan << endl;
        }
        else
        {
            cout << "Pilihan yang anda masukkan salah " << endl;
        }
        break;

    default:
        cout << "Pilihan yang anda masukkan salah " << endl;
        break;
    }
    cout << endl;
    cout << endl;
    cout << "================================================" << endl;
    cout << "Fadhil Elrizanda" << endl;
    cout << "1910952034" << endl;
    cout << "Modul 2" << endl;
    cout << "Kelompok 10" << endl;
    cout << endl;
}