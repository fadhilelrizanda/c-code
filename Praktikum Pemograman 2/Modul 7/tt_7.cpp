#include <iostream>
using namespace std;

class Hotel
{

protected:
    string nama_hotel;
    int jumlah_kamar;
    int harga_per_malam;
    int jumlah_malam;

public:
    Hotel(string nama)
    {
        nama_hotel = nama;
    }

    int harga_total()
    {
        return jumlah_kamar * jumlah_malam * harga_per_malam;
    }
    int harga_total(float diskon)
    {
        int total = jumlah_kamar * jumlah_malam * harga_per_malam;
        int total_diskon = total * diskon;
        return total - total_diskon;
    }

    void setKamar(int kamar)
    {
        jumlah_kamar = kamar;
    }

    virtual void setHarga(int harga)
    {
        harga_per_malam = harga;
    }

    void setMalam(int malam)
    {
        jumlah_malam = malam;
    }

    string getNama()
    {
        return nama_hotel;
    }

    ~Hotel()
    {
        cout << "Destruktur Hotel : " << nama_hotel << " dipanggil" << endl;
    }
};

class Hotel_mewah : public Hotel
{
public:
    Hotel_mewah(string nama) : Hotel(nama)
    {
        cout << endl;
        cout << endl;
        cout << "Hotel Mewah" << endl;
        cout << "**********************************************************" << endl;
        cout << nama_hotel << endl;
        cout << "**********************************************************" << endl;
    }
    void setHarga(int harga)
    {
        int harga_pajak = harga * 0.1;
        harga_per_malam = harga + harga_pajak;
        cout << "Harga pajak : " << harga_pajak << endl;
        cout << "Harga total : " << harga_per_malam << endl;
    }
};

int main()
{
    int a, b, c, d, e, f;
    Hotel pahlawan("pahlawan");
    cout << "Hotel :" << pahlawan.getNama() << endl;
    cout << "Masukkan jumlah kamar yang ingin di pesan : ";
    cin >> a;
    cout << "Masukkan Berapa lama ingin di hotel : ";
    cin >> b;
    cout << "Masukkan harga permalam : ";
    cin >> c;
    pahlawan.setKamar(a);
    pahlawan.setMalam(b);
    pahlawan.setHarga(c);
    cout << "Total uang yang dikeluarkan jika menginap di " << pahlawan.getNama() << ": " << pahlawan.harga_total() << endl;
    cout << "Jika didiskon pada hari spesial (10%) :  " << pahlawan.harga_total(0.1) << endl;

    Hotel_mewah zuri("zuri");
    cout << "Masukkan jumlah kamar yang ingin di pesan : ";
    cin >> d;
    cout << "Masukkan Berapa lama ingin di hotel : ";
    cin >> e;
    cout << "Masukkan harga permalam : ";
    cin >> f;
    zuri.setKamar(d);
    zuri.setMalam(e);
    zuri.setHarga(f);
    cout << "Total uang yang dikeluarkan jika menginap di " << zuri.getNama() << ": " << zuri.harga_total() << endl;
    cout << "Jika didiskon pada hari spesial (10%) :  " << zuri.harga_total(0.1) << endl;
}
