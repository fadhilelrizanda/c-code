#include <iostream>
using namespace std;

class Kendaraan
{
private:
    int harga = 100000;

public:
    int j_roda;
    string nama_kendaraan;
    Kendaraan(string nama)
    {
        nama_kendaraan = nama;
    }
    void Klakson()
    {
        cout << "telolet" << endl;
    }
    void setRoda(int roda)
    {
        j_roda = roda;
    }
};

class Motor : public Kendaraan
{

public:
    Motor(string nama) : Kendaraan(nama)
    {
        cout << "test" << endl;
    }
    void logika()
    {
        if (j_roda = !2)
        {
            cout << "Itu bukan motor" << endl;
        }
        else
        {
            cout << "OK!" << endl;
        }
    }
};

int main()
{
    Motor vario("Vario");
    vario.setRoda(2);
    vario.Klakson();
    vario.logika();
}