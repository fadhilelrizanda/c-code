#include <iostream>
using namespace std;

struct mahasiswa
{
    string name;
    string jurusan;
};

int main()
{
    mahasiswa yani;
    cin >> yani.name;
    cin >> yani.jurusan;
    cout << yani.name << endl;
    cout << yani.jurusan << endl;
}