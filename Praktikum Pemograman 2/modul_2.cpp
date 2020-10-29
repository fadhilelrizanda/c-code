#include<iostream>
using namespace std;

int main()
{
bool A,B,C,X;
cout<<"Masukkan Nilai A : ";
cin>>A;
cout<<"Masukkan Nilai B : ";
cin>>B;
cout<<"Masukkan Nilai C : ";
cin>>C;
X = (A && B) || ( !C);
cout<<"Nilai X : "<<X<<endl;
}