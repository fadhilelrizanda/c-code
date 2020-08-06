#include<iostream>
using namespace std;

//* Define Var
int baris, spasi, bintang, tinggi, batas, choice;
char type;

//* Define Function
void segitigaTegak(char code);
void segitigaTerbalik(char code);
void liner();
void watermark();
void error();

int main()
{
    cout << "Masukan Tinggi Segitiga: ";
    cin >> tinggi;
    cout<<"Masukkan Bentuk Segitiga: ";
    cin>>type;
    cout<<"Masukkan type segitiga yang ingin dipilih \n[1]Tegak \n[2]Terbalik";
    cin>>choice;
    liner();
    switch (choice)
    {
    case 1:
        segitigaTegak(type);
        break;
    case 2:
        segitigaTerbalik(type);
        break;
    default:
        error();
        break;
    }
    segitigaTegak(type);
    watermark();
}

void segitigaTegak(char code)
{
    for (baris=1; baris<=tinggi; baris++)
    {
        for (spasi=1; spasi<=tinggi-baris; spasi++)
        {
            cout<<" ";
        }
        for (bintang=1; bintang<=baris; bintang++)
        {
            cout<<code;
            cout<<" ";
        }
        cout<<endl;
    }
}
void segitigaTerbalik(char code)
{
    for (batas=tinggi;tinggi>=0; tinggi--)
    {
        for (spasi=0;spasi<=batas-tinggi;spasi++)
        {
            cout<<" ";
        }
        for (bintang=0; bintang<=tinggi; bintang++)
        {
            cout<<code;
            cout<<" ";
        }
        cout<<endl;
    }
}
void liner()
{
    cout<<"-----------------------------------"<<endl;
}

void watermark()
{
    cout<<"-----------------------------------"<<endl;
    cout<<"Fadhil Elrizanda"<<endl;
    cout<<"-----------------------------------"<<endl;
}

void error()
{
    cout<<"404 Choice not found"<<endl;
}
