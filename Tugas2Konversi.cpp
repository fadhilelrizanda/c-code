#include <iostream>
using namespace std;

//Global Var
float suhu;
float luas;
float panjang;
float lebar;
int choice;
int suhuChoice;
int bangunanChoice;
float inputNilaiSuhu;
#define phi 3.14

// Suhu
void celciusConvert(int choice);
void kelvinConvert(int choice);
void reamurConvert(int choice);
void fahrenheitConvert(int choice);
void suhuConversi();
void inputSuhu();
void hasilSuhu();

// Luas Bangunan
void luasBangunan();
void persegi();
void persegiPanjang();
void layangLayang();
void segitiga();
void trapesium();
void lingkaran();

// additional
void hasilError();
void waterMark();
int main()
{
    cout << "************************************" << endl;
    cout << "Program Konversi Suhu dan Ruangan" << endl;
    cout << "[1]Konversi Suhu \n[2]Luas Bangunan" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Conversi Suhu" << endl;
        cout << "************************************" << endl;
        suhuConversi();
        break;
    case 2:
        cout << "Luas Bangunan" << endl;
        luasBangunan();
        break;
    default:

        hasilError();
        break;
    }
    waterMark();
}

void suhuConversi()
{
    cout << "[1]Celcius Ke Kelvin\n[2]Celcius Ke Reamur\n[3]Celcius Ke Fahrenheit\n[4]Kelvin Ke Celcius \n[5]Kelvin Ke Reamur\n[6]Kelvin Ke Fahrenheit\n[7]Fahrenheit Ke Celcius\n[8]Fahrenheit Ke Kelvin\n[9]Fahrenheit Ke Reamur\n[10]Reamur Ke Celcius\n[11]Reamur Ke Kelvin\n[12]Reamur Ke Fahrenheit" << endl;
    cout << "************************************" << endl;
    cout << "Pilih Conversi Suhu" << endl;
    cin >> suhuChoice;
    switch (suhuChoice)
    {
    case 1:
        cout << "Celcius Ke Kelvin" << endl;
        celciusConvert(1);
        break;
    case 2:
        cout << "Celcius Ke Reamur" << endl;
        celciusConvert(2);
        break;
    case 3:
        cout << "Celcius Ke Fahrenheit" << endl;
        celciusConvert(3);
        break;
    case 4:
        cout << "Kelvin Ke Celcius" << endl;
        kelvinConvert(1);
        break;
    case 5:
        cout << "Kelvin Ke Reamur" << endl;
        kelvinConvert(2);
        break;
    case 6:
        cout << "Kelvin Ke Fahrenheit" << endl;
        kelvinConvert(3);
        break;
    case 7:
        cout << "Fahrenheit Ke Celcius" << endl;
        fahrenheitConvert(1);
        break;
    case 8:
        cout << "Fahrenheit Ke Kelvin" << endl;
        fahrenheitConvert(2);
        break;
    case 9:
        cout << "Fahrenheit Ke Reamur" << endl;
        fahrenheitConvert(3);
        break;
    case 10:
        cout << "Reamur Ke Celcius" << endl;
        reamurConvert(1);
        break;
    case 11:
        cout << "Reamur Ke Kelvin" << endl;
        reamurConvert(2);
        break;
    case 12:
        cout << "Reamur Ke Fahrenheit" << endl;
        reamurConvert(3);
        break;
    default:
        cout << "Anda Salah Memasukkan Pilihan" << endl;
        break;
    }
}

void celciusConvert(int choice)
{

    switch (choice)
    {
    case 1:
        //Celcius Ke Kelvin
        inputSuhu();
        suhu = inputNilaiSuhu + 273;
        hasilSuhu();
        break;
    case 2:
        //Celcius Ke Reamur
        inputSuhu();
        suhu = inputNilaiSuhu * 4 / 5;
        hasilSuhu();
        break;
    case 3:
        //Celcius Ke Fahrenheit
        inputSuhu();
        suhu = (inputNilaiSuhu * 9 / 5) + 32;
        hasilSuhu();
        break;
    default:
        hasilError();
        break;
    }
}
void kelvinConvert(int choice)
{

    switch (choice)
    {
    case 1:
        //Kelvin Ke Celcius
        inputSuhu();
        suhu = inputNilaiSuhu - 273;
        hasilSuhu();
        break;
    case 2:
        //Kelvin Ke Reamur
        inputSuhu();
        suhu = (inputNilaiSuhu - 237) * 4 / 5;
        hasilSuhu();
        break;
    case 3:
        //Kelvin Ke Fahrenheit
        inputSuhu();
        suhu = ((inputNilaiSuhu - 273) * 9 / 5) + 32;
        hasilSuhu();
        break;
    default:
        hasilError();
        break;
    }
}
void reamurConvert(int choice)
{

    switch (choice)
    {
    case 1:
        //Reamur Ke Celcius
        inputSuhu();
        suhu = inputNilaiSuhu * 5.4;
        hasilSuhu();
        break;
    case 2:
        //Reamur Ke Kelvin
        inputSuhu();
        suhu = (inputNilaiSuhu * 5 / 4) + 273;
        hasilSuhu();
        break;
    case 3:
        //Reamur Ke Fahrenheit
        inputSuhu();
        suhu = (inputNilaiSuhu * 9 / 4) + 32;
        hasilSuhu();
        break;
    default:
        hasilError();
        break;
    }
}
void fahrenheitConvert(int choice)
{

    switch (choice)
    {
    case 1:
        //Fahrenheit Ke Celcius
        inputSuhu();
        suhu = (inputNilaiSuhu - 32) * 5.4;
        hasilSuhu();
        break;
    case 2:
        //Fahrenheit Ke Kelvin
        inputSuhu();
        suhu = (inputNilaiSuhu - 32) * 5 / 9 + 273;
        hasilSuhu();
        break;
    case 3:
        //Fahrenheit Ke Reamur
        inputSuhu();
        suhu = (inputNilaiSuhu - 32) * 4 / 9;
        hasilSuhu();
        break;
    default:
        hasilError();
        break;
    }
}

void inputSuhu()
{
    cout << "Masukkan besar suhu yang akan dikonversi" << endl;
    cin >> inputNilaiSuhu;
}

void hasilSuhu()
{
    cout << "************************************" << endl;
    cout << "Hasil Konversi Suhu adalah : " << suhu << endl;
}

void hasilError()
{
    cout << "************************************" << endl;
    cout << "Pilihan/angka yang anda masukkan error" << endl;
    cout << "Silahkan ulangi kembali" << endl;
}

void luasBangunan()
{
    cout << "************************************" << endl;
    cout << "Masukkan Bangunan yang akan dikonversi" << endl;
    cout << "************************************" << endl;
    cout << "[1]Persegi\n[2]Persegi Panjang\n[3]Layang-layang(belah ketupat)\n[4]Segitiga\n[5]Trapesium\n[6]Lingkaran" << endl;
    cin >> bangunanChoice;
    switch (bangunanChoice)
    {
    case 1:
        cout << "************************************" << endl;
        cout << "Luas Persegi: " << endl;
        persegi();
        cout << "Luas adalah" << luas << endl;
        break;
    case 2:
        cout << "************************************" << endl;
        cout << "Luas Persegi Panjang: " << endl;
        persegiPanjang();
        cout << "Luas adalah : " << luas << endl;
        break;
    case 3:
        cout << "************************************" << endl;
        cout << "Luas Layang-layang: " << endl;
        layangLayang();
        cout << "Luas adalah : " << luas << endl;
        break;
    case 4:
        cout << "************************************" << endl;
        cout << "Luas Segitiga: " << endl;
        segitiga();
        cout << "Luas adalah : " << luas << endl;
        break;
    case 5:
        cout << "************************************" << endl;
        cout << "Luas Trapesium : " << endl;
        trapesium();
        cout << "Luas adalah : " << luas << endl;
        break;
    case 6:
        cout << "************************************" << endl;
        cout << "Luas Lingkaran : " << endl;
        lingkaran();
        cout << "Luas adalah : " << luas << endl;
        break;

    default:
        hasilError();
        break;
    }
}

void persegi()
{
    float sisi;
    cout << "Masukkan Panjang Sisi: ";
    cin >> sisi;
    luas = sisi * sisi;
}
void persegiPanjang()
{

    float panjang, lebar;
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;
    luas = panjang * lebar;
}
void layangLayang()
{

    float diagonala, diagonalb;
    cout << "Masukkan Diagonal 1 : ";
    cin >> diagonala;
    cout << "Masukkan Diagonal 2 : ";
    cin >> diagonalb;
    luas = diagonala * diagonalb;
}
void segitiga()
{

    float alas, tinggi;
    cout << "Masukkan Alas  : ";
    cin >> alas;
    cout << "Masukkan Tinggi  : ";
    cin >> tinggi;
    luas = alas * tinggi / 2;
}
void trapesium()
{

    float alas1, tinggi, alas2;
    cout << "Masukkan Alas 1  : ";
    cin >> alas1;
    cout << "Masukkan Alas 2  : ";
    cin >> alas2;
    cout << "Masukkan Tinggi  : ";
    cin >> tinggi;
    luas = (alas1 + alas2) * tinggi / 2;
}
void waterMark()
{
    cout << "************************************" << endl;
    cout << "By Fadhil Elrizanda" << endl;
    cout << "************************************" << endl;
}

void lingkaran()
{
    float jari_jari;
    cout << "Masukkan Jari-jari ";
    cin >> jari_jari;
    luas = phi * jari_jari * jari_jari;
}