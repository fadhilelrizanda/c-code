#include<iostream>
using namespace std;

int baris, spasi, bintang, tinggi, batas;
char type;
void segitigaTerbalik(char code);
void liner();
void watermark();

int main()
{


    cout << " masukan tinggi ";
    cin >> tinggi;
    cout<<"Masukkan bentuk segitiga: ";
    cin>>type;
    liner();
    segitigaTerbalik(type);
    watermark();

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
}