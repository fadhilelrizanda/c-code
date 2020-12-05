#include <iostream>
using namespace std;

class Hotel
{
private:
    string *nama = new string();
    int *j_kamar = new int;
    int *h_per_malam = new int;
    int *h_malam = new int;

public:
    Hotel(string name, int kamar, int harga, int hari)
    {
        cout << "Konstruktor Hotel dipanggil" << endl;
        nama = &name;
        j_kamar = &kamar;
        h_per_malam = &harga;
        h_malam = &hari;
    }
    void nama_hotel()
    {
        cout << "Nama Hotel : " << *nama << endl;
    }
    int Harga_total()
    {
        return *j_kamar * *h_per_malam * *h_malam;
    }
    ~Hotel()
    {
        cout << "Destruktor class " << *nama << endl;
        delete j_kamar, h_malam, nama, h_per_malam;
    }
};

int main()
{
    Hotel pahlawan("Pahlawan", 2, 100000, 2);
    pahlawan.nama_hotel();
    cout << "Biaya yang dikeluarkan : " << pahlawan.Harga_total() << endl;
    cout << endl;
    Hotel zuri("Zuri", 2, 1000000, 1);
    zuri.nama_hotel();
    cout << "Biaya yang dikeluarkan : " << zuri.Harga_total() << endl;
    cout << endl;
}
