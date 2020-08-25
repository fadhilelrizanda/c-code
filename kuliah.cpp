#include <iostream>
using namespace std;

//* Function/Procedur
void line(int star, char symbol);
void watermark();
void yN();

//* Global Var
int bilanganTertentu[10];
float rata_rata_bil_tersebut;
int jumlahBilangan = 0;
int arrayIndex = 0;
bool repeat = false;
char yNo;

int main()
{
start:
    cout << "Buat program dengan larik untuk menghitung rata-rata deret bilangan ganjil 1. d.. 100 yang habis dibagi 5" << endl;
    line(40, '=');
    cout << "Bilangan Tersebut: ";
    for (int i = 0; i <= 100; i++)
    {

        if (i % 2 != 0 && i % 5 == 0)
        {
            bilanganTertentu[arrayIndex] = i;
            cout << i << " ";
            arrayIndex++;
        }
        else
        {
        }
    }
    cout << endl;

    cout << "Banyak Bilangan yang memenuhi syarat : " << arrayIndex << endl;
    for (int i = 0; i <= arrayIndex; i++)
    {
        jumlahBilangan = jumlahBilangan + bilanganTertentu[i];
    }
    cout << "Rata-rata bilangan tersebut adalah : " << jumlahBilangan / (arrayIndex) << endl;
    line(40, '*');
    yN();
    if (repeat)
    {
        goto start;
        system("cls");
    }
    watermark();
}

void line(int star, char symbol)
{
    for (int i = 0; i <= star; i++)
    {
        cout << symbol;
    }
    cout << endl;
}

void watermark()
{
    cout << "Created By Fadhil Elrizanda" << endl;
}

void yN()
{
    cout << "Ulangi Program? y/n : ";
    cin >> yNo;
    if (yNo == 'y')
    {
        repeat = true;
    }
    else
    {
        repeat = false;
    }
}