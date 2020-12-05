#include <iostream>
using namespace std;

class Kendaraan
{
private:
    string nama_kendaraan;

public:
    Kendaraan(string namaK)
    {
        nama_kendaraan = namaK;
    }
    void klakson()
    {
        cout << "telolet" << endl;
    }

    void klakson(string klakson)
    {
        cout << klakson << endl;
    }

    void klakson(int jumlah)
    {
        for (int i = 0; i < jumlah; i++)
        {
            cout << "telolet" << endl;
        }
    }
};

int main()
{
    Kendaraan motorku("Vario");
    motorku.klakson();
    motorku.klakson("teettt");
    motorku.klakson(5);
}