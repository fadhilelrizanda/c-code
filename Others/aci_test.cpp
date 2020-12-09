#include <iostream> 
using namespace std;

class Kendaraan
{
    public:
        virtual int JmlRoda()=0;
};

class Mobil:public Kendaraan
{
    public:
        int JmlRoda()
        {
            return 4;
        }
};

int main(void)
{
   Mobil  senia;
   cout << "Jumlah roda : " << senia.JmlRoda() << endl;
   return 0;
}
